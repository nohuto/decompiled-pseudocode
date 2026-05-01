/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180022E5C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F5144 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180025AB0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_GetDefaultSizeForRect(
        IUnknown *a1,
        int a2,
        const struct tagRECT *a3,
        struct tagSIZE *a4)
{
  int v6; // eax
  int v7; // edi
  struct IApplicationViewTitlebarConfiguration *v8; // r14
  POINT v9; // rcx
  HMONITOR v10; // rax
  int v11; // eax
  LONG v12; // ebx
  int WorkAreaFromRect; // eax
  __int64 v14; // r15
  LONG y; // r12d
  WindowSizeConverter *lpVtbl; // rcx
  struct tagSIZE v17; // rdx
  __int64 (__fastcall *v18)(WindowSizeConverter *__hidden, struct tagSIZE, struct IImmersiveMonitor *, int, int, struct IApplicationViewTitlebarConfiguration *, struct tagSIZE *); // rax
  int v19; // eax
  struct IImmersiveMonitor *v20; // rcx
  void (__fastcall *v21)(struct IApplicationViewTitlebarConfiguration *); // rax
  LONG top; // ecx
  __int64 v24; // rdx
  int v25; // [rsp+28h] [rbp-69h]
  int v26; // [rsp+28h] [rbp-69h]
  struct IImmersiveMonitor *v27; // [rsp+48h] [rbp-49h] BYREF
  POINT v28; // [rsp+50h] [rbp-41h]
  struct tagSIZE v29; // [rsp+58h] [rbp-39h] BYREF
  struct IApplicationViewTitlebarConfiguration *v30; // [rsp+60h] [rbp-31h] BYREF
  struct tagSIZE *v31; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+70h] [rbp-21h]
  struct tagRECT v33; // [rsp+78h] [rbp-19h] BYREF
  struct tagSIZE v34; // [rsp+88h] [rbp-9h]
  int v35; // [rsp+90h] [rbp-1h]
  int v36; // [rsp+94h] [rbp+3h]
  __m128i si128; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v32 = -2LL;
  v31 = a4;
  v34.cx = 500;
  v34.cy = 500;
  if ( a2 == 1 )
  {
    v35 = 900;
    v36 = 640;
  }
  else
  {
    v35 = 800;
    v36 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v30 = 0LL;
  v6 = CDesktopPositioner::_CreateTitlebarConfiguration(a1, 0LL, &v30);
  v7 = v6;
  v8 = v30;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3EA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6,
      v25);
    goto LABEL_23;
  }
  v27 = 0LL;
  v9 = 0LL;
  if ( a3 )
  {
    top = a3->top;
    v28.x = a3->left;
    v28.y = top;
    v9 = v28;
  }
  v27 = 0LL;
  v10 = MonitorFromPoint(v9, 1u);
  v11 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, HMONITOR, struct IImmersiveMonitor **))a1[22].lpVtbl->QueryInterface
         + 6))(
          a1[22].lpVtbl,
          v10,
          &v27);
  v7 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11,
      v25);
  else
    v7 = 0;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7,
      v25);
    v24 = 1005LL;
  }
  else
  {
    v12 = 0;
    v28 = 0LL;
    v33 = 0LL;
    WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, a3, &v33);
    v7 = WorkAreaFromRect;
    if ( WorkAreaFromRect < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D3,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)WorkAreaFromRect,
        v25);
    }
    else
    {
      v28.x = v33.right - v33.left;
      v28.y = v33.bottom - v33.top;
      v12 = v33.right - v33.left;
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
      v14 = 3LL;
      y = v28.y;
      while ( 1 )
      {
        lpVtbl = (WindowSizeConverter *)a1[25].lpVtbl;
        v17 = (struct tagSIZE)*((_QWORD *)&v34 + v14);
        v18 = *(__int64 (__fastcall **)(WindowSizeConverter *__hidden, struct tagSIZE, struct IImmersiveMonitor *, int, int, struct IApplicationViewTitlebarConfiguration *, struct tagSIZE *))(*(_QWORD *)lpVtbl + 48LL);
        if ( v18 == WindowSizeConverter::ConvertForMonitorAndChromeConfiguration )
        {
          v19 = WindowSizeConverter::ConvertForMonitorAndChromeConfiguration(lpVtbl, v17, v27, 0, 1, v8, &v29);
        }
        else
        {
          v26 = 1;
          v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v18)(lpVtbl, v17, v27, 0LL);
        }
        v7 = v19;
        if ( v19 < 0 )
          break;
        if ( (v12 < v29.cx || y < v29.cy) && --v14 >= 0 )
          continue;
        *v31 = v29;
        v7 = 0;
        goto LABEL_21;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v19,
        v26);
      goto LABEL_21;
    }
    v24 = 1008LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7,
    v25);
LABEL_21:
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_23:
  if ( v8 )
  {
    v30 = 0LL;
    v21 = *(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v21 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v8);
    else
      v21(v8);
  }
  return (unsigned int)v7;
}
