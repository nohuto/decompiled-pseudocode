/*
 * XREFs of ?SHCreateStringBindCtx@@YAJPEAUIBindCtx@@PEBG1PEAPEAU1@@Z @ 0x1801C99A4
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SHCreateStringBindCtx(
        struct IBindCtx *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct IBindCtx **a4)
{
  HRESULT BindCtx; // ebx
  void *ppv; // [rsp+40h] [rbp+18h] BYREF

  ppv = a3;
  *a4 = 0LL;
  BindCtx = CreateBindCtx(0, a4);
  if ( BindCtx >= 0 )
  {
    ppv = 0LL;
    BindCtx = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( BindCtx < 0 )
      goto LABEL_6;
    BindCtx = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegfile");
    if ( BindCtx >= 0 )
      BindCtx = ((__int64 (__fastcall *)(_QWORD, const wchar_t *, void *))(*a4)->lpVtbl->RegisterObjectParam)(
                  *a4,
                  L"SHBindCtxPropertyBag",
                  ppv);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( BindCtx < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(_QWORD))(*a4)->lpVtbl->Release)(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)BindCtx;
}
