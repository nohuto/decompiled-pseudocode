/*
 * XREFs of MiUnlinkStandbyBatch @ 0x140036990
 * Callers:
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v6; // rbp
  int v8; // r13d
  __int64 *v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // r11
  __int64 PteShadow; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rsi
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  char v21; // cl
  int v22; // eax
  __int64 v23; // r14
  _QWORD *v24; // r14
  int v25; // r8d
  int v26; // eax
  __int64 v27; // r8
  __int64 ValidPte; // rax
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = a1;
  v6 = a5;
  v8 = a3;
  v9 = (__int64 *)a2;
  v10 = a5;
  if ( a5 )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      while ( 1 )
      {
        PteShadow = *v9;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= v11 )
          PteShadow = MiReadPteShadow(v9, *v9);
        v30 = PteShadow;
        if ( (PteShadow & 1) == 0 )
          break;
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(&v30);
LABEL_12:
        if ( (unsigned int)MiIsPfnInline(v13) )
        {
          v16 = 48 * v15;
          v17 = 48 * v15 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            return v10 - v6;
          v18 = *v9;
          if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= v11 )
            v18 = MiReadPteShadow(v9, *v9);
          if ( v18 == v14 )
          {
            if ( !v17 )
              return v10 - v6;
            v19 = *v9;
            if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= v11 )
              LOBYTE(v19) = MiReadPteShadow(v9, *v9);
            if ( (v19 & 1) != 0
              || (v20 = *(_BYTE *)(v17 + 34), (v20 & 0x20) != 0)
              || (v21 = *(_BYTE *)(v17 + 35), (v21 & 0x40) != 0)
              || (v20 & 7) != 2
              || ((v21 & 8) == 0 ? (v22 = v21 & 7) : (v22 = 5), v22 != v8) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return v10 - v6;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(v17) )
            {
              *a6 = v17;
              return v10 - v6;
            }
            v23 = *(_QWORD *)(v17 + 8);
            ++*(_WORD *)(v17 + 32);
            v24 = (_QWORD *)(v23 | 0x8000000000000000uLL);
            a4 += 8LL;
            ++v9;
            *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
            v25 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v17 + 16);
            v26 = *(unsigned __int8 *)(v17 + 34) >> 6;
            v27 = v25 & 0xFFFFFFE7;
            if ( v26 != 1 )
            {
              if ( v26 )
              {
                if ( v26 == 2 )
                  v27 = (unsigned int)v27 | 0x18;
              }
              else
              {
                v27 = (unsigned int)v27 | 8;
              }
            }
            LODWORD(v27) = v27 | 0x20000000;
            ValidPte = MiMakeValidPte(a4, v16 / 48, v27);
            *v24 = ValidPte;
            a2 = 0xFFFFF6FB7DBED000uLL;
            v11 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL )
            {
              a2 = 0xFFFFF6FB7DBED7F8uLL;
              if ( (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v24, ValidPte);
            }
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(v17 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v6 )
              return v10 - v6;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
        return v10 - v6;
      if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, PteShadow) )
      {
        v13 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v30);
        goto LABEL_12;
      }
    }
  }
  return v10 - v6;
}
