/*
 * XREFs of PopFxActivateDevice @ 0x140146BBC
 * Callers:
 *     PoFxActivateDevice @ 0x140146BA0 (PoFxActivateDevice.c)
 *     PopFxActivateDevicesForSx @ 0x14014E198 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14014E8B8 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxStartDevicePowerManagement @ 0x140181020 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402764F4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14027A2B4 (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140078070 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
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
  if ( (*(_DWORD *)(v5 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 704LL) & 1) != 0 )
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
      for ( i = 0; i < *(_DWORD *)(v8 + 708); ++i )
        PoFxActivateComponent(v8, i, 2LL);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u);
      if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg && a3 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x800u);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    __writecr8(v7);
    if ( v8 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 708); j = (unsigned int)(j + 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v8 + 712) + 8 * j);
        if ( (*(_DWORD *)(v11 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v8 + 712) + 8 * j), v11 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v11 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v11 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v11, v11 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v8 + 544), Executive, 0, 0, 0LL);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 216), 0LL, 0x20u);
    }
  }
}
