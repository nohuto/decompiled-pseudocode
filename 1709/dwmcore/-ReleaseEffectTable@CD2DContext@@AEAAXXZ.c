/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180043E9C
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180043DF0 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  char *v1; // rbx
  __int64 v2; // rdi

  v1 = (char *)this + 192;
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Geometry>(v1);
    v1 += 8;
    --v2;
  }
  while ( v2 );
}
