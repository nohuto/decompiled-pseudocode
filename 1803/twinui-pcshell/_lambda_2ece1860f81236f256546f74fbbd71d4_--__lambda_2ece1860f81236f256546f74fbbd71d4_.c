/*
 * XREFs of _lambda_2ece1860f81236f256546f74fbbd71d4_::__lambda_2ece1860f81236f256546f74fbbd71d4_ @ 0x180306CB0
 * Callers:
 *     _Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize_CortanaSharedExperienceManager__::_1_::dtor$1 @ 0x18015A937 (_Windows--Internal--Shell--IImmersiveWindowMessageNotificationHandler--RuntimeClass_ea_18015A937.c)
 *     _CSingleViewShellExperience::RegisterAumid_::_1_::dtor$2 @ 0x180307DD9 (_CSingleViewShellExperience--RegisterAumid_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_2ece1860f81236f256546f74fbbd71d4_::__lambda_2ece1860f81236f256546f74fbbd71d4_(__int64 *a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, volatile int *); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      return (__int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
                          v2,
                          (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      return (__int64 *)((__int64 (__fastcall *)(__int64))v3)(v2);
  }
  return result;
}
