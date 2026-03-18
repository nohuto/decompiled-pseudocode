/*
 * XREFs of MiDeleteSystemPageTables @ 0x14008283C
 * Callers:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiZeroSystemPdes @ 0x140082A5C (MiZeroSystemPdes.c)
 *     MiAddSystemPageTableToList @ 0x140082B74 (MiAddSystemPageTableToList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiDeleteSystemPageTables(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  char v13; // r15
  KIRQL v14; // al
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  KIRQL v19; // r9
  unsigned __int64 v20; // r13
  KIRQL v21; // r13
  __int64 v22; // rdx
  bool v24; // cf
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+70h] [rbp+8h]
  KIRQL v27; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  if ( a1 )
  {
    SharedVm = MiGetSharedVm(a1);
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v13 = v12;
  }
  else
  {
    v13 = 17;
  }
  v14 = ExAcquireSpinLockExclusive(&dword_14036C59C);
  v27 = v14;
  v15 = a3;
  if ( a3 >= a4 )
  {
    v21 = v14;
    goto LABEL_15;
  }
  v16 = a3 + 8;
  do
  {
    v17 = MI_READ_PTE_LOCK_FREE(a3);
    v28 = v17;
    if ( (v17 & 1) != 0 && (v17 & 0x80u) == 0LL )
    {
      v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( !(unsigned int)MiAddSystemPageTableToList(v26, v20) )
      {
        v15 -= 8LL;
        v16 -= 8LL;
        a3 -= 8LL;
LABEL_10:
        v21 = v27;
        goto LABEL_11;
      }
      v19 = v27;
      v26 = v20;
    }
    if ( !v6 )
      v7 = v15;
    if ( (++v6 & 0xF) != 0 )
    {
      if ( (v16 & 0xFFF) != 0 )
        goto LABEL_10;
    }
    else
    {
      if ( a1 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(a1) )
          goto LABEL_30;
        v24 = (unsigned __int8)v13 < 2u;
      }
      else
      {
        v24 = v19 < 2u;
      }
      if ( !v24 || !KeShouldYieldProcessor() )
        goto LABEL_10;
    }
LABEL_30:
    if ( v7 )
    {
      MiZeroSystemPdes(v7, v16, v18, a5);
      v7 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C59C);
    v21 = v27;
    __writecr8(v27);
    v6 = 0LL;
    if ( a1 )
    {
      LOBYTE(v25) = v13;
      MiRelockWorkingSetExclusive(a1, v25);
    }
    ExAcquireSpinLockExclusive(&dword_14036C59C);
LABEL_11:
    v15 += 8LL;
    v16 += 8LL;
    a3 += 8LL;
  }
  while ( v15 < v29 );
  if ( v7 )
    MiZeroSystemPdes(v7, v15, v18, a5);
  v5 = v26;
LABEL_15:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C59C);
  __writecr8(v21);
  if ( a1 )
  {
    LOBYTE(v22) = v13;
    MiUnlockWorkingSetExclusive(a1, v22);
  }
  return v5;
}
