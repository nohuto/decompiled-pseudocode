/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01937E4
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 345LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
    return DXGPROCESS::EvictAllResources(Current, &a1->EvictByCriteria);
  v9 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return 3221225485LL;
}
