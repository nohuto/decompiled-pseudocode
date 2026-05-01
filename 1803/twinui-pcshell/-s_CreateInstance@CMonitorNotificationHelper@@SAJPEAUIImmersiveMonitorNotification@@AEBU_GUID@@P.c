/*
 * XREFs of ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180112C48
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1801176A0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x180112554 (--0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z.c)
 */

__int64 __fastcall CMonitorNotificationHelper::s_CreateInstance(
        struct IImmersiveMonitorNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  CMonitorNotificationHelper *v4; // rbx
  CMonitorNotificationHelper *v6; // rax
  CMonitorNotificationHelper *v7; // rsi
  unsigned int v8; // edi

  *a3 = 0LL;
  v4 = 0LL;
  v6 = (CMonitorNotificationHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v4 = CMonitorNotificationHelper::CMonitorNotificationHelper(v6, a1);
    v7 = v4;
  }
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v8 = (**(__int64 (__fastcall ***)(CMonitorNotificationHelper *, GUID *, void **))v4)(
           v4,
           &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270,
           a3);
    (*(void (__fastcall **)(CMonitorNotificationHelper *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
