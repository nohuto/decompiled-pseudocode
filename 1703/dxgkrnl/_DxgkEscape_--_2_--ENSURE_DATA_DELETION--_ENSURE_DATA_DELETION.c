/*
 * XREFs of _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C00D0108
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(__int64 a1)
{
  void *v2; // rcx
  DXGADAPTER *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(DXGADAPTER **)(a1 + 8);
  if ( v3 )
    DXGADAPTER::ReleaseReference(v3);
}
