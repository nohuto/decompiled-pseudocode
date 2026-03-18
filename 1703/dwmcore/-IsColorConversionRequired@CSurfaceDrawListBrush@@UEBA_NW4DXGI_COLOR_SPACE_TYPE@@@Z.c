/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18015FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // rbx
  bool v3; // di
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 18);
  v3 = 0;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v6);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, &v6) >= 0 )
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) != a2;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v6);
  return v3;
}
