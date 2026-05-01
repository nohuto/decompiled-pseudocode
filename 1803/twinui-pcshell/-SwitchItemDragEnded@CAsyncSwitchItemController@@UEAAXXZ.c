/*
 * XREFs of ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x180295900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180276824 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___ @ 0x18029523C (Windows--Internal--ComTaskPool--QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___.c)
 */

void __fastcall CAsyncSwitchItemController::SwitchItemDragEnded(CAsyncSwitchItemController *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 (__fastcall *v4)(__int64); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5[2]; // [rsp+28h] [rbp-10h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  if ( v2 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v2);
    v5[0] = *((_QWORD *)this + 2);
    v4 =  ISwitchItemController::`vcall'{112,{flat}};
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5);
    Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___(ControllerApartment, &v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
  }
}
