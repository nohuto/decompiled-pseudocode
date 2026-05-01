/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800C7A78
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C4124 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800C6DB8 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800C8410 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  LANGID ThreadUILanguage; // ax
  bool v7; // di
  float v8; // xmm0_4
  float v9; // xmm1_4
  LONG v10; // eax
  float v11; // xmm0_4
  LONG v12; // eax
  float v13; // xmm1_4
  HMONITOR v14; // rax
  int MonitorInformation; // eax
  unsigned int v17; // esi
  __int64 v18; // rax
  LONG right; // eax
  __int64 v20; // rax
  LONG left; // eax
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 v25; // rdx
  bool v26; // cl
  int v27; // edx
  __int64 v28; // rcx
  void (__fastcall *v29)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  WCHAR LCData[2]; // [rsp+40h] [rbp-39h] BYREF
  bool v31; // [rsp+44h] [rbp-35h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-31h] BYREF
  struct tagRECT v33; // [rsp+50h] [rbp-29h] BYREF
  int v34; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v36; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v37; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 34);
  if ( v2 > 9 || (v5 = 582, !_bittest(&v5, v2)) || *((_BYTE *)this + 208) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 18) + 128LL))(
      *((_QWORD *)this + 18),
      0LL,
      0LL);
    *((_BYTE *)this + 201) = 0;
    return 0LL;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v7 = 0;
  if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, LCData, 2) > 0 )
    v7 = *(_DWORD *)LCData == 1;
  v8 = *((float *)this + 43);
  v9 = *((float *)this + 44);
  v10 = (int)v8;
  v11 = v8 + *((float *)this + 45);
  rc.left = v10;
  v12 = (int)v9;
  v13 = v9 + *((float *)this + 46);
  rc.top = v12;
  rc.right = (int)v11;
  rc.bottom = (int)v13;
  v14 = MonitorFromRect(&rc, 0);
  if ( !v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         (__int64 **)this,
                         v14,
                         &v36,
                         &v33,
                         &v35,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v34,
                         &v31);
  v17 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x961,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return v17;
  }
  v37 = v33;
  if ( v34 )
  {
    switch ( v34 )
    {
      case 1:
        v20 = HIDWORD(*(_QWORD *)&v33.left);
        if ( v35.bottom > v33.top )
          LODWORD(v20) = v35.bottom;
        v37.top = v20;
        break;
      case 2:
        right = v33.right;
        if ( v35.left < v33.right )
          right = v35.left;
        v37.right = right;
        break;
      case 3:
        v18 = HIDWORD(*(_QWORD *)&v33.right);
        if ( v35.top < v33.bottom )
          LODWORD(v18) = v35.top;
        v37.bottom = v18;
        break;
    }
  }
  else
  {
    left = v33.left;
    if ( v35.right > v33.left )
      left = v35.right;
    v37.left = left;
  }
  Point.x = v37.left;
  Point.y = v37.top;
  if ( a2 )
  {
    x = v37.left - a2->left;
    y = v37.top - a2->top;
    Point.y = y;
    Point.x = x;
  }
  else
  {
    Hwnd = CortanaDesktopExperienceView::GetHwnd(this);
    ScreenToClient(Hwnd, &Point);
    y = Point.y;
    x = Point.x;
  }
  OffsetRect(&v37, x - v37.left, y - v37.top);
  v25 = 0LL;
  v26 = !*((_BYTE *)this + 204) && !*((_BYTE *)this + 200);
  switch ( v34 )
  {
    case 0:
      v25 = v26 ? 12 : 4;
      break;
    case 1:
      v27 = v26 ? 8 : 0;
      goto LABEL_40;
    case 2:
      v25 = v26 ? 9 : 1;
      break;
    case 3:
      v27 = v26 ? 2 : 0;
LABEL_40:
      v25 = (v7 ? 1 : 4) | (unsigned int)v27;
      break;
  }
  v28 = *((_QWORD *)this + 18);
  *(_DWORD *)LCData = 0x1000000;
  *(float *)&v33.left = (float)v37.left;
  *(float *)&v33.top = (float)v37.top;
  *(float *)&v33.right = (float)(v37.right - v37.left);
  v29 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v28 + 136LL);
  *(float *)&v33.bottom = (float)(v37.bottom - v37.top);
  v29(v28, v25, 1LL, 0x1000000LL, &v33);
  *((_BYTE *)this + 201) = 1;
  return 0LL;
}
