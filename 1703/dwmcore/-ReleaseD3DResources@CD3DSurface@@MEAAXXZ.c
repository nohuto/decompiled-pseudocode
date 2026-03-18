/*
 * XREFs of ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180072F60
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DSurface::ReleaseD3DResources(CD3DSurface *this)
{
  __int64 v2; // rcx

  ReleaseInterface<IBitmapLock>((char *)this + 136);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 25);
  ReleaseInterface<IBitmapLock>((char *)this + 208);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 27);
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 28) = 0LL;
  }
}
