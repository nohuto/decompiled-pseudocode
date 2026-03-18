/*
 * XREFs of ?ReleaseD2DResources@CD2DInk@@UEAAXXZ @ 0x1801EC4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall CD2DInk::ReleaseD2DResources(CD2DInk *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 13);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 14);
}
