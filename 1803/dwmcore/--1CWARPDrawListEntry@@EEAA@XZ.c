/*
 * XREFs of ??1CWARPDrawListEntry@@EEAA@XZ @ 0x18017DFF0
 * Callers:
 *     ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x18017E0A0 (--_GCWARPDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CWARPDrawListEntry::~CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  CRenderTargetImageSource **v1; // rbx

  v1 = (CRenderTargetImageSource **)((char *)this + 176);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 12);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 6));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
