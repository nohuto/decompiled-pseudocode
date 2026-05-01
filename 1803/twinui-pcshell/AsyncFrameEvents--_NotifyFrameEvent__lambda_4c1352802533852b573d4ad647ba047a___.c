/*
 * XREFs of AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___ @ 0x180294580
 * Callers:
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1802926B0 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x180276824 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e8706d2f1629cd8c0ffda13504c364e9___ @ 0x1802943E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_e8706d2f1629cd8c0ffda13504c364e9___.c)
 */

void __fastcall AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___(__int64 a1, int *a2)
{
  __int64 v2; // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int ControllerApartment; // esi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-18h] BYREF
  int v9; // [rsp+30h] [rbp-10h]
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
      v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
      v10 = v5;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
      v7 = v2;
      ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v5);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
      v8 = v5;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
      v9 = *a2;
      Windows::Internal::ComTaskPool::QueueTask__lambda_e8706d2f1629cd8c0ffda13504c364e9___(
        ControllerApartment,
        (__int64)&v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
  }
}
