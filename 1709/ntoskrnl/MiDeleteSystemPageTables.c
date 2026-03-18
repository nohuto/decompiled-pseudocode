/*
 * XREFs of MiDeleteSystemPageTables @ 0x1400F6F60
 * Callers:
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiAddSystemPageTableToList @ 0x1400F72E0 (MiAddSystemPageTableToList.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 *v7; // rbp
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // r12
  KIRQL v14; // al
  __int64 v15; // r8
  KIRQL v16; // r9
  __int64 *v17; // rbx
  _QWORD *v18; // r14
  __int64 PteShadow; // rax
  __int64 v20; // r15
  KIRQL v21; // r15
  __int64 v22; // rdx
  bool v24; // cf
  __int64 v25; // [rsp+70h] [rbp+8h]
  KIRQL v26; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  if ( a1 )
  {
    SharedVm = MiGetSharedVm(a1);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v13 = v12;
  }
  else
  {
    v13 = 17;
  }
  v14 = ExAcquireSpinLockExclusive(&dword_140388924);
  v26 = v14;
  v16 = v14;
  v17 = a3;
  if ( (unsigned __int64)a3 >= a4 )
  {
    v21 = v14;
    goto LABEL_19;
  }
  v18 = a3 + 1;
  while ( 1 )
  {
    PteShadow = *a3;
    if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a3, *a3);
    v27 = PteShadow;
    if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) == 0LL )
    {
      v20 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v27) - 0x58000000000LL;
      if ( !(unsigned int)MiAddSystemPageTableToList(v25, v20) )
      {
        --v17;
        --v18;
        --a3;
LABEL_14:
        v21 = v26;
        goto LABEL_15;
      }
      v16 = v26;
      v25 = v20;
    }
    if ( !v6 )
      v7 = v17;
    if ( (++v6 & 0xF) != 0 )
    {
      if ( ((unsigned __int16)v18 & 0xFFF) != 0 )
        goto LABEL_14;
    }
    else
    {
      if ( a1 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(a1) )
          goto LABEL_34;
        v24 = v13 < 2u;
      }
      else
      {
        v24 = v16 < 2u;
      }
      if ( !v24 || !KeShouldYieldProcessor() )
        goto LABEL_14;
    }
LABEL_34:
    if ( v7 )
    {
      MiZeroSystemPdes(v7, v18, v15, a5);
      v7 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388924);
    v21 = v26;
    __writecr8(v26);
    v6 = 0LL;
    if ( a1 )
      MiRelockWorkingSetExclusive(a1, v13);
    ExAcquireSpinLockExclusive(&dword_140388924);
LABEL_15:
    ++v17;
    ++v18;
    ++a3;
    if ( (unsigned __int64)v17 >= v28 )
      break;
    v16 = v26;
  }
  if ( v7 )
    MiZeroSystemPdes(v7, v17, v15, a5);
  v5 = v25;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388924);
  __writecr8(v21);
  if ( a1 )
  {
    LOBYTE(v22) = v13;
    MiUnlockWorkingSetExclusive(a1, v22);
  }
  return v5;
}
