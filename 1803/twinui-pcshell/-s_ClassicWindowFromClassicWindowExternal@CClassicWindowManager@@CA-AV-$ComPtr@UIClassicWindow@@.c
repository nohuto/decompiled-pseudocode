/*
 * XREFs of ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18000546C
 * Callers:
 *     ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180006360 (-GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180119F10 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005400 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicW.c)
 *     ?GetClassicWindow@CClassicWindowExternal@@UEAAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180005790 (-GetClassicWindow@CClassicWindowExternal@@UEAAAEBV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
        __int64 *a1,
        __int64 (__fastcall ***a2)(__int64 a1, __int64 a2, __int64 *a3))
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64 *); // rax
  __int64 (*v5)(void); // rax
  __int64 *ClassicWindow; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v4 = **a2;
  if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::QueryInterface )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::QueryInterface(
      (__int64)a2,
      (__int64)&GUID_f35c2c7c_f4ba_416d_9028_9bf3fab447bb,
      &v8);
  else
    v4((__int64)a2, (__int64)&GUID_f35c2c7c_f4ba_416d_9028_9bf3fab447bb, &v8);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v8 + 24LL);
  if ( v5 == CClassicWindowExternal::GetClassicWindow )
    ClassicWindow = (__int64 *)CClassicWindowExternal::GetClassicWindow();
  else
    ClassicWindow = (__int64 *)v5();
  *a1 = *ClassicWindow;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return a1;
}
