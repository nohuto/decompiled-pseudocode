/*
 * XREFs of ??1ActionContext@Actions@CreativeFramework@@QEAA@XZ @ 0x18004E908
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$1 @ 0x1800B7A48 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--CreateAction_--_1_-.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$1 @ 0x1800BAFAF (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800BAFAF.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::ActionContext::~ActionContext(void **this)
{
  if ( (unsigned __int64)this[4] >= 8 )
    operator delete(this[1]);
  this[4] = (void *)7;
  this[3] = 0LL;
  *((_WORD *)this + 4) = 0;
}
