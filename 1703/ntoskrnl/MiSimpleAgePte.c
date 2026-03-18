/*
 * XREFs of MiSimpleAgePte @ 0x1402155C0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbListEarly @ 0x140084B10 (MiFlushTbListEarly.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiComputeNextWalkPte @ 0x1400FF3B8 (MiComputeNextWalkPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  BOOL v7; // edi
  char v8; // r11
  __int64 v10; // rcx
  __int64 v11; // r10
  char v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = a2 << 25 >> 16;
  v7 = v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v5 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v5 + 8) = MiComputeNextWalkPte(a2, v7);
  if ( (v8 & 0x20) == 0 )
    return 0LL;
  v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v14) - 0x58000000000LL;
  v12 = *(_BYTE *)(v2 + 192) & 7;
  if ( v12 == 2 )
  {
    v10 = qword_14036C8F8;
    if ( *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v2 + 172)) != *(_QWORD *)(qword_14036C8F8
                                                                                           + 8
                                                                                           * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) )
      return 0LL;
  }
  if ( v7 )
  {
    if ( (unsigned __int8)((MiGetWsleContents(v10, a2 << 25 >> 16) & 0xF) - 8) <= 1u )
      return 0LL;
  }
  else if ( v12 || (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    return 0LL;
  }
  v13 = *(_QWORD **)(a1 + 136);
  MiClearPteAccessed(v2, v11, a2, v13[8], dword_14036CA68);
  MiFlushTbListEarly(v13[8], 0);
  return ++v13[6] >= v13[7] ? 3 : 0;
}
