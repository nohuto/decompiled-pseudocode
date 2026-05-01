/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1802944DC
 * Callers:
 *     ?OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z @ 0x180282A70 (-OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z.c)
 *     ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x180292010 (-ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1802926B0 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1802928C0 (-LightDismiss@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x180292C60 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ @ 0x180293E20 (-v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180276824 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1802942EC (Windows--Internal--ComTaskPool--QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+28h] BYREF

  v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
      v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
      v9 = v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
      v6 = v2;
      ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
      v7[0] = (__int64)v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___(ControllerApartment, &v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
  }
}
