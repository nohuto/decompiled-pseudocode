/*
 * XREFs of ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002C4D4
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180032920 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorNotificationHelper_CreateInstance(
        struct IImmersiveMonitorNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebx

  *a3 = 0LL;
  v3 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &CMonitorNotificationHelper::`vftable';
    v7[2] = 0LL;
    if ( (struct IImmersiveMonitorNotification *)v7[2] != a1 )
    {
      if ( a1 )
        (*(void (__fastcall **)(struct IImmersiveMonitorNotification *))(*(_QWORD *)a1 + 8LL))(a1);
      v8 = v7[2];
      v7[2] = a1;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v3 = v7;
  }
  v9 = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v3)(v3, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270, a3);
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  return v9;
}
