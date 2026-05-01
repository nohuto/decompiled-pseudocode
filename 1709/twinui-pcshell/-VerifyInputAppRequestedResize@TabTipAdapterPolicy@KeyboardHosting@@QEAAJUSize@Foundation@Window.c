/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1801AB6AC
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1801A3AA0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        _OWORD *a5,
        _BYTE *a6)
{
  float v7; // xmm6_4
  float v8; // xmm7_4
  __m128 v10; // xmm2
  float v11; // xmm1_4
  HMONITOR v12; // rbx
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // r8d
  signed int v18; // r15d
  signed int v19; // r12d
  LONG left; // eax
  LONG top; // ecx
  KeyboardHosting::MonitorInformation *v22; // rcx
  __int128 v23; // [rsp+28h] [rbp-69h]
  RECT rc; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v25[5]; // [rsp+48h] [rbp-49h] BYREF
  int v26; // [rsp+70h] [rbp-21h]
  int v27; // [rsp+74h] [rbp-1Dh]
  int v28; // [rsp+78h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]

  *(_QWORD *)&rc.left = a2;
  v7 = *(float *)&a2;
  v8 = *((float *)&a2 + 1);
  *a6 = 0;
  *a5 = 0uLL;
  v10 = (__m128)_mm_loadu_si128(a3);
  rc.left = (int)v10.m128_f32[0];
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  rc.top = (int)v11;
  rc.right = (int)(float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] + v10.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] + v11);
  v12 = MonitorFromRect(&rc, 0);
  if ( v12 )
  {
    memset(&v25[1], 0, 0x20uLL);
    v28 = 100;
    v26 = 96;
    v27 = 96;
    v25[0] = v12;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)v25);
    v14 = v25[4];
    v15 = HIDWORD(v25[4]);
    v16 = v25[3];
    v17 = HIDWORD(v25[3]);
    v18 = abs32(LODWORD(v25[4]) - LODWORD(v25[3]));
    v19 = abs32(HIDWORD(v25[4]) - HIDWORD(v25[3]));
    if ( v28 * (int)v7 / 100 < v18 )
      v18 = v28 * (int)v7 / 100;
    if ( v28 * (int)v8 / 100 < v19 )
      v19 = v28 * (int)v8 / 100;
    if ( rc.left + v18 < SLODWORD(v25[4]) )
      v14 = rc.left + v18;
    if ( v19 + rc.top < SHIDWORD(v25[4]) )
      v15 = v19 + rc.top;
    if ( a4 )
    {
      top = rc.top;
      left = rc.left;
    }
    else
    {
      left = v14 - v18;
      if ( rc.left < v14 - v18 )
        left = rc.left;
      top = v15 - v19;
      if ( rc.top < v15 - v19 )
        top = rc.top;
    }
    if ( left > SLODWORD(v25[3]) )
      v16 = left;
    if ( top > SHIDWORD(v25[3]) )
      v17 = top;
    if ( v16 != rc.left || v14 != rc.right || v17 != rc.top || v15 != rc.bottom )
    {
      *a6 = 1;
      v22 = (KeyboardHosting::MonitorInformation *)(a1 + 192);
      *(float *)&v23 = (float)v16;
      *((float *)&v23 + 1) = (float)v17;
      *((float *)&v23 + 2) = (float)(v14 - v16);
      *((float *)&v23 + 3) = (float)(v15 - v17);
      *a5 = v23;
      if ( *(HMONITOR *)(a1 + 192) != v12 )
      {
        *(_QWORD *)v22 = v12;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v22);
        *(_BYTE *)(a1 + 361) = 1;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
