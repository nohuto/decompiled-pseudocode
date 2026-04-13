/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18009831C
 * Callers:
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x180026DB0 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18002B134 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180031EB0 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180031EC0 (--_G-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_istream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180031F40 (--_G-$basic_istream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18003E970 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18003E9D8 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003F64C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180042C64 (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180042CB0 (--_G-$basic_iostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_ostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180042D60 (--_G-$basic_ostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180048194 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18007ED3C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800940E4 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x18009838C (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( !v1 || (--byte_18015D050[v1], byte_18015D050[v1] <= 0) )
  {
    std::ios_base::_Tidy(this);
    v3 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
        if ( v4 )
          (**v4)(v4, 1LL);
      }
      operator delete(v3);
    }
  }
}
