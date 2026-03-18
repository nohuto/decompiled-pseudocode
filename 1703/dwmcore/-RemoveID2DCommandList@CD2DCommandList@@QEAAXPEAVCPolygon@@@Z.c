/*
 * XREFs of ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x18019B9C8
 * Callers:
 *     ?RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z @ 0x180164600 (-RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x180166330 (-RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CAtlasedRectsGroup@@UEAAXPEAVCPolygon@@@Z @ 0x180178890 (-RemoveClippedD2D1CommandListForAllContexts@CAtlasedRectsGroup@@UEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x180135D98 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 *     ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x18019BA18 (-RemoveRange@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAV.c)
 */

void __fastcall CD2DCommandList::RemoveID2DCommandList(CD2DCommandList *this, struct CPolygon *a2)
{
  char *v2; // rdi
  unsigned int Key; // eax
  __int64 v4; // r10
  unsigned int v5; // ebx
  struct CPolygon *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (char *)this + 104;
  Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
          (__int64)this + 104,
          (__int64 *)&v6);
  v5 = Key;
  if ( Key != -1 )
  {
    ReleaseInterface<IBitmapLock>((__int64 *)(*(_QWORD *)(v4 + 112) + 8LL * (int)Key));
    CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveRange(
      v2,
      v5);
  }
}
