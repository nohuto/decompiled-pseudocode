/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 *     GreSetWindowOrg @ 0x1C008178C (GreSetWindowOrg.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _IsWindowVisible @ 0x1C0112B5C (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r13d
  char v7; // r15
  unsigned int v8; // r15d
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // r14
  _QWORD *i; // r15
  __int64 DesktopWindow; // rax
  struct tagBWL *v14; // rax
  __int64 v15; // rdx
  struct tagBWL *v16; // rsi
  _QWORD *v17; // r14
  __int64 v18; // rcx
  struct tagWND *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagBWL *v32; // rcx
  int v33; // r14d
  int v34; // r14d
  unsigned int v35; // r12d
  __int64 v37; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+90h] [rbp+40h]
  int v40; // [rsp+A0h] [rbp+50h] BYREF
  int v41; // [rsp+A4h] [rbp+54h]
  struct tagWND *v42; // [rsp+A8h] [rbp+58h]

  v42 = a1;
  v3 = a3;
  v5 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible() )
    return 0LL;
  v6 = (*((_BYTE *)v5 + 66) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    v7 = *((_BYTE *)v5 + 71) & 0x10;
    if ( !v7 )
      SetVisible(v5);
    SetOrClrWF(1LL, v5, 384LL, 1LL);
    if ( v6 )
    {
      v33 = *((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32);
      v39 = GreSetLayout(a2, (unsigned int)(v33 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2);
      else
        xxxSendMessage(v5, 175LL, a2, ((unsigned __int64)*((unsigned __int8 *)v5 + 56) >> 6) & 1);
      GreSetLayout(a2, (unsigned int)(v33 - 1), v39);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame(v5, a2);
    }
    else
    {
      xxxSendMessage(v5, 175LL, a2, ((unsigned __int64)*((unsigned __int8 *)v5 + 56) >> 6) & 1);
    }
    SetOrClrWF(0LL, v5, 384LL, 1LL);
    if ( !v7 )
      SetVisible(v5);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v8 = GreSaveDC((__int64)a2, (__int64)a2);
  if ( !v8 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v40);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*((_DWORD *)v5 + 38) - *((_DWORD *)v5 + 36)),
    *((_DWORD *)v5 + 39) - *((_DWORD *)v5 + 37));
  if ( v6 )
  {
    v34 = *((_DWORD *)v5 + 38) - *((_DWORD *)v5 + 36);
    v35 = GreSetLayout(a2, (unsigned int)(v34 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 20LL, a2, 0LL);
    xxxSendMessage(v5, 792LL, a2, v3);
    GreSetLayout(a2, (unsigned int)(v34 - 1), v35);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 20LL, a2, 0LL);
    xxxSendMessage(v5, 792LL, a2, v3);
  }
  GreRestoreDC(a2, v8);
  v40 += *((_DWORD *)v5 + 32);
  v41 += *((_DWORD *)v5 + 33);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v9 = BuildHwndList(*((_QWORD *)v5 + 14), (struct tagWND *)2, 0LL);
    v11 = v9;
    if ( v9 )
    {
      for ( i = (_QWORD *)((char *)v9 + 32); *i != 1LL; ++i )
      {
        LOBYTE(v10) = 1;
        v27 = HMValidateHandleNoSecure(*i, v10);
        v5 = (struct tagWND *)v27;
        if ( v27 && (*(_BYTE *)(v27 + 71) & 0x10) != 0 )
        {
          v28 = GreSaveDC((__int64)a2, v10);
          if ( !v28 )
          {
            v32 = v11;
            goto LABEL_47;
          }
          GreSetWindowOrg(a2);
          if ( *(char *)(*((_QWORD *)v5 + 21) + 100LL) >= 0 )
            GreIntersectClipRect(
              a2,
              0LL,
              0LL,
              (unsigned int)(*((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32)),
              *((_DWORD *)v5 + 35) - *((_DWORD *)v5 + 33));
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v37 = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = &v37;
          v38 = v5;
          _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
          xxxSendMessage(v5, 791LL, a2, v3);
          ThreadUnlock1(v31, v30);
          GreRestoreDC(a2, v28);
        }
      }
      FreeHwndList(v11);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v14 = BuildHwndList(*(_QWORD *)(DesktopWindow + 112), (struct tagWND *)2, 0LL);
  v16 = v14;
  if ( !v14 )
    return 1LL;
  v17 = (_QWORD *)((char *)v14 + 32);
  v18 = *((_QWORD *)v14 + 4);
  if ( v18 == 1 )
  {
LABEL_32:
    FreeHwndList(v16);
    return 1LL;
  }
  v19 = v42;
  while ( 1 )
  {
    LOBYTE(v15) = 1;
    v20 = HMValidateHandleNoSecure(v18, v15);
    v21 = v20;
    if ( !v20 || *(struct tagWND **)(v20 + 120) != v19 || (*(_BYTE *)(v20 + 71) & 0x10) == 0 )
      goto LABEL_31;
    v23 = GreSaveDC((__int64)a2, v15);
    if ( !v23 )
      break;
    GreSetWindowOrg(a2);
    v24 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v37 = *(_QWORD *)(v24 + 392);
    *(_QWORD *)(v24 + 392) = &v37;
    v38 = (struct tagWND *)v21;
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    xxxSendMessage(v21, 791LL, a2, a3);
    ThreadUnlock1(v26, v25);
    GreRestoreDC(a2, v23);
LABEL_31:
    v18 = *++v17;
    if ( *v17 == 1LL )
      goto LABEL_32;
  }
  v32 = v16;
LABEL_47:
  FreeHwndList(v32);
  return 0LL;
}
