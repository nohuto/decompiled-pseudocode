/*
 * XREFs of ?_GetViews@ViewEventDispatcher@@AEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801D008C
 * Callers:
 *     ?GetViews@ViewEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801CB4F0 (-GetViews@ViewEventDispatcher@@UEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801C7748 (--$emplace_back@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsof.c)
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x1801D0F6C (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::_GetViews(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 *Ptr; // rsi
  __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+78h] [rbp+20h]

  v4 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  v10 = v4;
  std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::reserve(
    a2,
    a1[47].Ptr);
  Ptr = (__int64 *)a1[46].Ptr;
  v6 = &Ptr[(__int64)a1[47].Ptr];
  while ( Ptr != v6 )
  {
    v9 = *Ptr;
    v7 = v9;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    v8 = v7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
      a2,
      &v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
    ++Ptr;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
