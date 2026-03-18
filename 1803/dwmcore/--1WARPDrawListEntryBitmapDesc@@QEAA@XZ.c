/*
 * XREFs of ??1WARPDrawListEntryBitmapDesc@@QEAA@XZ @ 0x18017A670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc(WARPDrawListEntryBitmapDesc *this)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this);
}
