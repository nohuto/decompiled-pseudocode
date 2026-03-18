/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180073580
 * Callers:
 *     ??1COverlayContext@@MEAA@XZ @ 0x180071DDC (--1COverlayContext@@MEAA@XZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x18014E660 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v2 = *((_DWORD *)this + 16) - 1;
  if ( !v2 )
    goto LABEL_8;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_8;
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_7:
    CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4)
                                                                                            + 48LL));
    *(_BYTE *)(*((_QWORD *)this + 1) + 1094LL) = 1;
LABEL_8:
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 2);
    ReleaseInterface<IBitmapLock>((char *)this + 24);
    ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 32);
    ReleaseInterface<IBitmapLock>((char *)this + 40);
    ReleaseInterface<ClipPlaneInfoRef>((char *)this + 56);
    *((_DWORD *)this + 20) = 0;
    *((_QWORD *)this + 9) = 0LL;
    *((_BYTE *)this + 84) = 0;
    goto LABEL_5;
  }
  if ( v4 == 1 )
  {
    (*(void (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)this + 24LL))(this);
    goto LABEL_7;
  }
LABEL_5:
  *((_DWORD *)this + 16) = 0;
}
