/*
 * XREFs of ??$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z @ 0x18004D69C
 * Callers:
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x18004D3B0 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180044120 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ReleaseInterface<CHwTexturedColorSource>(CHwBitmapColorSource **a1)
{
  CHwBitmapColorSource *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(v2);
    else
      v3();
    *a1 = 0LL;
  }
}
