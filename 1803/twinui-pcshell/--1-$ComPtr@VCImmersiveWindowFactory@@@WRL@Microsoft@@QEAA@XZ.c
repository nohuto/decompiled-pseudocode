/*
 * XREFs of ??1?$ComPtr@VCImmersiveWindowFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB234
 * Callers:
 *     _ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743____::_1_::dtor$4 @ 0x1800B5C00 (_ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743____--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveWindowFactory **__fastcall Microsoft::WRL::ComPtr<CImmersiveWindowFactory>::~ComPtr<CImmersiveWindowFactory>(
        CImmersiveWindowFactory **a1)
{
  CImmersiveWindowFactory **result; // rax
  CImmersiveWindowFactory *v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CImmersiveWindowFactory::Release )
      return (CImmersiveWindowFactory **)CImmersiveWindowFactory::Release(v2);
    else
      return (CImmersiveWindowFactory **)v3();
  }
  return result;
}
