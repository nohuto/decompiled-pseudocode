/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x14021EA70
 * Callers:
 *     MiUpdateOldPte @ 0x14021E890 (MiUpdateOldPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1, __int64 a2)
{
  __int64 i; // rbp
  _DWORD *v4; // rax
  __int64 v5; // rdi
  LONG *SharedVm; // rbx

  for ( i = *(_QWORD *)(a1 + 144);
        ;
        MiProcessVmAccessedInfo(
          v5,
          *(_DWORD **)(i + 208),
          (__int64 (__fastcall *)(_QWORD *, __int64, __int64, unsigned __int64, __int64))MiUpdateOldPagesEPTCallback,
          i) )
  {
    if ( *(_DWORD *)(i + 36) )
    {
      MiFreeWsleList(*(_QWORD *)(a1 + 8), i + 24, 0);
      *(_DWORD *)(i + 36) = 0;
    }
    v4 = *(_DWORD **)(i + 208);
    if ( !v4 || !*v4 )
      break;
    v5 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 4);
    MiUnlockWorkingSetExclusive(v5, a2);
    VmQueryAccessedState(*(_QWORD *)(i + 208) + 8LL, **(unsigned int **)(i + 208), 0LL);
    SharedVm = MiGetSharedVm(v5);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  return 0LL;
}
