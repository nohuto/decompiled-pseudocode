/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180042200
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId_::_1_::dtor$0 @ 0x1800C34F0 (_CreativeFramework--SubscribedContentStore--GetSubscriptionPlacementNameFromSubscriptionId_--_1_.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$3 @ 0x1800C3634 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$3.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$0 @ 0x1800C416F (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$0.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$12 @ 0x1800C425B (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$12.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800462F0 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
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
