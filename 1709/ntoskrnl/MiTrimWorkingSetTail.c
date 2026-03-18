/*
 * XREFs of MiTrimWorkingSetTail @ 0x140010B30
 * Callers:
 *     MiTrimPte @ 0x140010D30 (MiTrimPte.c)
 * Callees:
 *     MiTrimmedEnough @ 0x140010FF0 (MiTrimmedEnough.c)
 *     MiTrimWorkingSetBuildup @ 0x1400116EC (MiTrimWorkingSetBuildup.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rsi
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int64 v7; // r8
  __int64 SharedVm; // rbx

  v1 = *(_QWORD *)(a1 + 144);
  for ( i = *(_QWORD *)(a1 + 8); ; MiProcessVmAccessedInfo(i, *(_QWORD *)(v1 + 240), MiTrimWorkingSetEPTCallback, v1) )
  {
    MiTrimWorkingSetBuildup(i, v1);
    if ( (*(_DWORD *)v1 & 0x80u) != 0 )
    {
      v7 = *(_QWORD *)(v1 + 16) - *(_QWORD *)(v1 + 24);
      *(_QWORD *)(i + 8) += v7;
      *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 16);
      v4 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(i + 172)) + 5680LL);
      *(_QWORD *)(v4 + 8LL * (*(_DWORD *)v1 & 0xF) + 2592) += v7;
    }
    v5 = *(_DWORD **)(v1 + 240);
    if ( !v5 || !*v5 )
      break;
    LOBYTE(v4) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(i, v4);
    VmQueryAccessedState(*(_QWORD *)(v1 + 240) + 8LL, **(unsigned int **)(v1 + 240), 0LL);
    SharedVm = MiGetSharedVm(i);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  if ( (*(_DWORD *)v1 & 0x800) != 0 && (unsigned int)MiTrimmedEnough(i, v1) )
    return 2LL;
  else
    return 0LL;
}
