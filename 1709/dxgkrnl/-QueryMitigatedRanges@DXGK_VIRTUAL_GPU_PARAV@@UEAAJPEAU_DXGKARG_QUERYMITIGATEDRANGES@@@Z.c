/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C018E270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2)
{
  __int64 v3; // rax

  if ( !a2->NumRanges )
    return 0LL;
  v3 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v3 + 24) = a2->NumRanges;
  WdLogEvent5_WdError(v3);
  return 3221225485LL;
}
