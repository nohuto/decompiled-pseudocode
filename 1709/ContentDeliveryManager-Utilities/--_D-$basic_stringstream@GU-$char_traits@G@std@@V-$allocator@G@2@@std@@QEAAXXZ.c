/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18003E970
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId_::_1_::dtor$0 @ 0x1800B6962 (_CreativeFramework--SubscribedContentStore--GetSubscriptionPlacementNameFromSubscriptionId_--_1_.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$3 @ 0x1800B6AA6 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$3.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$0 @ 0x1800B75FB (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$0.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$12 @ 0x1800B76E7 (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$12.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180042A18 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

void __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  struct std::ios_base *v1; // rbx

  v1 = (struct std::ios_base *)(a1 + 152);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  *(_QWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}
