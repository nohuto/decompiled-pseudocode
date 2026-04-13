/*
 * XREFs of ??1ActivityWrapper@MobilityExperience@@QEAA@XZ @ 0x18004CF38
 * Callers:
 *     __lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator()_::_1_::dtor$5 @ 0x1800C4110 (__lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator()_--_1_--dtor$5.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity_::_1_::dtor$0 @ 0x1800C428B (_ToastNotification--ActivityToastNotificationCallback--GetUrisFromActivity_--_1_--dtor$0.c)
 *     _ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor$0 @ 0x1800C4359 (_ToastNotification--ActivityToastNotificationCallback--PublishCompletedActivity_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobilityExperience::ActivityWrapper::~ActivityWrapper(MobilityExperience::ActivityWrapper *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
