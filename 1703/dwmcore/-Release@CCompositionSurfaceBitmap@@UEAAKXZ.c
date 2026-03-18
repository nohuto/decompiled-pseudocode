/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180037610
 * Callers:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C450 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ @ 0x1800D58A0 (-Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800D58B0 (-Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800D58C0 (-Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x1800D58D0 (-Release@CCompositionSurfaceBitmap@@WFI@EAAKXZ.c)
 * Callees:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800371D0 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(CCompositionSurfaceBitmap *this)
{
  unsigned __int32 v1; // ebx
  CCompositionSurfaceBitmap *(__fastcall *v3)(CCompositionSurfaceBitmap *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CCompositionSurfaceBitmap *(__fastcall **)(CCompositionSurfaceBitmap *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CCompositionSurfaceBitmap::`scalar deleting destructor' )
      CCompositionSurfaceBitmap::`scalar deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
