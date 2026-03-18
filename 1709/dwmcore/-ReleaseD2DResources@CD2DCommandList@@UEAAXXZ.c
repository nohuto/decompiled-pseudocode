/*
 * XREFs of ?ReleaseD2DResources@CD2DCommandList@@UEAAXXZ @ 0x1801ACF60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall CD2DCommandList::ReleaseD2DResources(CD2DCommandList *this)
{
  int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
    ReleaseInterface<IBitmapLock>((__int64 *)(*((_QWORD *)this + 14) + 8LL * i));
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((__int64)this + 104);
}
