/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180079010
 * Callers:
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800DA3AC (--1COverlayContext@@MEAA@XZ.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180163730 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801AD124 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

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
    *(_BYTE *)(*((_QWORD *)this + 1) + 1194LL) = 1;
LABEL_8:
    ReleaseInterface<IBitmapLock>((__int64 *)this + 2);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
    ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 32);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 5);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 6);
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
