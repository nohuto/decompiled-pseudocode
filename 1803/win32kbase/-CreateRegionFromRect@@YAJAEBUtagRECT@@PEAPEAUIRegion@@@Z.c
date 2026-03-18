/*
 * XREFs of ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x1C00C2590
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00C24EC (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateRegionFromRect(struct _RECTL *a1, struct IRegion **a2)
{
  __int64 result; // rax
  struct CRegion *v4; // [rsp+38h] [rbp+10h] BYREF

  result = CRegion::Create(a1, &v4);
  *a2 = v4;
  return result;
}
