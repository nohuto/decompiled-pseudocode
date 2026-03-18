/*
 * XREFs of MiUnlinkStandbyBatch @ 0x1400306A0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v6; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdi
  ULONG_PTR v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  char v26; // r8
  char v27; // al
  char v28; // cl
  int v29; // eax
  __int64 v30; // rsi
  _QWORD *v31; // rsi
  int v32; // r8d
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // r8
  unsigned __int64 ValidPte; // rax
  __int64 v38; // [rsp+50h] [rbp+8h] BYREF

  v38 = a1;
  v6 = a5;
  v10 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(a2);
        v38 = v11;
        if ( (v11 & 1) == 0 )
          break;
        v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38);
        v14 = v13 & (v12 >> 12);
LABEL_8:
        if ( (unsigned int)MiIsPfnInline(v14) )
        {
          v16 = 48 * v15;
          v17 = 48 * v15 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            return v10 - v6;
          v18 = MI_READ_PTE_LOCK_FREE(a2);
          if ( v18 == v38 )
          {
            if ( !v17 )
              return v10 - v6;
            v23 = *(_QWORD *)a2;
            if ( a2 >= 0xFFFFF6FB7DBED000uLL
              && a2 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v19, v23, v20, v21) )
            {
              if ( (v23 & 1) == 0 )
                goto LABEL_25;
              if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
              {
                v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
                  v26 = v23 | 0x20;
                  if ( (v25 & 0x20) == 0 )
                    v26 = v23;
                  LOBYTE(v23) = v26;
                  if ( (v25 & 0x42) != 0 )
                    LOBYTE(v23) = v26 | 0x42;
                }
              }
            }
            if ( (v23 & 1) != 0 )
              goto LABEL_44;
LABEL_25:
            v27 = *(_BYTE *)(v17 + 34);
            if ( (v27 & 0x20) != 0
              || (v28 = *(_BYTE *)(v17 + 35), (v28 & 0x40) != 0)
              || (v27 & 7) != 2
              || ((v28 & 8) == 0 ? (v29 = v28 & 7) : (v29 = 5), v29 != a3) )
            {
LABEL_44:
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), v22);
              return v10 - v6;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(v17) )
            {
              *a6 = v17;
              return v10 - v6;
            }
            v30 = *(_QWORD *)(v17 + 8);
            ++*(_WORD *)(v17 + 32);
            v31 = (_QWORD *)(v30 | 0x8000000000000000uLL);
            a4 += 8LL;
            a2 += 8LL;
            *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
            v32 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v17 + 16);
            v34 = *(unsigned __int8 *)(v17 + 34) >> 6;
            v35 = v32 & 0xFFFFFFE7;
            if ( v34 != 1 )
            {
              if ( v34 )
              {
                if ( v34 == 2 )
                  v35 = (unsigned int)v35 | 0x18;
              }
              else
              {
                v35 = (unsigned int)v35 | 8;
              }
            }
            LODWORD(v35) = v35 | 0x20000000;
            ValidPte = MiMakeValidPte(a4, v16 / 48, v35, v33);
            *v31 = ValidPte;
            if ( (unsigned __int64)v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v31, ValidPte);
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(v17 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v6 )
              return v10 - v6;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), v22);
          }
        }
      }
      if ( (v11 & 0x400) != 0 || (v11 & 0x800) == 0 )
        return v10 - v6;
      if ( (unsigned int)MiInvalidPteConforms(v11) )
      {
        v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v38);
        goto LABEL_8;
      }
    }
  }
  return v10 - v6;
}
