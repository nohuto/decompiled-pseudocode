/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68
 * Callers:
 *     <none>
 * Callees:
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14002872C (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // edi
  struct _KTHREAD *v8; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v10; // rbx
  __int64 v12; // r8
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  char v17[16]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+60h] [rbp-28h]
  unsigned __int64 ClientViewSize; // [rsp+70h] [rbp-18h]
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( (*((_BYTE *)Object + 416) & 6) == 6
      && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
    {
      if ( PreviousMode )
      {
        AlpcpProbeAndCaptureMessageHeader((unsigned __int64)Message, (__int64)v17, Flags);
      }
      else
      {
        v18 = *(__int128 *)((char *)&Message->8 + 8);
        ClientViewSize = Message->ClientViewSize;
      }
      v7 = AlpcpLookupMessage((__int64)Object, SDWORD2(v18), ClientViewSize, &v15);
      if ( v7 >= 0 )
      {
        if ( (*(_DWORD *)(v15 + 40) & 0x80u) == 0 )
        {
          v8 = *(struct _KTHREAD **)(v15 + 32);
          if ( v8 )
          {
            WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v15 + 32), &v20);
            v10 = WorkOnBehalfThread;
            if ( WorkOnBehalfThread )
            {
              PsImpersonateContainerOfThread(WorkOnBehalfThread);
              if ( v20 )
                ObDereferenceObjectDeferDelete(v10);
            }
            else if ( *(_QWORD *)&IoThreadToProcess(v8)[2].ThreadSeed[10] || PoEnergyEstimationEnabled() )
            {
              v10 = v8;
              PsImpersonateContainerOfThread(v8);
            }
            else
            {
              v10 = 0LL;
            }
            if ( v10 )
            {
              if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
                 ? 0LL
                 : KeGetCurrentThread()->Teb )
              {
                PsEncodeThreadWorkOnBehalfTicket((__int64)v10, &v16);
                *(_QWORD *)(v12 + 696) = v16;
              }
            }
          }
          AlpcpUnlockMessage(v15);
        }
        else
        {
          AlpcpUnlockMessage(v15);
          v7 = -1073740029;
        }
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
