/*
 * XREFs of ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x18004D3B0
 * Callers:
 *     ??$ReleaseInterfaceNoNULL@VCHwBrush@@@@YAXPEAVCHwBrush@@@Z @ 0x18004A7F8 (--$ReleaseInterfaceNoNULL@VCHwBrush@@@@YAXPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z @ 0x18004D69C (--$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z.c)
 */

__int64 __fastcall CHwBitmapBrush::Release(CHwBitmapBrush *this)
{
  ReleaseInterface<CHwTexturedColorSource>((char *)this + 16);
  return 0LL;
}
