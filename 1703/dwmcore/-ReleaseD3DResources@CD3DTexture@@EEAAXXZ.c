/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1800459C0
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  ReleaseInterface<IBitmapLock>((char *)this + 128);
  if ( *((_QWORD *)this + 25) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
      ReleaseInterface<CD3DVidMemOnlyTexture>(*((_QWORD *)this + 25) + 8 * i);
  }
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 26) = 0LL;
  }
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 28) = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>((char *)this + 232);
  ReleaseInterface<IBitmapLock>((char *)this + 216);
  ReleaseInterface<ID2D1Geometry>((char *)this + 240);
  ReleaseInterface<ID2D1Geometry>((char *)this + 248);
}
