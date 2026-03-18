/*
 * XREFs of MiScrubNodeLargePageList @ 0x140233A64
 * Callers:
 *     MiScrubNodeLargePages @ 0x1406ED858 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiPageListCollision @ 0x14010F9B8 (MiPageListCollision.c)
 *     MiRemoveFaultNode @ 0x14010FE68 (MiRemoveFaultNode.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
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
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // r15d
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // r8d
  _BYTE *v17; // r12
  __int64 v18; // r8
  ULONG_PTR v19; // rax
  __int64 v21; // r13
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  unsigned int v30; // esi
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r11
  unsigned __int64 v39; // r10
  __int64 v40; // r12
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int8 v43; // dl
  int v44; // edx
  __int64 v45; // r8
  ULONG_PTR v46; // rax
  unsigned __int8 v47; // [rsp+40h] [rbp-158h]
  unsigned __int8 v48; // [rsp+40h] [rbp-158h]
  unsigned __int8 v49; // [rsp+40h] [rbp-158h]
  unsigned int v50; // [rsp+44h] [rbp-154h]
  __int64 v51; // [rsp+48h] [rbp-150h]
  __int64 v52; // [rsp+50h] [rbp-148h]
  int v53; // [rsp+58h] [rbp-140h]
  _BYTE *v54; // [rsp+68h] [rbp-130h]
  _QWORD *v55; // [rsp+70h] [rbp-128h]
  int v56; // [rsp+7Ch] [rbp-11Ch]
  unsigned int v57; // [rsp+80h] [rbp-118h]
  _QWORD *v58; // [rsp+90h] [rbp-108h]
  int v59; // [rsp+98h] [rbp-100h]
  unsigned __int8 CurrentIrql; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-F0h]
  __int64 v63; // [rsp+B8h] [rbp-E0h]
  unsigned __int64 v64; // [rsp+C0h] [rbp-D8h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+D0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-C0h]
  __int64 v68; // [rsp+E0h] [rbp-B8h]
  __int64 v69; // [rsp+108h] [rbp-90h] BYREF
  __int64 v70; // [rsp+110h] [rbp-88h] BYREF
  __int64 v71; // [rsp+118h] [rbp-80h]
  _BYTE v72[120]; // [rsp+120h] [rbp-78h] BYREF

  v10 = a3;
  v11 = a2;
  v12 = a1;
  CurrentThread = KeGetCurrentThread();
  UltraMapping = 0LL;
  v14 = 0LL;
  v15 = MiLargePageSizes[a3];
  v51 = v15;
  v16 = a5;
  if ( a5 )
  {
    v17 = v72;
    v54 = v72;
    memset(v72, 0, 0x48uLL);
    LOBYTE(v14) = v10 <= 1;
    if ( v10 > 1 )
    {
      v19 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v15, v18);
      v14 = v19;
      if ( !v19 )
        return 1LL;
      UltraMapping = (__int64)(v19 << 25) >> 16;
    }
    v72[69] = 1;
    v16 = a5;
    v11 = a2;
    v12 = a1;
  }
  else
  {
    v17 = 0LL;
    v54 = 0LL;
  }
  v21 = *(_QWORD *)(v12 + 16) + 8256LL * v11;
  v71 = v21;
  v68 = v21;
  v63 = v21;
  v22 = 1;
  v50 = 1;
  CurrentIrql = 17;
  v66 = *a7;
  *a7 = 0LL;
  v61 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v23 = 1;
  if ( v10 == 2 )
    v23 = dword_140388550;
  v57 = v23;
  v24 = 0LL;
LABEL_11:
  v56 = v24;
  if ( (unsigned int)v24 >= v23 )
  {
LABEL_20:
    v30 = v51;
    goto LABEL_75;
  }
  if ( v10 == 2 )
  {
    v25 = (unsigned int)v24 + 16 * (a6 + 4 * (v16 + 2LL * a4));
    v26 = (_QWORD *)(v21 + 16 * (v25 + 59));
    v27 = *(_QWORD *)(v63 + 8 * v25 + 5040);
    v24 = a6;
  }
  else
  {
    v24 = a6;
    v28 = a6 + 4 * (v16 + 2 * (a4 + 2LL * v10));
    v26 = (_QWORD *)(v68 + 16 * (v28 + 27));
    v27 = *(_QWORD *)(v63 + 8 * v28 + 48);
  }
  v52 = v27;
  v55 = v26;
  v29 = v26;
  v58 = v26;
  while ( 1 )
  {
    if ( !v27 || (_QWORD *)*v26 == v29 )
      goto LABEL_72;
    if ( *(_DWORD *)(a9 + 4) )
    {
      v22 = 0;
      v50 = 0;
      goto LABEL_20;
    }
    if ( !v16 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    if ( v17 )
      *((_QWORD *)v17 + 4) = 0LL;
    v31 = MiUnlinkNodeLargePage(v12, v10, v11, v24, v16, 0, 0, (__int64)v17);
    v32 = v31;
    if ( !v31 )
    {
      v16 = a5;
      v11 = a2;
      v12 = a1;
      if ( !a5 )
        __writecr8(CurrentIrql);
LABEL_72:
      v22 = 1;
      v24 = (unsigned int)(v56 + 1);
      v23 = v57;
      v21 = v71;
      goto LABEL_11;
    }
    if ( !a5 )
    {
      MiLockPageAtDpcInline(v31);
      *(_BYTE *)(v32 + 34) = *(_BYTE *)(v32 + 34) & 0xF8 | 1;
      MiInsertLargePageInNodeListHelper((__int64)(v32 + 0x58000000000LL) / 48, MiLargePageSizes[v10], 1, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v33 = CurrentIrql;
LABEL_30:
      __writecr8(v33);
      goto LABEL_31;
    }
    v47 = MiLockPageInline(v31);
    if ( v17[68] == 1 )
    {
      MiRemoveFaultNode((__int64)v17);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v33 = v47;
      goto LABEL_30;
    }
    if ( v10 <= 1 )
    {
      UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a10 + 32LL * v10), v10, MiLargePageSizes[v10], 0);
      v14 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !v10 )
      {
        v34 = 1LL;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v34;
        }
        while ( v34 );
      }
    }
    *((_QWORD *)v17 + 4) = v14;
    *((_DWORD *)v17 + 16) = v10;
    *((_QWORD *)v17 + 5) = UltraMapping;
    *((_QWORD *)v17 + 6) = UltraMapping + (v51 << 12) - 1;
    v35 = -1543503868;
    if ( a3 > 1 )
      v35 = -1610612732;
    ValidPte = MiMakeValidPte(v14, (__int64)(v32 + 0x58000000000LL) / 48, v35);
    v37 = ValidPte;
    if ( v10 > 1 )
    {
      v38 = 8 * v51;
      v39 = 8 * v51 + v14;
      if ( v14 < v39 )
      {
        do
        {
          *(_QWORD *)v14 = v37;
          if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          v37 ^= (v37 ^ ((v37 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
          v14 += 8LL;
        }
        while ( v14 < v39 );
        v10 = a3;
      }
      v14 -= v38;
    }
    else
    {
      *(_QWORD *)v14 = ValidPte;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v47);
    --v52;
    v53 = 0;
    v40 = v32;
    v41 = v32 + 48 * v51;
    v65 = v41;
    v42 = UltraMapping;
    while ( 1 )
    {
      v64 = v42;
      if ( v32 >= v41 )
      {
        v44 = 0;
        goto LABEL_60;
      }
      v53 = MiScrubPage(a8, 0LL, v32, v42);
      v43 = MiLockPageInline(v40);
      v48 = v43;
      v59 = (unsigned __int8)v54[68];
      if ( v59 == 1 || v53 < 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v43);
      v32 += 48LL;
      v42 = v64 + 4096;
      v41 = v65;
    }
    MiRemoveFaultNode((__int64)v54);
    if ( !v59 )
      MiPageListCollision(v40);
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v48);
    v44 = 1;
LABEL_60:
    if ( !v44 )
    {
      v49 = MiLockPageInline(v40);
      MiRemoveFaultNode((__int64)v54);
      if ( !v54[68] )
        MiPageListCollision(v40);
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v49);
    }
    v24 = (__int64)(v32 - v40) / 48 + v61;
    if ( v24 > v66 )
      v24 = v66;
    v61 = v24;
    *a7 = v24;
    if ( v53 < 0 )
    {
      v70 = ((__int64)(v32 + 0x58000000000LL) / 48) << 12;
      v69 = 4096LL;
      MmMarkPhysicalMemoryAsBad(&v70, &v69);
      v24 = v61;
    }
    if ( v24 >= v66 )
      break;
    v17 = v54;
    v26 = v55;
    v16 = a5;
    v27 = v52;
    v29 = v58;
    v11 = a2;
    v12 = a1;
    v24 = a6;
    if ( v10 > 1 )
    {
      v30 = v51;
      MiReleasePtes((__int64)&qword_140389360, v14, v51, a6);
      v46 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v51, v45);
      v14 = v46;
      if ( !v46 )
        goto LABEL_74;
      UltraMapping = (__int64)(v46 << 25) >> 16;
      *((_QWORD *)v54 + 4) = v46;
LABEL_31:
      v26 = v55;
      v16 = a5;
      v27 = v52;
      v29 = v58;
      v11 = a2;
      v12 = a1;
      v24 = a6;
    }
  }
  v30 = v51;
LABEL_74:
  v22 = 1;
LABEL_75:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 )
  {
    if ( v10 <= 1 )
      return v22;
    if ( v14 )
      MiReleasePtes((__int64)&qword_140389360, v14, v30, v24);
  }
  return v50;
}
