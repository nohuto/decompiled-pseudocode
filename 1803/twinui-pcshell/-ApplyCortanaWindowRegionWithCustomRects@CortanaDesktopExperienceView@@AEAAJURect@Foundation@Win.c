/*
 * XREFs of ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180063038 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x18006324C (-ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z @ 0x180063344 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180095DF8 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(__int64 a1, float *a2)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  HMONITOR v6; // r8
  HMONITOR v7; // r15
  int MonitorInformation; // ebx
  __int64 v9; // rdx
  bool v11; // di
  HMONITOR v12; // r8
  struct tagRECT v13; // xmm6
  int v14; // ebx
  HMONITOR v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  struct tagRECT *v18; // rax
  int v19; // esi
  HMONITOR v20; // r8
  int v21; // edi
  HMONITOR v22; // r8
  int v23; // ebx
  HMONITOR v24; // r8
  int v25; // eax
  HRGN RectRgn; // rax
  __int64 v27; // r8
  HGDIOBJ v28; // rbx
  int v29; // eax
  bool v30[8]; // [rsp+48h] [rbp-89h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-81h] BYREF
  struct tagRECT v32; // [rsp+58h] [rbp-79h] BYREF
  __int64 v33; // [rsp+68h] [rbp-69h]
  _DWORD v34[6]; // [rsp+70h] [rbp-61h] BYREF
  RECT rc; // [rsp+88h] [rbp-49h] BYREF
  struct tagRECT v36; // [rsp+98h] [rbp-39h] BYREF
  struct tagRECT rcDst; // [rsp+A8h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+B8h] [rbp-19h] BYREF
  RECT rcSrc2; // [rsp+C8h] [rbp-9h] BYREF
  RECT rcSrc1; // [rsp+D8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v33 = -2LL;
  v4 = *(float *)(a1 + 172);
  rc.left = (int)v4;
  v5 = *(float *)(a1 + 176);
  rc.top = (int)v5;
  rc.right = (int)(float)(v4 + *(float *)(a1 + 180));
  rc.bottom = (int)(float)(v5 + *(float *)(a1 + 184));
  v7 = MonitorFromRect(&rc, 0);
  if ( *(_DWORD *)(a1 + 132) > 1u )
    goto LABEL_21;
  *(_QWORD *)&v36.left = 0LL;
  *(_QWORD *)&v36.right = 0LL;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         (CortanaDesktopExperienceView *)a1,
                         v7,
                         &v38,
                         &v36,
                         &v32,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&ho,
                         v30);
  if ( MonitorInformation < 0 )
  {
    v9 = 1940LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v11 = *(_DWORD *)(a1 + 132) == 1 && *(_DWORD *)(a1 + 136) == 6 && (_DWORD)ho == 3;
  v30[0] = 0;
  MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible((CortanaDesktopExperienceView *)a1, v7, v30);
  if ( MonitorInformation < 0 )
  {
    v9 = 1950LL;
    goto LABEL_4;
  }
  if ( v30[0] || v11 )
    v11 = 1;
  v13 = v32;
  v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
          (ExperienceManagerUtils *)(unsigned int)(int)a2[3],
          (__int64)v7,
          v12);
  v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
          (ExperienceManagerUtils *)(unsigned int)(int)a2[2],
          (__int64)v7,
          v15);
  rcSrc2 = *(RECT *)CortanaDesktopExperienceView::ComputeCortanaWindowRect(v17, v34, (int)ho, v16, v14, &v32, v11);
  v18 = &v36;
  if ( v11 )
    v18 = &v38;
  rcSrc1 = *v18;
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( v11 )
  {
    v38 = rc;
    v32 = v13;
    v36 = rcDst;
    MonitorInformation = CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
                           (TwinUI::Cortana::ShellExperienceView **)a1,
                           &v36,
                           &v32,
                           &v38,
                           v11,
                           *(_BYTE *)(a1 + 128) == 0,
                           v7);
    if ( MonitorInformation < 0 )
    {
      v9 = 1977LL;
      goto LABEL_4;
    }
  }
  else
  {
LABEL_21:
    ho = 0LL;
    v19 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)((int)a2[1] + (int)a2[3]),
            (__int64)v7,
            v6);
    v21 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)((int)*a2 + (int)a2[2]),
            (__int64)v7,
            v20);
    v23 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)a2[1],
            (__int64)v7,
            v22);
    v25 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*a2,
            (__int64)v7,
            v24);
    RectRgn = CreateRectRgn(v25, v23, v21, v19);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgn);
    v28 = ho;
    if ( !ho )
    {
      MonitorInformation = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7C7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x80004005LL);
      return (unsigned int)MonitorInformation;
    }
    LOBYTE(v27) = 1;
    v29 = (*(__int64 (__fastcall **)(_QWORD, HGDIOBJ, __int64))(**(_QWORD **)(a1 + 144) + 144LL))(
            *(_QWORD *)(a1 + 144),
            ho,
            v27);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1993LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v29);
    DeleteObject(v28);
  }
  return 0LL;
}
