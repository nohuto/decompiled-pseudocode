/*
 * XREFs of MiScrubNodeLargePageList @ 0x140224CA4
 * Callers:
 *     MiScrubNodeLargePages @ 0x1406BFCB0 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiRemoveFaultNode @ 0x1400B3758 (MiRemoveFaultNode.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiPageListCollision @ 0x140125804 (MiPageListCollision.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r12
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  _BYTE *v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 LargePageWorkMapping; // rax
  __int64 v18; // rcx
  ULONG_PTR v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r14d
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r10
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  int v29; // ecx
  unsigned __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // r15
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // cl
  int v41; // edx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r8
  ULONG_PTR v45; // rax
  unsigned __int8 v46; // [rsp+30h] [rbp-148h]
  unsigned __int8 v47; // [rsp+30h] [rbp-148h]
  unsigned __int8 v48; // [rsp+30h] [rbp-148h]
  int v49; // [rsp+38h] [rbp-140h]
  __int64 v50; // [rsp+40h] [rbp-138h]
  __int64 v51; // [rsp+58h] [rbp-120h]
  int v52; // [rsp+60h] [rbp-118h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp-110h]
  unsigned __int64 v54; // [rsp+70h] [rbp-108h]
  _QWORD *v55; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v57; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v59; // [rsp+B0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-C0h]
  __int64 v61; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-90h] BYREF
  _BYTE v63[136]; // [rsp+F0h] [rbp-88h] BYREF

  v9 = a3;
  v10 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = MiLargePageSizes[a3];
  v51 = v12;
  if ( !a5 )
  {
    v13 = 0LL;
    v14 = 0LL;
    goto LABEL_12;
  }
  v13 = v63;
  memset(v63, 0, 0x48uLL);
  v14 = 0LL;
  if ( (unsigned int)v9 <= 1 )
  {
    LargePageWorkMapping = MiGetLargePageWorkMapping(v9);
    v11 = LargePageWorkMapping;
    if ( !LargePageWorkMapping )
      return 1LL;
    v14 = ((LargePageWorkMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = (unsigned int)(2 - v9);
    do
    {
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v18;
    }
    while ( v18 );
  }
  if ( !v14 )
  {
    v19 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v12, v15);
    v14 = v19;
    if ( !v19 )
      return 1LL;
    v11 = (__int64)(v19 << 25) >> 16;
  }
  v63[69] = 1;
  v10 = a2;
LABEL_12:
  v20 = *(_QWORD *)(a1 + 48) + 2184LL * v10;
  CurrentIrql = 17;
  v57 = *a7;
  *a7 = 0LL;
  v54 = 0LL;
  v21 = a6;
  v22 = a6 + 4 * (a5 + 2 * (a4 + 2 * v9));
  v23 = (_QWORD *)(v20 + 16 * (v22 + 3));
  v55 = v23;
  v24 = *(_QWORD *)(v20 + 8 * v22 + 816);
  v50 = v24;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
LABEL_13:
  while ( 1 )
  {
    v25 = v23;
    do
    {
      if ( !v24 || (_QWORD *)*v25 == v23 )
        goto LABEL_60;
      if ( *(_DWORD *)(a9 + 4) )
      {
        v26 = 0;
        goto LABEL_61;
      }
      if ( !a5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v27 = MiUnlinkNodeLargePage(a1, v9, v10, v21, a5, (__int64)v13);
      v28 = v27;
      if ( !v27 )
      {
        v29 = a5;
        v26 = 1;
        if ( !a5 )
          __writecr8(CurrentIrql);
        goto LABEL_62;
      }
      if ( !a5 )
      {
        MiLockPageAtDpcInline(v27);
        *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 1;
        MiInsertLargePageInNodeListHelper(
          (__int64)(v28 + 0x58000000000LL) / 48,
          MiLargePageSizes[(unsigned int)v9],
          1,
          1);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = CurrentIrql;
LABEL_25:
        __writecr8(v30);
        v24 = v50;
        v10 = a2;
        v23 = v55;
        v21 = a6;
        goto LABEL_13;
      }
      v46 = MiLockPageInline(v27);
      if ( v13[68] == 1 )
      {
        MiRemoveFaultNode((__int64)v13);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = v46;
        goto LABEL_25;
      }
      *((_QWORD *)v13 + 4) = v14;
      *((_DWORD *)v13 + 16) = v9;
      *((_QWORD *)v13 + 5) = v11;
      *((_QWORD *)v13 + 6) = v11 + (v12 << 12) - 1;
      v31 = -1543503868;
      if ( a3 > 1 )
        v31 = -1610612732;
      ValidPte = MiMakeValidPte(v14, (__int64)(v28 + 0x58000000000LL) / 48, v31);
      v33 = ValidPte;
      if ( (unsigned int)v9 > 1 )
      {
        v34 = 8 * v12;
        v35 = v34 + v14;
        while ( v14 < v35 )
        {
          *(_QWORD *)v14 = v33;
          if ( MiPteInShadowRange(v14) )
            MiWritePteShadow();
          v33 = (v36 ^ ((v36 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v36;
          v14 += 8LL;
        }
        v14 -= v34;
      }
      else
      {
        *(_QWORD *)v14 = ValidPte;
        if ( MiPteInShadowRange(v14) )
          MiWritePteShadow();
      }
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v46);
      --v50;
      v49 = 0;
      v37 = v28;
      v38 = v28 + 48 * v51;
      v59 = v38;
      v39 = v11;
      while ( 1 )
      {
        v58 = v39;
        if ( v28 >= v38 )
        {
          v41 = 0;
          goto LABEL_48;
        }
        v49 = MiScrubPage(a8, 0LL, v28, v39);
        v40 = MiLockPageInline(v37);
        v47 = v40;
        v52 = (unsigned __int8)v13[68];
        if ( v52 == 1 || v49 < 0 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v40);
        v28 += 48LL;
        v39 = v58 + 4096;
        v38 = v59;
      }
      MiRemoveFaultNode((__int64)v13);
      if ( !v52 )
        MiPageListCollision(v37);
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v47);
      v41 = 1;
LABEL_48:
      if ( !v41 )
      {
        v48 = MiLockPageInline(v37);
        MiRemoveFaultNode((__int64)v13);
        if ( !v13[68] )
          MiPageListCollision(v37);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v48);
      }
      v42 = (__int64)(v28 - v37) / 48 + v54;
      v43 = v57;
      if ( v42 > v57 )
        v42 = v57;
      v54 = v42;
      *a7 = v42;
      if ( v49 < 0 )
      {
        v62 = ((__int64)(v28 + 0x58000000000LL) / 48) << 12;
        v61 = 4096LL;
        MmMarkPhysicalMemoryAsBad(&v62, &v61);
        v42 = v54;
        v43 = v57;
      }
      v12 = v51;
      if ( v42 >= v43 )
        goto LABEL_60;
      v24 = v50;
      v10 = a2;
      v23 = v55;
      v25 = v55;
      v21 = a6;
    }
    while ( (unsigned int)v9 <= 1 );
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v14, v51);
    v45 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v51, v44);
    v14 = v45;
    if ( !v45 )
      break;
    v11 = (__int64)(v45 << 25) >> 16;
    *((_QWORD *)v13 + 4) = v45;
    v24 = v50;
    v10 = a2;
    v23 = v55;
  }
LABEL_60:
  v26 = 1;
LABEL_61:
  v29 = a5;
LABEL_62:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
  if ( v29 )
  {
    if ( (unsigned int)v9 <= 1 )
    {
      MiReturnSystemVa(v11, v11 + (v12 << 12), 15, 0LL);
      v14 = 0LL;
    }
    if ( v14 )
      MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v14, v12);
  }
  return v26;
}
