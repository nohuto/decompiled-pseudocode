/*
 * XREFs of PoFxIdleDevice @ 0x1400FBB18
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14023DFE0 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023F168 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402431DC (PopPepResetDeviceAccountingLevel.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14055D2E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x1406D4754 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x1406F9580 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  volatile LONG *v3; // rsi
  KIRQL v4; // bp
  ULONG_PTR v5; // rdi
  _BYTE v6[64]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( a1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v2 = 0LL;
  if ( v2 )
  {
    v3 = (volatile LONG *)(v2 + 88);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    if ( (*(_DWORD *)(v2 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v2 + 80) + 624LL) & 1) == 0 )
    {
      --*(_DWORD *)(v2 + 120);
      if ( (*(_DWORD *)(v2 + 296) & 4) != 0 )
      {
        v5 = *(_QWORD *)(v2 + 80);
        if ( *(_DWORD *)(v5 + 628) )
        {
          do
            PopFxIdleComponent(v5, v1++, 2, (__int64)v6);
          while ( v1 < *(_DWORD *)(v5 + 628) );
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v4);
  }
}
