/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x180295080
 * Callers:
 *     ?MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x1802957F0 (-MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180276824 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_220988e568c6579347aabaf530dd6256___ @ 0x1802951C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_220988e568c6579347aabaf530dd6256___.c)
 *     _lambda_220988e568c6579347aabaf530dd6256_::__lambda_220988e568c6579347aabaf530dd6256_ @ 0x180295428 (_lambda_220988e568c6579347aabaf530dd6256_--__lambda_220988e568c6579347aabaf530dd6256_.c)
 */

__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem,IVirtualDesktopItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 (__fastcall *v10)(__int64); // [rsp+20h] [rbp-28h] BYREF
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v6 = *a1;
  if ( v6 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v6);
    v11 = *a1;
    v10 =  Windows::Foundation::IPropertyValue::`vcall'{72,{flat}};
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    v12 = *a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v12);
    v13 = *a4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
    Windows::Internal::ComTaskPool::QueueTask__lambda_220988e568c6579347aabaf530dd6256___(ControllerApartment, &v10);
    lambda_220988e568c6579347aabaf530dd6256_::__lambda_220988e568c6579347aabaf530dd6256_(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a4);
}
