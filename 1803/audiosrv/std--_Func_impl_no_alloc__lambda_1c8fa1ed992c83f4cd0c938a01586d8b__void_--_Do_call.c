/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call @ 0x180045B60
 * Callers:
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001C590 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B680 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DBA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStrea.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x180046410 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call(__int64 a1)
{
  Microsoft::WRL::Details::WeakReferenceImpl *v1; // rcx
  __int64 (__fastcall *v2)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v3; // eax
  struct IInspectable *v4; // rcx
  CBaseStreamGroupProxy *v5; // rdx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rax
  int v7; // eax
  void (__fastcall *v8)(CBaseStreamGroupProxy *__hidden); // rax
  CBaseStreamGroupProxy *v10; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v1 = *(Microsoft::WRL::Details::WeakReferenceImpl **)(a1 + 8);
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v1 + 24LL);
    v3 = v2 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
       ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v1, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v11)
       : v2(v1, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v11);
    if ( v3 >= 0 )
    {
      v4 = v11;
      if ( v11 )
      {
        v5 = v10;
        if ( v10 )
        {
          v10 = 0LL;
          (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v5 + 16LL))(v5);
          v4 = v11;
        }
        QueryInterface = v4->lpVtbl->QueryInterface;
        if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface )
          v7 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface(
                 (__int64)v4,
                 &GUID_c446cb63_cad4_4ab8_a433_adf8cea5b8a8,
                 &v10);
        else
          v7 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, CBaseStreamGroupProxy **))QueryInterface)(
                 v4,
                 &GUID_c446cb63_cad4_4ab8_a433_adf8cea5b8a8,
                 &v10);
        if ( v7 >= 0 )
        {
          v8 = *(void (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v10 + 376LL);
          if ( v8 == CBaseStreamGroupProxy::PruneInactiveProcessSubmixes )
            CBaseStreamGroupProxy::PruneInactiveProcessSubmixes(v10);
          else
            v8(v10);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  return Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((__int64 *)&v11);
}
