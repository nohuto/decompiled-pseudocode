/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790
 * Callers:
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x1800289C8 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18002DA5C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x18002DC00 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x18003EAD0 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18003EB88 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003EC3C (-GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA-AW4SubscriptionState@12@PEBG_.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x18003F000 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003F64C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180041174 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180001770 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180037ED8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        ...)
{
  __int64 v4; // rbp
  signed int v5; // ebx
  __int64 v6; // rbx
  wchar_t *v7; // rdi
  bool v8; // al
  unsigned __int64 v9; // rcx
  int Value[18]; // [rsp+20h] [rbp-48h] BYREF
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = 32LL;
  while ( 1 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v4);
    if ( v5 < 0 )
      break;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(wchar_t **)a1;
    _set_errno(0);
    v5 = StringCchVPrintfW(v7, v6, a2, va);
    if ( v5 == -2147024774 )
    {
      _get_errno(Value);
      v5 = -2147024809;
      if ( Value[0] != 22 )
        v5 = -2147024774;
    }
    v8 = v5 == -2147024774;
    if ( v5 == -2147024774 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v4 = -1LL;
      if ( v9 + 32 >= v9 )
        v4 = v9 + 32;
      v5 = v9 + 32 < v9 ? 0x80070216 : 0;
      v8 = v9 + 32 >= v9;
    }
    if ( !v8 )
    {
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = -1LL;
        return (unsigned int)v5;
      }
      break;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return (unsigned int)v5;
}
