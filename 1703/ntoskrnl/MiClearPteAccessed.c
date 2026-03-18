/*
 * XREFs of MiClearPteAccessed @ 0x1400FAFE0
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x1402155C0 (MiSimpleAgePte.c)
 * Callees:
 *     MiVolunteerForTrimFirst @ 0x1400331E0 (MiVolunteerForTrimFirst.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v9; // edi
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  volatile signed __int64 *v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // cl
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  char v26; // cl
  int v27; // ebx
  int v28; // r15d
  char v29; // bl
  unsigned int *v30; // r14
  unsigned __int8 v31; // dl
  unsigned __int64 v32; // rax
  bool v33; // r8
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  char v36; // [rsp+50h] [rbp+8h]

  v9 = 0;
  v10 = *(_BYTE *)(a1 + 192) & 7;
  if ( v10 )
  {
    v11 = a3 << 25 >> 16;
    if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
  }
  if ( v10 )
  {
    if ( (v9 = 1, MiLockPageAtDpcInline(a2), (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1)
      && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
      || (*(_BYTE *)(a1 + 192) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
  }
  if ( !a4 )
  {
    if ( v9 == 1 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  MI_READ_PTE_LOCK_FREE(a3);
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)a3 = ((HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7))) << 56) | v13 & 0x80FFFFFFFFFFFFDFuLL;
  if ( (unsigned int)MiPteInShadowRange(a3) )
    MiWritePteShadow(v16);
  if ( v9 == 1 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = a3 << 25 >> 16;
  if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v20 = (volatile signed __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v25 = MI_READ_PTE_LOCK_FREE(v20);
    if ( (v25 & 1) != 0 )
      v26 = HIBYTE(v25) & 0xF | (16 * ((v25 >> 60) & 7));
    else
      v26 = 10;
    v22 = v26 & 0xF;
  }
  else
  {
    v20 = (volatile signed __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v22 = (*(_DWORD *)MI_GET_PFN_FROM_PTE(v20, v15, v17, v18) >> 2) & 7;
  }
  v27 = v22;
  if ( a5 && v22 != 7 )
    MiLogPageAccess(a1, a3);
  if ( !v27 )
  {
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v30 = 0LL;
      v28 = 1;
      v32 = MI_READ_PTE_LOCK_FREE(v20);
      if ( (v32 & 1) != 0 )
        v29 = HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7));
      else
        v29 = 10;
      v31 = v29 & 0xF;
      if ( (v29 & 0xF) == 8 )
        goto LABEL_37;
    }
    else
    {
      v28 = 0;
      v29 = v36;
      v30 = (unsigned int *)MI_GET_PFN_FROM_PTE(v20, v21, v23, v24);
      v31 = (*v30 >> 2) & 7;
      if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
      {
LABEL_37:
        v33 = (MI_READ_PTE_LOCK_FREE(v20) & 0x20) == 0;
        if ( v30 )
        {
          *v30 = *v30 & 0xFFFFFFE3 | (4 * v33);
        }
        else
        {
          v34 = *v20;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange64(
                    v20,
                    ((unsigned __int64)(v33 & 0x7F | v29 & 0x70u) << 56) | v34 & 0x80FFFFFFFFFFFFFFuLL,
                    v34);
          }
          while ( v35 != v34 );
        }
        if ( v28 || (*(_BYTE *)(a1 + 192) & 7) == 0 )
          ++*(_QWORD *)(a1 + 8LL * v33 + 40);
        goto LABEL_44;
      }
    }
    --*(_QWORD *)(a1 + 8LL * v31 + 40);
    if ( v31 == 7 )
      MiVolunteerForTrimFirst(a1, -1LL);
    goto LABEL_37;
  }
LABEL_44:
  MiInsertTbFlushEntry(a4, v19, 1LL, 0);
  return 1LL;
}
