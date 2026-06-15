/*
 * XREFs of _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18000C73C
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18000DB18 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D260 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  char v2; // di
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rcx
  __int64 (__fastcall *v5)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rax
  int v6; // eax
  struct IInspectable *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v8);
  v4 = *a2;
  v8 = 0LL;
  if ( !v4
    || ((v5 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v4 + 24LL),
         v5 != Microsoft::WRL::Details::WeakReferenceImpl::Resolve)
      ? (v6 = v5(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v8))
      : (v6 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v8)),
        v6 < 0 || !v8) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v8);
  return v2;
}
