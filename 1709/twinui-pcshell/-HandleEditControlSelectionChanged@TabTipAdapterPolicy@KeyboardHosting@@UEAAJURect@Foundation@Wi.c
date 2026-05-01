/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAA50
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1801A3380 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1801AA538 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1801AB57C (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        _DWORD *a4)
{
  __m128i v5; // xmm6
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v9; // rdi
  HMONITOR v10; // rbx
  __m128i v12; // [rsp+20h] [rbp-48h] BYREF

  v5 = _mm_loadu_si128(a2);
  if ( GetSystemMetrics(80) <= 1 )
  {
    CurrentMonitorWithRect = MonitorFromWindow(0LL, 1u);
  }
  else
  {
    v12 = v5;
    CurrentMonitorWithRect = (HMONITOR)KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v12);
  }
  v9 = CurrentMonitorWithRect;
  v10 = (HMONITOR)a1[19].m128i_i64[0];
  a1[12].m128i_i64[0] = (__int64)CurrentMonitorWithRect;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&a1[12]);
  if ( v10 != v9 )
  {
    a1[19].m128i_i64[0] = (__int64)v9;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&a1[19]);
  }
  a1[7] = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                             &v12,
                                             (float *)a2->m128i_i32,
                                             a1[15].m128i_i32[0]));
  a1[8] = *a2;
  *a4 = 0;
  return 0LL;
}
