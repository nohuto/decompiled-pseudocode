/*
 * XREFs of MiWsleFlush @ 0x140027EB0
 * Callers:
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r9
  int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rbp
  char v21; // al
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  int v25; // r12d
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 PrototypePteDirect; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // r11
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int HasShadow; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 CloneAddress; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 TransitionPte; // rax
  char v46; // r10
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  unsigned __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57[2]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0xFFFFF68000000000uLL;
  v5 = a2;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL, a2)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * ((v8 >> 3) & 0x1FF));
      v13 = v10 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v10;
      v10 = v13;
      if ( (v12 & 0x42) != 0 )
        v10 = v13 | 0x42;
    }
  }
  v57[0] = v10;
  if ( (unsigned __int64)v57 < v9 || (unsigned __int64)v57 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_23;
  if ( !(unsigned int)MiPteHasShadow(v57, v10, v9, v5) || (v10 & 1) == 0 || (v10 & 0x20) != 0 && (v10 & 0x42) != 0 )
    goto LABEL_24;
  v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( !v15 )
  {
LABEL_23:
    v14 = v10;
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)v57 >> 3) & 0x1FF));
  v14 = v10 | 0x20;
  if ( (v16 & 0x20) == 0 )
    v14 = v10;
  if ( (v16 & 0x42) != 0 )
    v14 |= 0x42uLL;
LABEL_24:
  v17 = (v14 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * v17 - 0x58000000000LL;
  v19 = *(_QWORD *)(v18 + 24);
  if ( (v19 & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( *(_WORD *)(v18 + 32) > 1u )
      return 0LL;
    v20 = 48 * v17 - 0x58000000000LL;
    MiLockPageAtDpcInline(v20);
    v19 = *(_QWORD *)(v18 + 24);
    v5 = a2;
    v4 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( (v19 & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) == 0
    || (v21 = *(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v18 + 32) > 1u )
  {
    if ( v20 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v23 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v21
    && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) == 0
    && v8 <= v4 + 0x3FFFFFFF78LL
    && v8 >= v4
    && (v10 & 0x42) != 0
    && (*(_DWORD *)(a1 - 508) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(a1 - 1280, v5, 0LL);
  }
  v24 = 0xFFFFF6FFFFFFFFFFuLL;
  v25 = 0;
  if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 )
  {
    v26 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0x200000000000000LL, v26, v9, v5)
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v9 )
      {
        v27 = *(_QWORD *)(v9 + 8 * ((v8 >> 3) & 0x1FF));
        v9 = v26 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v9 = v26;
        v26 = v9;
        if ( (v27 & 0x42) != 0 )
          v26 = v9 | 0x42;
      }
    }
    v28 = (v26 >> 60) & 7;
    if ( v28 )
    {
      if ( (*(_QWORD *)v8 & 0x10) != 0 )
      {
        v28 |= 8u;
      }
      else if ( (*(_QWORD *)v8 & 8) != 0 )
      {
        v28 |= 0x18u;
      }
      v57[0] = MiMakePrototypePteVadLookup(v28);
    }
    else
    {
      PrototypePteDirect = MiMakePrototypePteDirect(
                             *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL,
                             *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL,
                             v9,
                             *(_QWORD *)(v18 + 8));
      v57[0] = PrototypePteDirect;
      v36 = PrototypePteDirect;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v10 & 0xA00) == 0 && v10 < 0 )
      {
        PrototypePteDirect |= 8uLL;
        v57[0] = PrototypePteDirect;
        v36 = PrototypePteDirect;
      }
      if ( v30 < 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 368) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1280, v35);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v38 + 1296) + 328LL) > *(_QWORD *)(CloneAddress + 96) )
              {
                PrototypePteDirect |= 8uLL;
                v57[0] = PrototypePteDirect;
              }
            }
          }
        }
      }
      else
      {
        v57[0] = v36 | 0x800;
      }
    }
    goto LABEL_62;
  }
  if ( a2 < 0xFFFFF68000000000uLL
    || a2 > 0xFFFFF6FFFFFFFFFFuLL
    || (v25 = 1, MiLockPageTableInternal(a1, v8, 0LL), (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1) )
  {
    if ( ((*(_QWORD *)(v18 + 40) >> 54) & 7) == 4 && a1 == MiGetAnyMultiplexedVm(2LL) )
    {
      MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v18 + 16), 1LL);
      v23 |= 4uLL;
      v57[0] = MI_READ_PTE_LOCK_FREE(a2 & 0xFFFFFFFFFFFFF000uLL) | 2;
      v7 = 1;
      *(_QWORD *)v8 = v57[0];
      if ( MiPteInShadowRange(v8) )
        MiWritePteShadow(v40, v39);
      MiInsertTbFlushEntry(a4, v41, 1LL, 0);
      MiFlushTbList(a4);
      MiFlushTbList(a4);
      goto LABEL_115;
    }
    if ( (unsigned __int64)v57 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v57 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v57, v24, v9, v5)
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)v57 >> 3) & 0x1FF));
        v44 = v10 | 0x20;
        if ( (v43 & 0x20) == 0 )
          v44 = v10;
        v10 = v44;
        if ( (v43 & 0x42) != 0 )
          v10 = v44 | 0x42;
      }
    }
    TransitionPte = MiMakeTransitionPte(
                      ((unsigned __int64)v10 >> 12) & 0xFFFFFFFFFLL,
                      (*(_DWORD *)(v18 + 16) >> 5) & 0x1F);
    v57[0] = TransitionPte;
    if ( v25 )
    {
      MiUnlockNestedPageTableWritePte(a1, v8, TransitionPte);
LABEL_114:
      MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
LABEL_115:
      v31 = 0xFFFFF6FB7DBED000uLL;
LABEL_116:
      if ( v20 )
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v7 != 1 && (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) == 0 )
      {
        v48 = *(_QWORD *)(v18 + 16);
        v49 = v18 + 16;
        if ( v18 + 16 >= v31
          && v49 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v33, v49, PrototypePteDirect, v48)
          && (v48 & 1) != 0
          && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
        {
          v51 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 8 * ((v50 >> 3) & 0x1FF));
            v53 = v48 | 0x20;
            if ( (v52 & 0x20) == 0 )
              v53 = v48;
            v48 = v53;
            if ( (v52 & 0x42) != 0 )
              v48 = v53 | 0x42;
          }
        }
        if ( (unsigned int)MiInvalidPteConforms(v48)
          && *(_DWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v55 >> 40) & 0x3FF)) + 1020LL)
          && (v54 & 2) == 0
          && ((*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(MiGetSharedVm(a1) + 24))
          && (!(unsigned int)MI_IS_RESET_PTE(v54) || (*(_BYTE *)(v18 + 34) & 0x10) != 0 || (*(_BYTE *)v8 & 0x42) != 0)
          && v8 <= 0xFFFFF6BFFFFFFF78uLL
          && v8 >= 0xFFFFF68000000000uLL )
        {
          MiReservePageFileSpace(v56, v8, a1);
        }
      }
      return v23;
    }
LABEL_62:
    v32 = *(_QWORD *)v8;
    v33 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= v31 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v32, PrototypePteDirect, v30);
      v33 = 0xFFFFF6FB7DBED7F8uLL;
      if ( HasShadow )
        LOBYTE(v32) = v32 | 0x20;
    }
    if ( (MiFlags & 0x800) != 0 )
    {
      LOBYTE(v32) = 32;
    }
    else if ( (MiFlags & 0x4000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v32 & 0x20) != 0 )
    {
      v47 = v57[0];
      *(_QWORD *)v8 = v57[0];
      if ( v8 >= v31 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v8, v47);
    }
    else
    {
      v46 = _InterlockedExchange64((volatile __int64 *)v8, v57[0]);
      if ( v8 >= v31 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v8, v57[0]);
      if ( (v46 & 0x20) == 0 )
        goto LABEL_116;
    }
    goto LABEL_114;
  }
  MiUnlockPageTableInternal(a1, v8);
  if ( v20 )
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
