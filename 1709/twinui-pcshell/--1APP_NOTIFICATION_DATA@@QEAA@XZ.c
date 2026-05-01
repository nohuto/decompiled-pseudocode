/*
 * XREFs of ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x180052610
 * Callers:
 *     _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$3 @ 0x1801E8F48 (_CImmersiveApp--_ScheduleApplicationNotifications_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  operator delete(*this);
  v2 = this[3];
  if ( v2 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = this[2];
  if ( v3 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
