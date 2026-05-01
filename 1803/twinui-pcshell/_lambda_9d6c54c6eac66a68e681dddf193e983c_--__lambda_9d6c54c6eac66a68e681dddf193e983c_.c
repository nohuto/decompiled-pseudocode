/*
 * XREFs of _lambda_9d6c54c6eac66a68e681dddf193e983c_::__lambda_9d6c54c6eac66a68e681dddf193e983c_ @ 0x1800F8CF4
 * Callers:
 *     _CImmersiveMode::_ScheduleListenerNotification_::_1_::dtor$2 @ 0x1800B24EF (_CImmersiveMode--_ScheduleListenerNotification_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall lambda_9d6c54c6eac66a68e681dddf193e983c_::__lambda_9d6c54c6eac66a68e681dddf193e983c_(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **result; // rax
  volatile signed __int32 *v2; // rcx
  __int64 (__fastcall *v3)(volatile signed __int32 *); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release )
      return (volatile signed __int32 **)CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(v2);
    else
      return (volatile signed __int32 **)v3(v2);
  }
  return result;
}
