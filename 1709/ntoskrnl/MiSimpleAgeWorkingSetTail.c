/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x14021E4C0
 * Callers:
 *     MiSimpleAgePte @ 0x14021E290 (MiSimpleAgePte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1, _KPROCESS *a2)
{
  __int64 i; // rsi
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  LONG *SharedVm; // rbx

  for ( i = *(_QWORD *)(a1 + 144);
        ;
        MiProcessVmAccessedInfo(
          v6,
          *(_DWORD **)(i + 256),
          (__int64 (__fastcall *)(_QWORD *, __int64, __int64, unsigned __int64, __int64))MiSimpleAgeWorkingSetEPTCallback,
          i) )
  {
    MiFlushTbList(*(_QWORD *)(i + 64), a2);
    v5 = *(_DWORD **)(i + 256);
    if ( !v5 || !*v5 )
      break;
    v6 = *(_QWORD *)(a1 + 8);
    LOBYTE(v4) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(v6, v4);
    VmQueryAccessedState(*(_QWORD *)(i + 256) + 8LL, **(unsigned int **)(i + 256), 1LL);
    SharedVm = MiGetSharedVm(v6);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  return 0LL;
}
