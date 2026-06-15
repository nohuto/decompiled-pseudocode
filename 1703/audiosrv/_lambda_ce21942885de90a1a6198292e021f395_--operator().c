/*
 * XREFs of _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x18002E0BC
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000B5E0 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 * Callees:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_ce21942885de90a1a6198292e021f395_::operator()(
        struct IInspectable *a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl *v2; // r9
  struct IInspectable *v3; // rcx
  __int64 (__fastcall *v4)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v5; // eax
  bool v6; // bl
  struct IInspectable *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = *a2;
  v3 = 0LL;
  v8 = 0LL;
  v6 = 1;
  if ( v2 )
  {
    v4 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v2 + 24LL);
    v5 = v4 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
       ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v8)
       : v4(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v8);
    v3 = v8;
    if ( v5 >= 0 )
    {
      if ( v8 )
        v6 = 0;
    }
  }
  if ( v3 )
  {
    v8 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v3->lpVtbl->Release)(v3);
  }
  return v6;
}
