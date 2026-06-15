/*
 * XREFs of _lambda_6d8abb589d22b5930a9c9ecc0b82ece6_::operator() @ 0x18000D3E0
 * Callers:
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Do_call @ 0x18000C960 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000C800 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D260 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18000D7A0 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_6d8abb589d22b5930a9c9ecc0b82ece6_::operator()(
        Microsoft::WRL::Details::WeakReferenceImpl **a1)
{
  Microsoft::WRL::Details::WeakReferenceImpl *v2; // rcx
  __int64 (__fastcall *v3)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v4; // eax
  void (__fastcall *v5)(CBaseStreamGroupProxy *__hidden); // rax
  struct IInspectable *v7; // [rsp+40h] [rbp+10h] BYREF
  CBaseStreamGroupProxy *v8; // [rsp+48h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v7);
  v7 = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v2 + 24LL);
    if ( v3 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
      v4 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v7);
    else
      v4 = v3(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v7);
    if ( v4 >= 0
      && v7
      && (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v7,
                (__int64)&v8) >= 0 )
    {
      v5 = *(void (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v8 + 392LL);
      if ( v5 == CBaseStreamGroupProxy::PruneInactiveProcessSubmixes )
        CBaseStreamGroupProxy::PruneInactiveProcessSubmixes(v8);
      else
        v5(v8);
    }
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v7);
}
