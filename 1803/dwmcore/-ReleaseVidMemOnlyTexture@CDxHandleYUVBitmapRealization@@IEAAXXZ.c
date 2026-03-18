/*
 * XREFs of ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180215F50
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18021526C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180215F20 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800219D0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801EE128 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  CMILPoolResource **v1; // rbx
  __int64 v2; // rax

  v1 = (CMILPoolResource **)((char *)this + 400);
  v2 = *((_QWORD *)this + 50);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(
      (CD3DResource *)(v2 + 24),
      (CDxHandleYUVBitmapRealization *)((char *)this + 24));
    ReleaseInterface<CD3DVidMemOnlyTexture>(v1);
  }
}
