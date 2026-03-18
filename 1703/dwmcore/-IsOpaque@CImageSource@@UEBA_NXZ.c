/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x180056DC0
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18009B300 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 * Callees:
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18007CDD0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  CBitmapResource *v1; // rcx
  __int64 (*v2)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax

  v1 = (CImageSource *)((char *)this - 8);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
  if ( (char *)v2 == (char *)CBitmapResource::GetAlphaMode )
    AlphaMode = CBitmapResource::GetAlphaMode(v1);
  else
    AlphaMode = (unsigned int)v2();
  return AlphaMode == DXGI_ALPHA_MODE_IGNORE;
}
