/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14011BF20 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14049DE90 (AlpcpCaptureIdMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v8; // rdi
  __int64 v10; // r8
  _DWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v13; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v15; // [rsp+48h] [rbp-20h]
  __int64 v16[3]; // [rsp+50h] [rbp-18h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = 0LL;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v18, &v17);
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           0x20000u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    v15 = Object;
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v5 = AlpcpLookupMessage((__int64)Object, v18, v17, &v13);
        v12[1] = v5;
        if ( v5 >= 0 )
        {
          if ( (*(_DWORD *)(v13 + 40) & 0x80u) == 0 )
          {
            v6 = *(struct _KTHREAD **)(v13 + 32);
            if ( v6 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v13 + 32), v12);
              v8 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v12[0] )
                  ObDereferenceObjectDeferDelete(v8);
              }
              else if ( *(_QWORD *)&IoThreadToProcess(v6)[2].ThreadSeed[16] || PoEnergyEstimationEnabled() )
              {
                v8 = v6;
                PsImpersonateContainerOfThread((__int64)v6);
              }
              else
              {
                v8 = 0LL;
              }
              if ( v8 )
              {
                if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
                   ? 0LL
                   : KeGetCurrentThread()->Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v8, v16);
                  *(_QWORD *)(v10 + 696) = v16[0];
                }
              }
            }
            AlpcpUnlockMessage(v13);
          }
          else
          {
            AlpcpUnlockMessage(v13);
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
  if ( v15 )
    ObfDereferenceObject(v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
