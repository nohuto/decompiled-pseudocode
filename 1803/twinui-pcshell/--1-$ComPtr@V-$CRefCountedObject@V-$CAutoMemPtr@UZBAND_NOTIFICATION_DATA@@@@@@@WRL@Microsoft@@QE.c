/*
 * XREFs of ??1?$ComPtr@V?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8D38
 * Callers:
 *     _CImmersiveMode::_ScheduleListenerNotification_::_1_::dtor$1 @ 0x1800B24E3 (_CImmersiveMode--_ScheduleListenerNotification_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>>::~ComPtr<CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **result; // rax
  volatile signed __int32 *v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release )
      return (volatile signed __int32 **)CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(v2);
    else
      return (volatile signed __int32 **)v3();
  }
  return result;
}
