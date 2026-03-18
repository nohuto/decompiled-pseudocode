/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x18006A400
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x18013FA20 (--1COverlayContext@@MEAA@XZ.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x18013FAD0 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *((_DWORD *)this + 14) - 1;
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
    *(_BYTE *)(*((_QWORD *)this + 1) + 1182LL) = 1;
LABEL_8:
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 16);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
    ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 32, v5, v6, v7);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 5);
    ReleaseInterface<CRemoteApplicationWindow>((char *)this + 48);
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 8) = 0LL;
    *((_BYTE *)this + 76) = 0;
    goto LABEL_5;
  }
  if ( v4 == 1 )
  {
    (*(void (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)this + 24LL))(this);
    goto LABEL_7;
  }
LABEL_5:
  *((_DWORD *)this + 14) = 0;
}
