/*
 * XREFs of _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C00A8B44
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(__int64 a1)
{
  void *v2; // rcx
  DXGADAPTER *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    operator delete[](v2);
  v3 = *(DXGADAPTER **)(a1 + 8);
  if ( v3 )
    DXGADAPTER::ReleaseReferenceNoTracking(v3);
}
