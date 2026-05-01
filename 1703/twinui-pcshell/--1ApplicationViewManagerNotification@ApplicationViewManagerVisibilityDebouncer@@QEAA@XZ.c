/*
 * XREFs of ??1ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180078F0C
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$3 @ 0x18019B020 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$3.c)
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$6 @ 0x18019B02C (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$6.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$1 @ 0x18019B05C (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$1.c)
 *     _CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2______::_1_::dtor$2 @ 0x18019B11C (_CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManagerNotificatio.c)
 *     _CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2______::_1_::dtor$3 @ 0x18019B128 (_CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManag_ea_18019B128.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::~ApplicationViewManagerNotification(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
