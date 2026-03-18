/*
 * XREFs of PopFxActivateDevice @ 0x1400FC950
 * Callers:
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140150FF0 (PoFxStartDevicePowerManagement.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14023D594 (PoFxActivateDeviceForSystemTransition.c)
 *     PopFxActivateDevicesForSx @ 0x14023D8A4 (PopFxActivateDevicesForSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023F168 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402431DC (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PoFxActivateComponent @ 0x1400FD690 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  ULONG_PTR v8; // rbx
  unsigned int i; // edi
  __int64 j; // rsi
  ULONG_PTR v11; // rdi

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  if ( (*(_DWORD *)(v5 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 624LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 88));
    __writecr8(v7);
  }
  else
  {
    v8 = 0LL;
    ++*(_DWORD *)(v5 + 120);
    if ( (*(_DWORD *)(v5 + 296) & 4) != 0 )
    {
      v8 = *(_QWORD *)(v5 + 80);
      PopFxAddRefDevice(v8);
      for ( i = 0; i < *(_DWORD *)(v8 + 628); ++i )
        PoFxActivateComponent(v8, i);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u);
      if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg && a3 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x800u);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    __writecr8(v7);
    if ( v8 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 628); j = (unsigned int)(j + 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v8 + 632) + 8 * j);
        if ( (*(_DWORD *)(v11 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v8 + 632) + 8 * j), v11 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v11 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v11 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v11, v11 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v8 + 544), Executive, 0, 0, 0LL);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 216), 0LL, 0x20u);
    }
  }
}
