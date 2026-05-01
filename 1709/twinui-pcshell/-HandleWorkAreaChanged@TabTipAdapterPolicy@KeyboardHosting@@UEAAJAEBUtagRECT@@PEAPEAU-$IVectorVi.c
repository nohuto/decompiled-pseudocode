/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1801AB300
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18019B950 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801AB48C (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1801AB57C (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __m128i v6; // xmm1
  KeyboardHosting::MonitorInformation *v8; // rbx
  __int64 v9; // rdx
  int PositionAndSizeOptions; // eax
  unsigned int v11; // ebx
  float v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  *a4 = 0;
  v6 = *a2;
  v8 = (KeyboardHosting::MonitorInformation *)(a1 + 176);
  v9 = a2->m128i_i64[0];
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  v13[0] = (float)(int)v9;
  v13[1] = (float)SHIDWORD(v9);
  v13[2] = (float)(v6.m128i_i32[0] - v9 + 1);
  v13[3] = (float)(v6.m128i_i32[1] - HIDWORD(v9) + 1);
  *(_QWORD *)(a1 + 176) = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(v13);
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v8);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(a1 - 16, a3);
  v11 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
  {
    *a4 = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x165,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return v11;
  }
}
