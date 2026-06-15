/*
 * XREFs of std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x180091F64
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800933A0 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800919B8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z @ 0x180092028 (--$emplace_back@AEBV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIProcess.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2,
        _QWORD *a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v5; // rbx
  CProcessSubmixProxy *v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      v6 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v5, (struct IInspectable **)&v6) >= 0 && v6 )
      {
        v7 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v6, &v7) >= 0
          && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7) )
        {
          std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::emplace_back<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
            *a3,
            &v7);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v7);
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v6);
      ++v5;
    }
    while ( v5 != a2 );
  }
}
