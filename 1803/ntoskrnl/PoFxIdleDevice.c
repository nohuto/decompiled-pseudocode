/*
 * XREFs of PoFxIdleDevice @ 0x140146A58
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14014E264 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402764F4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14027A2B4 (PopPepResetDeviceAccountingLevel.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1405C9760 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x14073DEB8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14073FEE4 (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x140760A40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
    if ( (*(_DWORD *)(v2 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v2 + 80) + 704LL) & 1) == 0 )
    {
      --*(_DWORD *)(v2 + 120);
      if ( (*(_DWORD *)(v2 + 296) & 4) != 0 )
      {
        v5 = *(_QWORD *)(v2 + 80);
        if ( *(_DWORD *)(v5 + 708) )
        {
          do
            PopFxIdleComponent(v5, v1++, 2);
          while ( v1 < *(_DWORD *)(v5 + 708) );
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v4);
  }
}
