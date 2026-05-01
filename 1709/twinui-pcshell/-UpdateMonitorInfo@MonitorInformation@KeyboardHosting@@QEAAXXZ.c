/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1801AA5B4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AA930 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAA50 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAB40 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Found.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1801AB300 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAPEAU-$IVectorVi.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1801AB400 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKeyboardPo.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1801AB6AC (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm2
  unsigned int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // eax
  __m128i v9; // xmm0
  int v10; // ecx
  unsigned int v11; // eax
  __m128i v12; // xmm0
  unsigned int v13; // eax
  __m128i v14; // xmm0
  unsigned int v15; // eax
  __m128i v16; // xmm0
  int v17; // eax
  HMONITOR v18; // rcx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+24h] [rbp-5Ch] BYREF
  int v22; // [rsp+28h] [rbp-58h] BYREF
  int v23; // [rsp+2Ch] [rbp-54h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-40h]
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  memset(&mi, 0, sizeof(mi));
  v2 = *(HMONITOR *)this;
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 48);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
    rcMonitor = mi.rcMonitor;
    v5 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v6 = HIDWORD(*(_QWORD *)&mi.rcMonitor.left);
    v7 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 24) = mi.rcMonitor;
    v8 = v7 - v5;
    v9 = _mm_cvtsi32_si128(v5);
    v10 = *((_DWORD *)this + 12);
    *(float *)&v24 = _mm_cvtepi32_ps(v9).m128_f32[0];
    *((float *)&v24 + 1) = (float)(int)v6;
    *((float *)&v24 + 2) = (float)(int)(v8 + 1);
    *((float *)&v24 + 3) = (float)(_mm_srli_si128(*(__m128i *)&rcMonitor, 8).m128i_i32[1] - v6 + 1);
    v25 = v24;
    v11 = (int)*(float *)&v24;
    if ( v10 )
      v11 = (int)(100 * v11) / v10;
    v12 = _mm_cvtsi32_si128(v11);
    v13 = (int)*((float *)&v25 + 1);
    LODWORD(v24) = _mm_cvtepi32_ps(v12).m128_u32[0];
    if ( v10 )
      v13 = (int)(100 * v13) / v10;
    v14 = _mm_cvtsi32_si128(v13);
    v15 = (int)*((float *)&v25 + 2);
    DWORD1(v24) = _mm_cvtepi32_ps(v14).m128_u32[0];
    if ( v10 )
      v15 = (int)(100 * v15) / v10;
    v16 = _mm_cvtsi32_si128(v15);
    v17 = (int)*((float *)&v25 + 3);
    DWORD2(v24) = _mm_cvtepi32_ps(v16).m128_u32[0];
    if ( v10 )
      v17 = 100 * v17 / v10;
    *((float *)&v24 + 3) = (float)v17;
    *(_OWORD *)((char *)this + 8) = v24;
  }
  v18 = *(HMONITOR *)this;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( (int)GetDpiForMonitor(v18, 2LL, &v20, &v21) < 0 )
  {
    if ( (int)GetDpiForMonitor(*(_QWORD *)this, 0LL, &v22, &v23) < 0 )
    {
      v19 = 96;
      *((_DWORD *)this + 10) = 96;
    }
    else
    {
      *((_DWORD *)this + 10) = v22;
      v19 = v23;
    }
  }
  else
  {
    *((_DWORD *)this + 10) = v20;
    v19 = v21;
  }
  *((_DWORD *)this + 11) = v19;
}
