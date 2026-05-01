/*
 * XREFs of ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002ABD4
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800310F0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ??$Make@VCMonitorNotificationHelper@@AEAPEAUIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCMonitorNotificationHelper@@@12@AEAPEAUIImmersiveMonitorNotification@@@Z @ 0x18002AE30 (--$Make@VCMonitorNotificationHelper@@AEAPEAUIImmersiveMonitorNotification@@@Details@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorNotificationHelper_CreateInstance(
        struct IImmersiveMonitorNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, void **); // rbx
  unsigned int v5; // edi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF
  struct IImmersiveMonitorNotification *v8; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v8 = a1;
  Microsoft::WRL::Details::Make<CMonitorNotificationHelper,IImmersiveMonitorNotification * &>(&v7, &v8);
  v4 = v7;
  v5 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v5 = (**v7)(v7, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270, a3);
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v4)[2])(v4);
  return v5;
}
