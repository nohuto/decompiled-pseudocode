/*
 * XREFs of ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180295680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180276824 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___ @ 0x1802953AC (Windows--Internal--ComTaskPool--QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___.c)
 *     _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x180295454 (_lambda_eb7347f801496dc1bb0f8fceb055189e_--__lambda_eb7347f801496dc1bb0f8fceb055189e_.c)
 */

void __fastcall CAsyncSwitchItemController::DragSwitchItem(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  __int64 v3; // rbx
  unsigned int ControllerApartment; // eax
  unsigned int v8; // edi
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  struct ISwitchItem *v11; // [rsp+30h] [rbp-10h] BYREF
  struct IExternalDragCallback *v12; // [rsp+38h] [rbp-8h] BYREF
  struct IExternalDragCallback *v13; // [rsp+60h] [rbp+20h] BYREF
  struct ISwitchItem *v14; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v9 = *((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    v14 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v14);
    v13 = a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this
                                                                         + 2));
    v10 = v3;
    v8 = ControllerApartment;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
    v11 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    v12 = a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
    Windows::Internal::ComTaskPool::QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___(v8, &v10);
    lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_(&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
}
