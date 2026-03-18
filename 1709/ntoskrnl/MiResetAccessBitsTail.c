/*
 * XREFs of MiResetAccessBitsTail @ 0x14021E1E0
 * Callers:
 *     MiResetAccessBitPte @ 0x14021DF00 (MiResetAccessBitPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1, _KPROCESS *a2)
{
  __int64 i; // rsi
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  LONG *SharedVm; // rbx

  for ( i = *(_QWORD *)(a1 + 144);
        ;
        MiProcessVmAccessedInfo(
          v6,
          *(_DWORD **)(i + 16),
          (__int64 (__fastcall *)(_QWORD *, __int64, __int64, unsigned __int64, __int64))MiResetAccessBitsEPTCallback,
          i) )
  {
    v4 = *(_QWORD *)(i + 8);
    if ( v4 )
      MiFlushTbList(v4, a2);
    v5 = *(_DWORD **)(i + 16);
    if ( !v5 || !*v5 )
      break;
    v6 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(v6, (__int64)a2);
    VmQueryAccessedState(*(_QWORD *)(i + 16) + 8LL, **(unsigned int **)(i + 16), *(_QWORD *)(i + 8) != 0LL);
    SharedVm = MiGetSharedVm(v6);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  return 0LL;
}
