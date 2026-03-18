/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01CEDD0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     _ScrollDC @ 0x1C006B7C0 (_ScrollDC.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0124C54 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01CF558 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01CF594 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  int v9; // r13d
  struct tagCURSOR *v10; // r11
  struct tagCURSOR *v11; // r14
  unsigned int v14; // ecx
  HDC DCEx; // r10
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  LONG v20; // r12d
  int v21; // eax
  int v22; // ecx
  LONG v23; // eax
  int v24; // r8d
  int v25; // r9d
  int PrevTaskIndex; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  LONG v31; // r12d
  __int64 v32; // r8
  unsigned __int64 *v33; // rdi
  int v34; // r15d
  __int64 v35; // r9
  __int16 KeyState; // ax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int16 AsyncKeyState; // ax
  __int64 v41; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v43; // rdi
  __int64 Prop; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // [rsp+50h] [rbp-71h]
  int v53; // [rsp+50h] [rbp-71h]
  int v54; // [rsp+54h] [rbp-6Dh]
  int v55; // [rsp+58h] [rbp-69h]
  LONG v56; // [rsp+58h] [rbp-69h]
  unsigned int v57; // [rsp+5Ch] [rbp-65h]
  HDC v58; // [rsp+60h] [rbp-61h]
  HWND *PrevPhwnd; // [rsp+68h] [rbp-59h]
  RECT v60; // [rsp+70h] [rbp-51h] BYREF
  struct tagWND *v61; // [rsp+80h] [rbp-41h]
  HDC v62; // [rsp+88h] [rbp-39h]
  _QWORD v63[3]; // [rsp+90h] [rbp-31h] BYREF
  struct tagRECT v64; // [rsp+A8h] [rbp-19h] BYREF

  v9 = *((_DWORD *)a2 + 29);
  v10 = 0LL;
  v11 = a9;
  v61 = a1;
  v14 = *((_DWORD *)a2 + 28);
  v62 = a3;
  v58 = a3;
  v57 = v14;
  DCEx = a3;
  v55 = v9 - v14;
  v17 = 0;
  v18 = 0;
  if ( !a3 )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    v58 = DCEx;
    v10 = 0LL;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v54 = v19;
  if ( a7 )
  {
    v21 = *((_DWORD *)a2 + 15) * v9;
    v22 = v9 * *((_DWORD *)a2 + 14);
    v64.top = *((_DWORD *)a2 + 22);
    v64.left = v20;
    v23 = v19 + v21;
    v24 = v9;
    v64.bottom = v23;
    v64.right = v20 + v22;
    if ( a8 )
      v24 = -v9;
    ScrollDC(DCEx, 0, v24, &v64, &v64, 0LL, 0LL);
    v10 = 0LL;
    if ( a8 )
      v17 = *((_DWORD *)a2 + 15) - 1;
    v25 = *((_DWORD *)a2 + 14);
    v52 = v25;
    if ( a8 )
    {
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v25 * (*((_DWORD *)a2 + 15) - 1), 1);
      v19 = v54;
      a4 = PrevTaskIndex;
      v25 = v52;
    }
    else
    {
      a4 = *((_DWORD *)a2 + 13);
      v19 = v54;
    }
  }
  else
  {
    v25 = a6;
  }
  if ( a9 )
  {
    v27 = a4 - *((_DWORD *)a2 + 13);
    if ( v27 < 0 )
      v27 += *((_DWORD *)a2 + 10);
    v28 = *((_DWORD *)a2 + 14);
    v17 = v27 / v28;
    if ( v27 / v28 >= *((_DWORD *)a2 + 15) )
      goto LABEL_43;
    v18 = v27 % v28;
  }
  v30 = (unsigned int)(v55 >> 31);
  v29 = v55 / 2;
  LODWORD(v30) = v55 % 2;
  v56 = v55 / 2 + v20;
  v31 = v18 * v9 + v56;
  v32 = (unsigned int)(v29 + v17 * v9 + v19);
  v33 = (unsigned __int64 *)(*((_QWORD *)a2 + 2) + 32LL + 8LL * a4);
  PrevPhwnd = (HWND *)v33;
  if ( v25 )
  {
    v34 = v32;
    while ( 1 )
    {
      v35 = (unsigned int)(v25 - 1);
      v53 = v35;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_47;
      KeyState = GetKeyState(0x12u, v30, v32, v35);
      v10 = 0LL;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_47:
        AsyncKeyState = _GetAsyncKeyState(18LL);
        v10 = 0LL;
        if ( AsyncKeyState >= 0 )
          break;
      }
      LOBYTE(v37) = 1;
      v41 = HMValidateHandleNoSecure(*v33, v37, v38, v39);
      v10 = 0LL;
      if ( v41 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v41);
        v43 = TopLevelCreatorWindow;
        if ( v11
          || (Prop = GetProp(TopLevelCreatorWindow, *(_WORD *)(gpsi + 1358LL), (int)v10 + 1)) != 0
          && (v48 = HMValidateHandleNoRip(Prop, 3), v10 = 0LL, (v11 = (struct tagCURSOR *)v48) != 0LL)
          || (v11 = *(struct tagCURSOR **)(*(_QWORD *)(v43 + 168) + 128LL)) != 0LL )
        {
LABEL_40:
          DrawIconEx(v58, v31, v34, (__int64)v11, v57, v57, (int)v10, *(_QWORD *)(gpsi + 4800LL), 3u);
          goto LABEL_34;
        }
        if ( (*(_BYTE *)(v43 + 61) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47);
          v63[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v63;
          v63[1] = v43;
          _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
          LODWORD(ThreadWin32Thread) = (_DWORD)v61;
          if ( v61 )
            ThreadWin32Thread = *(_QWORD *)v61;
          xxxSendMessageCallback(
            (struct tagWND *)v43,
            55LL,
            0LL,
            0LL,
            (__int64)DrawIconCallBack,
            (unsigned int)ThreadWin32Thread,
            0,
            0,
            1);
          ThreadUnlock1(v51, v50);
          v10 = 0LL;
          goto LABEL_32;
        }
        v11 = (struct tagCURSOR *)qword_1C0321938;
      }
      if ( v11 )
        goto LABEL_40;
LABEL_32:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_35;
      v60.left = v31;
      v60.top = v34;
      v60.right = v31 + v57;
      v60.bottom = v34 + v57;
      FillRect(v58, &v60, *(HBRUSH *)(gpsi + 4800LL));
LABEL_34:
      v10 = 0LL;
LABEL_35:
      if ( v53 <= (int)v10 )
        break;
      v11 = v10;
      ++v18;
      PrevPhwnd = NextPrevPhwnd(a2, PrevPhwnd, 1);
      v33 = (unsigned __int64 *)PrevPhwnd;
      if ( v18 < *((_DWORD *)a2 + 14) )
      {
        v31 += v9;
      }
      else
      {
        v31 = v56;
        v18 = (int)v10;
        v34 += v9;
      }
      v25 = v53;
    }
  }
LABEL_43:
  if ( v62 == (HDC)v10 )
    _ReleaseDC(v58);
}
