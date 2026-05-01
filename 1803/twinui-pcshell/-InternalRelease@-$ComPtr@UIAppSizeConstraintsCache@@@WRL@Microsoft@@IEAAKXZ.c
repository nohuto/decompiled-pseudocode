/*
 * XREFs of ?InternalRelease@?$ComPtr@UIAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180072F04
 * Callers:
 *     ??_GCWin32ApplicationView@@UEAAPEAXI@Z @ 0x18002B2C0 (--_GCWin32ApplicationView@@UEAAPEAXI@Z.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAppSizeConstraintsCache>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::Release();
    else
      return v4();
  }
  return result;
}
