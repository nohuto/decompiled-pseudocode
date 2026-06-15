/*
 * XREFs of _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800CC740
 * Callers:
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CD2A0 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B0F58 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v5[1] = -2LL;
  v5[0] = 0LL;
  if ( **(int **)a1 >= 0 && (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, v5) >= 0 && v5[0] )
  {
    v8 = 0LL;
    v7 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(v5, &v8) >= 0 )
    {
      v3 = v8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 208LL))(v3, &v7) >= 0
        && v7 == **(_QWORD **)(a1 + 8) )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
            **(_QWORD ***)(a1 + 16),
            &v8);
        }
        catch ( std::bad_alloc )
        {
          **(_DWORD **)a1 = -2147024882;
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v5);
}
