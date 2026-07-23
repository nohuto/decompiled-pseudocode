/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400604FC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1404CF0D0 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v11; // rdi
  _DWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v16; // [rsp+48h] [rbp-20h]
  __int64 v17[3]; // [rsp+50h] [rbp-18h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = 0LL;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v19, &v18);
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           0x20000u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    v16 = Object;
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v5 = AlpcpLookupMessage((__int64)Object, v19, v18, &BugCheckParameter2);
        v13[1] = v5;
        if ( v5 >= 0 )
        {
          v8 = *(unsigned int *)(BugCheckParameter2 + 40);
          if ( (v8 & 0x80u) == 0LL )
          {
            v9 = *(struct _KTHREAD **)(BugCheckParameter2 + 32);
            if ( v9 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(
                                                        *(struct _KTHREAD **)(BugCheckParameter2 + 32),
                                                        v13);
              v11 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v13[0] )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( *(_QWORD *)&IoThreadToProcess(v9)[2].ThreadSeed[16] || PoEnergyEstimationEnabled() )
              {
                v11 = v9;
                PsImpersonateContainerOfThread((__int64)v9);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v6 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
                   ? 0LL
                   : KeGetCurrentThread()->Teb;
                if ( v6 )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v11, v17);
                  v6[87] = v17[0];
                }
              }
            }
            AlpcpUnlockMessage(BugCheckParameter2, v8, (__int64)v6, v7);
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2, v8, (__int64)v6, v7);
            v5 = -1073740029;
          }
        }
      }
      else
      {
        v5 = -1073741790;
      }
    }
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
