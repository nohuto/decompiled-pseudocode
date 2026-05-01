/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0
 * Callers:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004D050 (-GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x180160380 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016F700 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x18027F678 (--$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 *     ??$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAN@Z @ 0x18027F6E4 (--$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x18027F7A8 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1802E4F0C (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1802F8778 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1802F8DD0 (-GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z @ 0x18030EA60 (-RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EAB4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z @ 0x18030EB70 (-StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRender.c)
 *     ?_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUHWND__@@@Z @ 0x18030EF30 (-_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV-$CSimplePointerArrayNewMem@UC.c)
 *     ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030EF90 (-_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV-$CSimplePointerArrayN.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001CD10 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     StringVPrintfWorkerW @ 0x18001D330 (StringVPrintfWorkerW.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        wchar_t **a1,
        const wchar_t *a2,
        ...)
{
  unsigned __int64 v3; // rcx
  int v5; // ebx
  size_t v6; // rsi
  wchar_t *v7; // r14
  size_t *v8; // r8
  unsigned __int64 v10; // rax
  _DWORD v11[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 argList; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  argList = va_arg(va1, _QWORD);
  v3 = 32LL;
  while ( 1 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v3);
    if ( v5 < 0 )
      break;
    v6 = (size_t)a1[2];
    v7 = *a1;
    _o__set_errno(0LL);
    v5 = 0;
    if ( v6 - 1 > 0x7FFFFFFE )
      v5 = -2147024809;
    if ( v5 < 0 )
    {
      if ( v6 )
        *v7 = 0;
    }
    else
    {
      v5 = StringVPrintfWorkerW(v7, v6, v8, a2, va);
    }
    if ( v5 != -2147024774
      || ((_o__get_errno(v11), v11[0] == 22) ? (v5 = -2147024809) : (v5 = -2147024774), v5 != -2147024774) )
    {
      if ( v5 >= 0 )
      {
        a1[1] = (wchar_t *)-1LL;
        return (unsigned int)v5;
      }
      break;
    }
    v10 = (unsigned __int64)a1[2];
    v3 = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      v5 = -2147024362;
      break;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  return (unsigned int)v5;
}
