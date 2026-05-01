/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___ @ 0x18001AC40
 * Callers:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800068FC (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3_____lambda_26b87ca59359fe239e5114e68fb2ebc3___ @ 0x18001B458 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_26b87ca59359f.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3_____lambda_26b87ca59359fe239e5114e68fb2ebc3___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
