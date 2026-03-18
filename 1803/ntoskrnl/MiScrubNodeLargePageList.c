/*
 * XREFs of MiScrubNodeLargePageList @ 0x14026C284
 * Callers:
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiRemoveFaultNode @ 0x14009DCE0 (MiRemoveFaultNode.c)
 *     MiPageListCollision @ 0x1400C0DC4 (MiPageListCollision.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
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
  unsigned int v10; // r10d
  unsigned __int64 UltraMapping; // r14
  unsigned __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // r13
  _BYTE *v15; // r12
  ULONG_PTR v16; // rax
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r13d
  __int64 v22; // r9
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // r14d
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  unsigned int v33; // eax
  int i; // ecx
  __int64 v35; // r8
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r10
  unsigned __int64 v42; // r11
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int8 v48; // dl
  int v49; // eax
  int v50; // edx
  __int64 v51; // rdx
  unsigned __int64 v52; // r9
  ULONG_PTR v53; // rax
  unsigned __int8 v54; // [rsp+40h] [rbp-208h]
  unsigned __int8 v55; // [rsp+40h] [rbp-208h]
  unsigned __int8 v56; // [rsp+40h] [rbp-208h]
  unsigned int v58; // [rsp+58h] [rbp-1F0h]
  int v59; // [rsp+5Ch] [rbp-1ECh]
  int v60; // [rsp+5Ch] [rbp-1ECh]
  unsigned int v62; // [rsp+60h] [rbp-1E8h]
  __int64 v63; // [rsp+68h] [rbp-1E0h]
  __int64 v66; // [rsp+88h] [rbp-1C0h]
  unsigned int v68; // [rsp+98h] [rbp-1B0h]
  __int64 v69; // [rsp+A0h] [rbp-1A8h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-1A0h]
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp-198h]
  int v72; // [rsp+C0h] [rbp-188h]
  _QWORD *v73; // [rsp+E8h] [rbp-160h]
  _QWORD *v74; // [rsp+F8h] [rbp-150h]
  unsigned __int64 v75; // [rsp+130h] [rbp-118h]
  unsigned __int64 v76; // [rsp+138h] [rbp-110h]
  volatile signed __int64 *v77; // [rsp+140h] [rbp-108h]
  unsigned __int64 v78; // [rsp+148h] [rbp-100h]
  struct _KTHREAD *CurrentThread; // [rsp+160h] [rbp-E8h]
  volatile signed __int64 *v80; // [rsp+188h] [rbp-C0h]
  __int64 v81; // [rsp+198h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+1A0h] [rbp-A8h] BYREF
  unsigned __int64 v83; // [rsp+1A8h] [rbp-A0h]
  _BYTE v84[80]; // [rsp+1B0h] [rbp-98h] BYREF
  _QWORD v85[2]; // [rsp+200h] [rbp-48h] BYREF

  v10 = a3;
  v85[0] = 0LL;
  v85[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  UltraMapping = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = a3;
  v63 = MiLargePageSizes[a3];
  if ( a5 )
  {
    v15 = v84;
    memset(v84, 0, 0x48uLL);
    v84[71] = 1;
    LOBYTE(v12) = a3 <= 1;
    v10 = a3;
    if ( a3 > 1 )
    {
      v16 = MiReservePtes((__int64)&qword_1403CC5E0, v63);
      v12 = v16;
      if ( !v16 )
        return 1LL;
      UltraMapping = (__int64)(v16 << 25) >> 16;
      v10 = a3;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v18 = a1;
  v19 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  v58 = 1;
  CurrentIrql = 17;
  v78 = *a7;
  v83 = *a7;
  *a7 = 0LL;
  v70 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v68 = dword_1403CB6E8[v14];
  v20 = v19 + 272 * v14;
  v21 = a5;
  v22 = a6;
  v23 = *(_QWORD **)(v20 + 8 * (a6 + 4 * (a5 + 2LL * a4)) + 144);
  v24 = 0;
LABEL_8:
  v62 = v24;
  v74 = v23;
  v25 = v23;
  if ( v24 < v68 )
  {
    v26 = v23[2];
    v66 = v26;
    v73 = v23;
    while ( 1 )
    {
      if ( !v26 || (_QWORD *)*v23 == v25 )
      {
LABEL_22:
        v24 = v62 + 1;
        v23 = v74 + 3;
        v10 = a3;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(a9 + 4) )
      {
        v27 = 0;
        v58 = 0;
        v28 = v63;
        goto LABEL_71;
      }
      if ( v21 )
      {
        v13 &= ~4u;
      }
      else
      {
        v13 |= 4u;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      if ( v15 )
        *((_QWORD *)v15 + 4) = 0LL;
      v29 = MiUnlinkNodeLargePage(v18, v10, a2, v22, (__int64)v85, v13, (__int64)v15);
      v30 = v29;
      if ( !v29 )
      {
        v21 = a5;
        v18 = a1;
        v22 = a6;
        if ( !a5 )
          __writecr8(CurrentIrql);
        goto LABEL_22;
      }
      if ( !a5 )
        break;
      v54 = MiLockPageInline(v29);
      if ( v15[69] == 1 )
      {
        MiRemoveFaultNode((__int64)v15);
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v31 = v54;
        goto LABEL_25;
      }
      v33 = a3;
      if ( a3 <= 1 )
      {
        UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a10 + 32LL * a3), a3, MiLargePageSizes[a3], 0);
        v12 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        for ( i = a3; !i; i = 1 )
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = a3;
      }
      *((_QWORD *)v15 + 4) = v12;
      *((_DWORD *)v15 + 16) = v33;
      *((_QWORD *)v15 + 5) = UltraMapping;
      *((_QWORD *)v15 + 6) = UltraMapping + (v63 << 12) - 1;
      v35 = 2751463428LL;
      if ( a3 > 1 )
        v35 = 2684354564LL;
      ValidPte = MiMakeValidPte(v12, (__int64)(v30 + 0x58000000000LL) / 48, v35, v32);
      v37 = ValidPte;
      if ( a3 > 1 )
      {
        v41 = 8 * v63;
        v42 = 8 * v63 + v12;
        while ( v12 < v42 )
        {
          *(_QWORD *)v12 = v37;
          if ( MiPteInShadowRange(v12) )
            MiWritePteShadow(v44, v43, v45);
          v37 = (v43 ^ ((v43 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v43;
          v12 += 8LL;
        }
        v12 -= v41;
      }
      else
      {
        *(_QWORD *)v12 = ValidPte;
        if ( MiPteInShadowRange(v12) )
          MiWritePteShadow(v39, v38, v40);
      }
      v80 = (volatile signed __int64 *)(v30 + 24);
      v77 = (volatile signed __int64 *)(v30 + 24);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v54);
      --v66;
      v59 = 0;
      v69 = v30;
      v46 = v30 + 48 * v63;
      v76 = v46;
      v47 = UltraMapping;
      while ( 1 )
      {
        v75 = v47;
        if ( v30 >= v46 )
        {
          v50 = 0;
          goto LABEL_56;
        }
        v60 = MiScrubPage(a8, 0LL, v30, v47);
        v48 = MiLockPageInline(v69);
        v55 = v48;
        v72 = (unsigned __int8)v15[69];
        v49 = v60;
        if ( v15[70] == 1 )
          v49 = 0;
        v59 = v49;
        if ( v15[69] == 1 || v49 < 0 )
          break;
        _InterlockedAnd64(v80, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v48);
        v30 += 48LL;
        v47 = v75 + 4096;
        v46 = v76;
      }
      MiRemoveFaultNode((__int64)v15);
      if ( !v72 )
        MiPageListCollision(v69);
      _InterlockedAnd64(v77, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v55);
      v50 = 1;
LABEL_56:
      if ( !v50 )
      {
        v56 = MiLockPageInline(v69);
        MiRemoveFaultNode((__int64)v15);
        if ( !v15[69] )
          MiPageListCollision(v69);
        _InterlockedAnd64(v77, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v56);
      }
      v51 = (__int64)(v30 - v69) / 48;
      v52 = v78;
      if ( v51 + v70 <= v78 )
        v52 = v51 + v70;
      v70 = v52;
      *a7 = v52;
      if ( v59 < 0 )
      {
        v82 = ((__int64)(v30 + 0x58000000000LL) / 48) << 12;
        v81 = 4096LL;
        MmMarkPhysicalMemoryAsBad(&v82, &v81);
        v52 = v70;
      }
      if ( v52 >= v83 )
        goto LABEL_69;
      v10 = a3;
      if ( a3 > 1 )
      {
        v28 = v63;
        MiReleasePtes((__int64)&qword_1403CC5E0, v12, (unsigned int)v63);
        v53 = MiReservePtes((__int64)&qword_1403CC5E0, v63);
        v12 = v53;
        if ( !v53 )
          goto LABEL_70;
        UltraMapping = (__int64)(v53 << 25) >> 16;
        *((_QWORD *)v15 + 4) = v53;
        v10 = a3;
      }
LABEL_26:
      v21 = a5;
      v26 = v66;
      v23 = v73;
      v25 = v73;
      v18 = a1;
      v22 = a6;
    }
    MiLockPageAtDpcInline(v29);
    *(_BYTE *)(v30 + 34) = *(_BYTE *)(v30 + 34) & 0xF8 | 1;
    MiInsertLargePageInNodeListHelper((__int64)(v30 + 0x58000000000LL) / 48, MiLargePageSizes[a3], 1, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v31 = CurrentIrql;
LABEL_25:
    __writecr8(v31);
    v10 = a3;
    goto LABEL_26;
  }
LABEL_69:
  v28 = v63;
LABEL_70:
  v27 = 1;
LABEL_71:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 )
  {
    if ( a3 <= 1 )
      return v27;
    if ( v12 )
      MiReleasePtes((__int64)&qword_1403CC5E0, v12, v28);
  }
  return v58;
}
