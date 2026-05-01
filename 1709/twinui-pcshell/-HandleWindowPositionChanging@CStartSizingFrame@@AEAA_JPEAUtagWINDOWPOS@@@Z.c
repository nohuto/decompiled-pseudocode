/*
 * XREFs of ?HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z @ 0x1800D061C
 * Callers:
 *     ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220 (-v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStartMenuWindow@CStartSizingFrame@@AEAAJPEAPEAUHWND__@@@Z @ 0x1800D0024 (-GetStartMenuWindow@CStartSizingFrame@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?WaitForWindowReadiness@CStartSizingFrame@@AEAAJXZ @ 0x1800D087C (-WaitForWindowReadiness@CStartSizingFrame@@AEAAJXZ.c)
 *     ?UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z @ 0x1800D14B8 (-UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartSizingFrame::HandleWindowPositionChanging(CStartSizingFrame *this, struct tagWINDOWPOS *a2)
{
  int StartMenuWindow; // eax
  __int64 v5; // rdx
  LONG top; // ecx
  LONG bottom; // edi
  int v8; // edi
  int v9; // r14d
  int v10; // r15d
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  HWND hWnd[2]; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  hWnd[1] = (HWND)-2LL;
  if ( (a2->flags & 3) != 3 )
  {
    StartMenuWindow = CStartSizingFrame::GetStartMenuWindow(this, hWnd);
    if ( StartMenuWindow >= 0 )
    {
      Rect = 0LL;
      GetWindowRect(hWnd[0], &Rect);
      v19 = 0LL;
      GetWindowRect(*((HWND *)this + 1), &v19);
      v17 = v19;
      if ( (a2->flags & 2) != 0 )
        top = v17.top;
      else
        top = a2->y;
      if ( (a2->flags & 1) != 0 )
        bottom = v17.bottom;
      else
        bottom = top + a2->cy;
      v8 = bottom - top;
      v9 = Rect.bottom - Rect.top;
      if ( *((_DWORD *)this + 10) == 3 )
        v10 = MulDiv(8, *((_DWORD *)this + 14), 96);
      else
        v10 = 0;
      if ( *((_DWORD *)this + 10) == 3 )
        v11 = 0;
      else
        v11 = MulDiv(8, *((_DWORD *)this + 14), 96);
      if ( v8 - v11 - v10 != v9 )
      {
        if ( *((_QWORD *)this + 4) )
        {
          *((_OWORD *)this + 4) = *(_OWORD *)&a2->hwnd;
          *((_OWORD *)this + 5) = *(_OWORD *)&a2->x;
          *((_QWORD *)this + 12) = *(_QWORD *)&a2->flags;
          *((_BYTE *)this + 204) = 1;
        }
        else
        {
          if ( *((_DWORD *)this + 10) == 3 )
            v12 = MulDiv(8, *((_DWORD *)this + 14), 96);
          else
            v12 = 0;
          if ( *((_DWORD *)this + 10) == 3 )
            v13 = 0;
          else
            v13 = MulDiv(8, *((_DWORD *)this + 14), 96);
          *(float *)(*((_QWORD *)this + 2) + 48LL) = (float)(a2->cy - v13 - v12);
          LOBYTE(v5) = *((_BYTE *)this + 205);
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v5);
          CStartSizingFrame::WaitForWindowReadiness(this);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
        hWnd[0] = (HWND)((char *)this + 160);
        if ( *((_QWORD *)this + 19) )
        {
          *(_QWORD *)&v17.left = 0LL;
          *(_QWORD *)&v17.right = 0LL;
          GetClientRect(*((HWND *)this + 1), &v17);
          v17.top = *((_DWORD *)this + 50);
          if ( *((_DWORD *)this + 10) == 3 )
            v14 = 0;
          else
            v14 = MulDiv(8, *((_DWORD *)this + 14), 96);
          v17.bottom = a2->cy - v14;
          CStartSizingFrame::UpdateBackgroundTransform(this, &v17);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        }
        if ( this != (CStartSizingFrame *)-160LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x115,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
        (const char *)(unsigned int)StartMenuWindow);
    }
  }
  return 0LL;
}
