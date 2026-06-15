/*
 * XREFs of _lambda_66f05aa6b27db1192e1217df58c6c38a_::operator() @ 0x1800963F0
 * Callers:
 *     ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180096F6C (-GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180095968 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x180095E40 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_66f05aa6b27db1192e1217df58c6c38a_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  CProcessSubmixProxy *v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( **(int **)(a1 + 8) >= 0
    && (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (struct IInspectable **)&v5) >= 0
    && v5 )
  {
    v6 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v5, &v6) >= 0 )
    {
      try
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
          *(_QWORD *)a1,
          &v6);
      }
      catch ( std::bad_alloc )
      {
        **(_DWORD **)(a1 + 8) = -2147024882;
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
  }
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v5);
}
