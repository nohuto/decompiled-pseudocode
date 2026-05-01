/*
 * XREFs of ??1?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@QEAA@XZ @ 0x180031730
 * Callers:
 *     _CImmersiveMode::_ScheduleListenerNotification_::_1_::dtor$0 @ 0x18019927E (_CImmersiveMode--_ScheduleListenerNotification_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoMemPtr<ZBAND_NOTIFICATION_DATA>::~CAutoMemPtr<ZBAND_NOTIFICATION_DATA>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1[1];
    if ( v2 )
    {
      v1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(v1);
  }
}
