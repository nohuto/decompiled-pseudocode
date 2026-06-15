/*
 * XREFs of ??1?$ComPtr@VCProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C6D0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ProcessSubmixParams_____ptr64_&___ptr64_PROCESS_SUBMIX_DESCRIPTOR_____ptr64_IStreamGroupProxy_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$2 @ 0x18003A12D (_Microsoft--WRL--Details--MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ea_18003A12D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

CProcessSubmixProxy **__fastcall Microsoft::WRL::ComPtr<CProcessSubmixProxy>::~ComPtr<CProcessSubmixProxy>(
        CProcessSubmixProxy **a1)
{
  CProcessSubmixProxy **result; // rax
  CProcessSubmixProxy *v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release )
      return (CProcessSubmixProxy **)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release(v2);
    else
      return (CProcessSubmixProxy **)v3();
  }
  return result;
}
