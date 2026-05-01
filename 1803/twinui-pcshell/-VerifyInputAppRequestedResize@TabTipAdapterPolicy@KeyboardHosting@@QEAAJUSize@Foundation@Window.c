/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x1802533FC
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18024AFF0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x1800FB088 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802528D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation@@@wil@@.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        char a5,
        _OWORD *a6,
        _BYTE *a7)
{
  float v9; // xmm6_4
  float v10; // xmm7_4
  __m128 v11; // xmm2
  float v12; // xmm1_4
  HMONITOR v13; // rax
  HMONITOR v14; // r15
  int v16; // r14d
  int v17; // esi
  int v18; // ecx
  LONG left; // edi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  LONG top; // ebx
  KeyboardHosting::MonitorInformation *v26; // rcx
  int v27[4]; // [rsp+28h] [rbp-81h]
  RECT rc; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-51h] BYREF
  LONG v30; // [rsp+70h] [rbp-39h]
  LONG v31; // [rsp+74h] [rbp-35h]
  int v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+7Ch] [rbp-2Dh]
  int v34; // [rsp+88h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  v9 = *(float *)&a2;
  v10 = *((float *)&a2 + 1);
  *a7 = 0;
  *a6 = 0u;
  v11 = (__m128)_mm_loadu_si128(a3);
  rc.left = (int)v11.m128_f32[0];
  v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  rc.top = (int)v12;
  rc.right = (int)(float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] + v11.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] + v12);
  v13 = MonitorFromRect(&rc, 0);
  v14 = v13;
  if ( v13 )
  {
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v29, v13);
    v16 = v32;
    v17 = v33;
    v18 = abs32(v32 - v30);
    left = rc.left;
    v20 = abs32(v33 - v31);
    v21 = (unsigned int)(int)(float)((float)((float)v34 * v10) / 100.0);
    v22 = (unsigned int)(int)(float)((float)((float)v34 * v9) / 100.0);
    if ( (int)v22 >= v18 )
      v22 = (unsigned int)v18;
    if ( (int)v21 >= v20 )
      v21 = (unsigned int)v20;
    if ( (int)v22 + rc.left < v32 )
      v16 = v22 + rc.left;
    v23 = (unsigned int)(v21 + rc.top);
    if ( (int)v23 < v33 )
      v17 = v21 + rc.top;
    v24 = a4 == 0;
    top = rc.top;
    if ( v24 )
    {
      if ( rc.left >= v16 - (int)v22 )
        left = v16 - v22;
      if ( rc.top >= v17 - (int)v21 )
        top = v17 - v21;
    }
    wil::Feature<__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation>::ReportUsageToService(v23, v22, v21);
    if ( a5 )
      v17 = v33;
    if ( left <= v30 )
      left = v30;
    if ( top <= v31 )
      top = v31;
    if ( left != rc.left || v16 != rc.right || top != rc.top || v17 != rc.bottom )
    {
      v26 = (KeyboardHosting::MonitorInformation *)(a1 + 224);
      *a7 = 1;
      *(float *)v27 = (float)left;
      *(float *)&v27[1] = (float)top;
      *(float *)&v27[2] = (float)(v16 - left);
      *(float *)&v27[3] = (float)(v17 - top);
      *a6 = *(_OWORD *)v27;
      if ( *(HMONITOR *)(a1 + 224) != v14 )
      {
        *(_QWORD *)v26 = v14;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v26);
        *(_BYTE *)(a1 + 393) = 1;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
