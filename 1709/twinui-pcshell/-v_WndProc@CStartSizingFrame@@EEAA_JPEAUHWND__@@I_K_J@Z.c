/*
 * XREFs of ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleNCHitTest@CStartSizingFrame@@AEAA_JUtagPOINT@@@Z @ 0x1800D038C (-HandleNCHitTest@CStartSizingFrame@@AEAA_JUtagPOINT@@@Z.c)
 *     ?HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ @ 0x1800D047C (-HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ.c)
 *     ?HandleGetMinMaxInfo@CStartSizingFrame@@AEAA_JPEAUtagMINMAXINFO@@@Z @ 0x1800D0548 (-HandleGetMinMaxInfo@CStartSizingFrame@@AEAA_JPEAUtagMINMAXINFO@@@Z.c)
 *     ?HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z @ 0x1800D061C (-HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z.c)
 *     ?InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z @ 0x1800D0E6C (-InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

LRESULT __fastcall CStartSizingFrame::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, struct tagMINMAXINFO *lParam)
{
  struct tagWINDOWPOS *v6; // rdx
  HWND *v7; // rbx
  __int128 v9; // xmm1
  char *v10; // rcx
  int v11; // edi
  HWND v12; // rdx
  tagWINDOWPOS v13; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-30h] BYREF

  v6 = (struct tagWINDOWPOS *)lParam;
  v7 = this;
  switch ( a3 )
  {
    case 0x24u:
      return CStartSizingFrame::HandleGetMinMaxInfo((CStartSizingFrame *)this, lParam);
    case 0x46u:
      return CStartSizingFrame::HandleWindowPositionChanging((CStartSizingFrame *)this, v6);
    case 0x84u:
      Rect.left = (__int16)lParam;
      Rect.top = SWORD1(lParam);
      return CStartSizingFrame::HandleNCHitTest((CStartSizingFrame *)this, *(struct tagPOINT *)&Rect.left);
    case 0x231u:
      v11 = 0;
      *((_BYTE *)this + 205) = 1;
      SetWindowPos(this[1], 0LL, 0, 0, 0, 0, 0x13u);
      GetClientRect(v7[1], &Rect);
      if ( *((_DWORD *)v7 + 10) != 3 )
        v11 = MulDiv(8, *((_DWORD *)v7 + 14), 96);
      v12 = v7[1];
      *((_DWORD *)v7 + 50) = Rect.bottom - v11;
      CStartSizingFrame::InitializeDComp((CStartSizingFrame *)v7, v12);
      return 0LL;
    case 0x232u:
      return CStartSizingFrame::HandleExitSizeMove((CStartSizingFrame *)this);
    case 0x401u:
      v9 = *((_OWORD *)this + 5);
      v10 = (char *)(this + 8);
      *(_OWORD *)&v13.x = v9;
      *(_OWORD *)&v13.hwnd = *(_OWORD *)v10;
      *(_QWORD *)&v13.flags = *((_QWORD *)v10 + 4);
      memset(v10, 0, 0x28uLL);
      v6 = &v13;
      *((_BYTE *)v7 + 204) = 0;
      this = v7;
      return CStartSizingFrame::HandleWindowPositionChanging((CStartSizingFrame *)this, v6);
    default:
      return DefWindowProcW(a2, a3, a4, (LPARAM)lParam);
  }
}
