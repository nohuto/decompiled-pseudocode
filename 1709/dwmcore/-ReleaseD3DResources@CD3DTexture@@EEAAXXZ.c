/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x180081BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  ReleaseInterface<IBitmapLock>((__int64 *)this + 15);
  if ( *((_QWORD *)this + 24) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
      ReleaseInterface<CRemoteApplicationWindow>(*((_QWORD *)this + 24) + 8 * i);
  }
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 25) = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 27);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 26);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 28);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 29);
}
