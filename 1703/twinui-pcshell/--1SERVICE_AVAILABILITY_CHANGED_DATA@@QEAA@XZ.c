/*
 * XREFs of ??1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ @ 0x180006E4C
 * Callers:
 *     _CApplicationManager::_SendServiceAvailabilityChangedNotification_::_1_::dtor$1 @ 0x1801989FD (_CApplicationManager--_SendServiceAvailabilityChangedNotification_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  operator delete(this[3]);
  v2 = this[1];
  if ( v2 )
  {
    this[1] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *this;
  if ( *this )
  {
    *this = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
