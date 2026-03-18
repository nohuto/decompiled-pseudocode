/*
 * XREFs of PoFxIdleDevice @ 0x140068444
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14013C8A0 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14022EA48 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14022F1B0 (PopPepResetDeviceAccountingLevel.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404DB7F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14056FE2C (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x1406A9870 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  volatile LONG *v3; // rsi
  KIRQL v4; // bp
  ULONG_PTR v5; // rdi

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
            PopFxIdleComponent(v5, v1++);
          while ( v1 < *(_DWORD *)(v5 + 628) );
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v4);
  }
}
