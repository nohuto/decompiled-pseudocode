/*
 * XREFs of MiDeleteSessionPoolRange @ 0x14025BEE8
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x1405ED150 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 SessionVm; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // bp
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8

  SessionVm = MiGetSessionVm();
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = v6 + 8 * (v7 >> 12);
  v10 = MiLockWorkingSetShared(SessionVm);
  if ( v6 >= v9 )
    return MiUnlockWorkingSetShared(SessionVm, v10, v11);
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal(SessionVm, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(SessionVm, v8, 0LL);
LABEL_6:
    v12 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v12 & 0xC01) == 0 && (v12 & 0x3E0) == 0 )
    {
      if ( !v12 )
        goto LABEL_12;
    }
    else
    {
      MiUnlockPageTableInternal(SessionVm, v8);
      MiUnlockWorkingSetShared(SessionVm, v10, v13);
      MiDeleteSystemPagableVm(SessionVm, 0LL, v6, 1LL, 0, a3);
      v10 = MiLockWorkingSetShared(SessionVm);
      MiLockPageTableInternal(SessionVm, v8, 0LL);
    }
    *(_QWORD *)v6 = ZeroPte;
    if ( MiPteInShadowRange(v6) )
      MiWritePteShadow(v15, v14, v11);
LABEL_12:
    v6 += 8LL;
    if ( v6 == v9 )
      break;
    if ( (v6 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(SessionVm)
       || (unsigned int)MiPageTableLockIsContended(v16, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(SessionVm, v8);
      MiUnlockWorkingSetShared(SessionVm, v10, v17);
      v8 = 0LL;
      MiLockWorkingSetShared(SessionVm);
    }
  }
  while ( v6 < v9 );
  if ( v8 )
    MiUnlockPageTableInternal(SessionVm, v8);
  return MiUnlockWorkingSetShared(SessionVm, v10, v11);
}
