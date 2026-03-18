/*
 * XREFs of PopFxActivateDevice @ 0x14006816C
 * Callers:
 *     PoFxActivateDevice @ 0x14006815C (PoFxActivateDevice.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x140138110 (PoFxActivateDeviceForSystemTransition.c)
 *     PopFxActivateDevicesForSx @ 0x14013C9AC (PopFxActivateDevicesForSx.c)
 *     PoFxStartDevicePowerManagement @ 0x1401624F0 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14022EA48 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14022F1B0 (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PoFxActivateComponent @ 0x140068EA0 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2)
{
  __int64 v3; // rdi
  volatile LONG *v4; // rsi
  KIRQL v5; // bp
  ULONG_PTR v6; // rbx
  unsigned int i; // edi
  __int64 j; // rsi
  ULONG_PTR v9; // rdi

  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (volatile LONG *)(v3 + 88);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
  if ( (*(_DWORD *)(v3 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 80) + 624LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
    __writecr8(v5);
  }
  else
  {
    v6 = 0LL;
    ++*(_DWORD *)(v3 + 120);
    if ( (*(_DWORD *)(v3 + 296) & 4) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 80);
      PopFxAddRefDevice(v6);
      for ( i = 0; i < *(_DWORD *)(v6 + 628); ++i )
        PoFxActivateComponent(v6, i);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v6 + 32), 1u);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v5);
    if ( v6 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + 628); j = (unsigned int)(j + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 632) + 8 * j);
        if ( (*(_DWORD *)(v9 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v6 + 632) + 8 * j), v9 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v9 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v9 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v9, v9 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v6 + 544), Executive, 0, 0, 0LL);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 216), 0LL, 0x20u);
    }
  }
}
