/*
 * XREFs of ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800462F0
 * Callers:
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180042200 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18004224C (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180042EEC (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18004653C (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BE44 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800349B8 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(a1 - 128);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_iostream<unsigned short>::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v3 + a1 - 156) = v3 - 32;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::basic_ostream<unsigned short>::`vftable';
  v4 = *(int *)(*(_QWORD *)(a1 - 136) + 4LL);
  *(_DWORD *)(v4 + a1 - 140) = v4 - 16;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 152);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 156) = *(_DWORD *)(result + 4) - 24;
  return result;
}
