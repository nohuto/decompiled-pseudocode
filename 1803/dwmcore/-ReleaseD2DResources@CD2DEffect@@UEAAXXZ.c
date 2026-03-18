/*
 * XREFs of ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ @ 0x1801EC8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DEffect::ReleaseD2DResources(CD2DEffect *this)
{
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 13);
}
