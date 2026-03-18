/*
 * XREFs of ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x18007E5AC
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180022CE0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180026500 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18007E7BC (-Unlock@CBitmapLock@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180047190 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ReleaseInterface<IUnknown>(CDxHandleYUVBitmapRealization **a1)
{
  CDxHandleYUVBitmapRealization *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CDxHandleYUVBitmapRealization::Release )
      CDxHandleYUVBitmapRealization::Release(v2);
    else
      v3();
    *a1 = 0LL;
  }
}
