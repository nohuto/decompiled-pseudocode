/*
 * XREFs of ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800D7F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9AA0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foun.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::EvaluateHolographicContext(
        HolographicPositioner *this,
        struct IUnknown *a2,
        int *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  v6 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    lpVtbl = a2->lpVtbl;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v10);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           v8) >= 0 )
      *a3 = HolographicPositioner::_IsPropertySetContextHolographic((HolographicPositioner *)((char *)this - 96), v10);
    v6 = v10;
  }
  if ( v6 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
