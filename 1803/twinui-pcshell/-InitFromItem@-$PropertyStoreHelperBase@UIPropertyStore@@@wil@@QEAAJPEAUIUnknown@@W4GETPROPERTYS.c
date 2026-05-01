/*
 * XREFs of ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x180303E14
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v4 = (**a2)(a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v7);
  if ( v4 >= 0 )
  {
    v5 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
    v4 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v5 + 80LL))(v5, &unk_1803BE798, 3LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return (unsigned int)v4;
}
