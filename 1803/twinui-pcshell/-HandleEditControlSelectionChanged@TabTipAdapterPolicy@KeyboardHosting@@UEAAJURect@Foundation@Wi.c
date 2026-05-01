/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180252060
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x18024A660 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180251BEC (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18025278C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _DWORD *a4)
{
  HMONITOR CurrentMonitor; // rsi
  KeyboardHosting::MonitorInformation *v8; // rcx
  __int128 v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = *a2;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(a1, v10);
  *(_QWORD *)(a1 + 224) = CurrentMonitor;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 224));
  v8 = (KeyboardHosting::MonitorInformation *)(a1 + 336);
  if ( *(HMONITOR *)(a1 + 336) != CurrentMonitor )
  {
    *(_QWORD *)v8 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v8);
  }
  *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                              v10,
                                                              a2,
                                                              *(unsigned int *)(a1 + 272)));
  *(_OWORD *)(a1 + 160) = *a2;
  *a4 = 0;
  return 0LL;
}
