/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1800F32F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x1800FB088 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180251C30 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18025278C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __m128i *this,
        _OWORD *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  HMONITOR CurrentMonitorWithRect; // rax
  __m128 v8; // xmm1
  int PositionAndSizeOptions; // eax
  unsigned int v10; // ebx
  int v12[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[48]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a4 = 0;
  *a3 = 0LL;
  *(_OWORD *)v12 = *a2;
  CurrentMonitorWithRect = (HMONITOR)KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(v12);
  KeyboardHosting::MonitorInformation::MonitorInformation(
    (KeyboardHosting::MonitorInformation *)v13,
    CurrentMonitorWithRect);
  v8 = (__m128)_mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v12, a2, v14));
  *(__m128i *)v12 = _mm_loadu_si128(this + 11);
  if ( v8.m128_f32[0] != *(float *)v12
    || _mm_shuffle_ps(v8, v8, 85).m128_f32[0] != *(float *)&v12[1]
    || _mm_shuffle_ps(v8, v8, 170).m128_f32[0] != *(float *)&v12[2]
    || _mm_shuffle_ps(v8, v8, 255).m128_f32[0] != *(float *)&v12[3] )
  {
    this[11] = (__m128i)v8;
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions((KeyboardHosting::TabTipAdapterPolicy *)this);
    v10 = PositionAndSizeOptions;
    if ( PositionAndSizeOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)PositionAndSizeOptions);
      return v10;
    }
    *a4 = (this[31].m128i_i32[0] != 3) + 2;
    this[25].m128i_i8[8] = 0;
  }
  return 0LL;
}
