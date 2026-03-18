/*
 * XREFs of MiResetAccessBitPte @ 0x14013F480
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  __int64 v5; // rdi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  char v14; // cl
  int v15; // edx
  int v16; // ebx
  unsigned __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 8);
  v19 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v19;
  v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v19) - 0x58000000000LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 >= 0 && (unsigned int)MiDemoteCombinedPte(v4, a2, v9 | 0x8000000000000000uLL) == 1 )
    v6 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(v4 + 192) & 7) != 2
    || (v7 = *(unsigned __int16 *)(v4 + 172),
        *(_QWORD *)(qword_14036C8F8 + 8 * v7) == *(_QWORD *)(qword_14036C8F8
                                                           + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL))) )
  {
    if ( (v6 & 0x20) != 0 )
    {
      if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v13 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v14 = (v13 & 1) != 0 ? HIBYTE(v13) & 0xF | (16 * ((v13 >> 60) & 7)) : 10;
        v11 = v14 & 0xF;
      }
      else
      {
        v11 = (*(_DWORD *)MI_GET_PFN_FROM_PTE(
                            ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            v7,
                            0xFFFFF68000000000uLL,
                            v10) >> 2) & 7;
      }
      v15 = v11;
      if ( v11 == 7 && (unsigned int)MiGetPfnPriority(v8) < dword_14036CA6C )
      {
        v16 = 0;
      }
      else
      {
        v16 = 1;
        if ( (unsigned int)(v15 - 1) <= 5 )
          MiSetVaAge(v4, v12, 0);
      }
      if ( (unsigned int)MiClearPteAccessed(v4, v8, a2, v5, *(_DWORD *)v2) )
      {
        if ( v16 == 1 && *(_DWORD *)v2 )
        {
          if ( !v5 )
          {
            MiLogPageAccess(v4, a2);
            return 0LL;
          }
        }
        else if ( !v5 )
        {
          return 0LL;
        }
        v17 = qword_14036C218;
        if ( (*(_BYTE *)(v5 + 4) & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13] )
          v17 = -1LL;
        if ( (*(_DWORD *)(v5 + 12) >= *(_DWORD *)(v5 + 8) || *(_BYTE *)(v5 + 5) || *(_QWORD *)(v5 + 16) > v17)
          && v17 >= 0x400
          && !*(_BYTE *)(v5 + 5) )
        {
          MiFlushTbList(v5, (_KPROCESS *)v17);
        }
      }
    }
  }
  return 0LL;
}
