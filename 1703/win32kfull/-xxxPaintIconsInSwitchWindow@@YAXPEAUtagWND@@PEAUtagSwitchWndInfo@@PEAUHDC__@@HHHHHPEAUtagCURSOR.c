/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01CA990 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _ScrollDC @ 0x1C0067304 (_ScrollDC.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C011A460 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01CB1A4 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
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
  struct tagCURSOR *v11; // r15
  unsigned int v14; // ecx
  HDC DCEx; // r10
  int v17; // edi
  int v18; // r14d
  LONG v19; // r9d
  int v20; // r12d
  int v21; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // r14d
  int v27; // ecx
  unsigned int v28; // r12d
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v31; // rax
  __int64 TopLevelCreatorWindow; // rax
  __int64 v33; // rdi
  __int64 Prop; // rax
  __int64 v35; // rax
  struct tagWND *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // edi
  int v41; // eax
  LONG v42; // [rsp+50h] [rbp-71h]
  unsigned int v43; // [rsp+50h] [rbp-71h]
  signed int v44; // [rsp+54h] [rbp-6Dh]
  int v45; // [rsp+54h] [rbp-6Dh]
  unsigned int v46; // [rsp+58h] [rbp-69h]
  HDC v47; // [rsp+60h] [rbp-61h]
  unsigned int v48; // [rsp+68h] [rbp-59h]
  RECT v49; // [rsp+70h] [rbp-51h] BYREF
  struct tagWND *v50; // [rsp+80h] [rbp-41h]
  HDC v51; // [rsp+88h] [rbp-39h]
  _QWORD v52[3]; // [rsp+90h] [rbp-31h] BYREF
  struct tagRECT v53; // [rsp+A8h] [rbp-19h] BYREF

  v9 = *((_DWORD *)a2 + 29);
  v10 = 0LL;
  v11 = a9;
  v50 = a1;
  v14 = *((_DWORD *)a2 + 28);
  v51 = a3;
  v47 = a3;
  v46 = v14;
  DCEx = a3;
  v44 = v9 - v14;
  v17 = 0;
  v18 = 0;
  if ( !a3 )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    v47 = DCEx;
    v10 = 0LL;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v42 = v19;
  if ( a7 )
  {
    v21 = *((_DWORD *)a2 + 15) * v9;
    v22 = v9;
    v23 = v9 * *((_DWORD *)a2 + 14);
    v53.left = *((_DWORD *)a2 + 21);
    v53.top = v19;
    v53.bottom = v19 + v21;
    v53.right = v20 + v23;
    if ( a8 )
      v22 = -v9;
    ScrollDC(DCEx, 0, v22, &v53, &v53, 0LL, 0LL);
    v10 = 0LL;
    if ( a8 )
      v17 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    a4 = *((_DWORD *)a2 + 13);
    if ( a8 )
    {
      a4 += v24 * (*((_DWORD *)a2 + 15) - 1);
      v25 = *((_DWORD *)a2 + 10);
      if ( a4 >= v25 )
        a4 -= v25;
    }
    v19 = v42;
  }
  else
  {
    v24 = a6;
  }
  if ( a9 )
  {
    v26 = a4 - *((_DWORD *)a2 + 13);
    if ( v26 < 0 )
      v26 += *((_DWORD *)a2 + 10);
    v27 = *((_DWORD *)a2 + 14);
    v17 = v26 / v27;
    if ( v26 / v27 >= *((_DWORD *)a2 + 15) )
      goto LABEL_46;
    v18 = v26 % v27;
  }
  v48 = v44 / 2 + v20;
  v28 = v18 * v9 + v48;
  v43 = v44 / 2 + v17 * v9 + v19;
  *(_QWORD *)&v53.left = *((_QWORD *)a2 + 2) + 32LL + 8LL * a4;
  if ( v24 )
  {
    while ( 1 )
    {
      v45 = v24 - 1;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_50;
      KeyState = GetKeyState(0x12u);
      v10 = 0LL;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_50:
        AsyncKeyState = _GetAsyncKeyState(18LL);
        v10 = 0LL;
        if ( AsyncKeyState >= 0 )
          break;
      }
      v31 = HMValidateHandleNoSecure(**(_QWORD **)&v53.left, 1);
      v10 = 0LL;
      if ( v31 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v31);
        v33 = TopLevelCreatorWindow;
        if ( v11
          || (Prop = GetProp(TopLevelCreatorWindow, *(_WORD *)(gpsi + 1358LL), (int)v10 + 1)) != 0
          && (v35 = HMValidateHandleNoRip(Prop, 3), v10 = 0LL, (v11 = (struct tagCURSOR *)v35) != 0LL)
          || (v11 = *(struct tagCURSOR **)(*(_QWORD *)(v33 + 168) + 120LL)) != 0LL )
        {
LABEL_41:
          v40 = v43;
          DrawIconEx(v47, v28, v43, (__int64)v11, v46, v46, (unsigned int)v10, *(_QWORD *)(gpsi + 5208LL), 3);
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(v33 + 61) & 2) == 0 )
        {
          v52[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v52;
          v36 = v50;
          v52[1] = v33;
          ++*(_DWORD *)(v33 + 8);
          if ( v36 )
            v37 = *(_QWORD *)v36;
          else
            LODWORD(v37) = (_DWORD)v10;
          xxxSendMessageCallback(
            (struct tagWND *)v33,
            0x37u,
            0LL,
            0LL,
            (__int64)DrawIconCallBack,
            (unsigned int)v37,
            (int)v10,
            (int)v10,
            1);
          ThreadUnlock1(v39, v38);
          v10 = 0LL;
          goto LABEL_33;
        }
        v11 = (struct tagCURSOR *)qword_1C0325938;
      }
      if ( v11 )
        goto LABEL_41;
LABEL_33:
      v40 = v43;
      if ( a7 == (_DWORD)v10 )
        goto LABEL_36;
      v49.left = v28;
      v49.top = v43;
      v49.right = v28 + v46;
      v49.bottom = v43 + v46;
      FillRect(v47, &v49, *(HBRUSH *)(gpsi + 5208LL));
LABEL_35:
      v10 = 0LL;
LABEL_36:
      if ( v45 <= (int)v10 )
        break;
      v11 = v10;
      ++v18;
      *(_QWORD *)&v53.left = NextPrevPhwnd(a2, *(HWND **)&v53.left, 1);
      if ( v18 < *((_DWORD *)a2 + 14) )
      {
        v28 += v9;
      }
      else
      {
        v28 = v48;
        v43 = v9 + v40;
        v18 = (int)v10;
      }
      v41 = *((_DWORD *)a2 + 10);
      if ( ++a4 >= v41 )
        a4 -= v41;
      v24 = v45;
    }
  }
LABEL_46:
  if ( v51 == (HDC)v10 )
    _ReleaseDC(v47);
}
