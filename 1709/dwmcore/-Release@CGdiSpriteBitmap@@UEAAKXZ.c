/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x180027A60
 * Callers:
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180026A68 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ @ 0x1800C6120 (-Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ.c)
 *     ?Release@CPrimitiveGroup@@WEA@EAAKXZ @ 0x1800C6130 (-Release@CPrimitiveGroup@@WEA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800C6140 (-Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CAtlasImageSource@@WBA@EAAKXZ @ 0x1800C6FE0 (-Release@CAtlasImageSource@@WBA@EAAKXZ.c)
 *     ?Release@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800C6FF0 (-Release@CAtlasImageSource@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CGdiSpriteBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
