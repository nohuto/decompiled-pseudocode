/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0017100
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1C0108844 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  __int64 v3; // rax

  if ( !*(_DWORD *)this )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 1745LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return *((unsigned int *)this + 1);
}
