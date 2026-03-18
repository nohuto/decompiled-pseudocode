/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     GreSaveDC @ 0x1C007DF40 (GreSaveDC.c)
 *     GreSetWindowOrg @ 0x1C00F76DC (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C010838C (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, int a3)
{
  unsigned int v3; // r14d
  unsigned int v4; // esi
  struct tagWND *v6; // rbx
  BOOL v7; // r13d
  int v8; // r14d
  unsigned int v9; // r15d
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r14
  unsigned __int64 *i; // r15
  __int64 DesktopWindow; // rax
  struct tagBWL *v14; // rax
  struct tagBWL *v15; // rsi
  unsigned __int64 *v16; // r14
  unsigned __int64 v17; // rcx
  struct tagWND *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagBWL *v29; // rcx
  int v30; // r15d
  int v31; // r14d
  unsigned int v32; // r12d
  __int64 v34; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v35; // [rsp+40h] [rbp-10h]
  unsigned int v36; // [rsp+90h] [rbp+40h]
  int v37; // [rsp+A0h] [rbp+50h] BYREF
  int v38; // [rsp+A4h] [rbp+54h]
  struct tagWND *v39; // [rsp+A8h] [rbp+58h]

  v39 = a1;
  v4 = a3;
  v6 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v7 = (*((_BYTE *)v6 + 66) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v4 & 2) != 0 )
  {
    LOBYTE(v3) = ~*((_BYTE *)v6 + 71);
    v8 = (v3 >> 4) & 1;
    if ( v8 )
      SetVisible(v6, 5);
    SetOrClrWF(1, v6, 0x180u, 1);
    if ( v7 )
    {
      v30 = *((_DWORD *)v6 + 34) - *((_DWORD *)v6 + 32);
      v36 = GreSetLayout(a2, (unsigned int)(v30 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v6, a2, (*((_BYTE *)v6 + 56) & 0x40) != 0);
      else
        xxxSendMessage((int)v6, 175, (int)a2, (*((_BYTE *)v6 + 56) & 0x40) != 0);
      GreSetLayout(a2, (unsigned int)(v30 - 1), v36);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame((__int64)v6, a2, (*((_BYTE *)v6 + 56) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage((int)v6, 175, (int)a2, (*((_BYTE *)v6 + 56) & 0x40) != 0);
    }
    SetOrClrWF(0, v6, 0x180u, 1);
    if ( v8 )
      SetVisible(v6, 0);
  }
  if ( (v4 & 4) == 0 )
    return 1LL;
  v9 = GreSaveDC(a2);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v37);
  if ( (v4 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*((_DWORD *)v6 + 38) - *((_DWORD *)v6 + 36)),
    *((_DWORD *)v6 + 39) - *((_DWORD *)v6 + 37));
  if ( v7 )
  {
    v31 = *((_DWORD *)v6 + 38) - *((_DWORD *)v6 + 36);
    v32 = GreSetLayout(a2, (unsigned int)(v31 - 1), 1LL);
    if ( (v4 & 8) != 0 )
      xxxSendMessage((int)v6, 20, (int)a2, 0);
    xxxSendMessage((int)v6, 792, (int)a2, v4);
    GreSetLayout(a2, (unsigned int)(v31 - 1), v32);
  }
  else
  {
    if ( (v4 & 8) != 0 )
      xxxSendMessage((int)v6, 20, (int)a2, 0);
    xxxSendMessage((int)v6, 792, (int)a2, v4);
  }
  GreRestoreDC(a2, v9);
  v37 += *((_DWORD *)v6 + 32);
  v38 += *((_DWORD *)v6 + 33);
  if ( (v4 & 0x10) != 0 )
  {
    v4 = v4 & 0xFFFFFFF4 | 0xA;
    v10 = BuildHwndList(*((_QWORD *)v6 + 14), 2, 0LL);
    v11 = v10;
    if ( v10 )
    {
      for ( i = (unsigned __int64 *)((char *)v10 + 32); *i != 1; ++i )
      {
        v25 = HMValidateHandleNoSecure(*i, 1);
        v6 = (struct tagWND *)v25;
        if ( v25 && (*(_BYTE *)(v25 + 71) & 0x10) != 0 )
        {
          v26 = GreSaveDC(a2);
          if ( !v26 )
          {
            v29 = v11;
            goto LABEL_47;
          }
          GreSetWindowOrg(a2);
          if ( *(char *)(*((_QWORD *)v6 + 21) + 92LL) >= 0 )
            GreIntersectClipRect(
              a2,
              0LL,
              0LL,
              (unsigned int)(*((_DWORD *)v6 + 34) - *((_DWORD *)v6 + 32)),
              *((_DWORD *)v6 + 35) - *((_DWORD *)v6 + 33));
          v34 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v34;
          v35 = v6;
          ++*((_DWORD *)v6 + 2);
          xxxSendMessage((int)v6, 791, (int)a2, v4);
          ThreadUnlock1(v28, v27);
          GreRestoreDC(a2, v26);
        }
      }
      FreeHwndList(v11);
    }
  }
  if ( (v4 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v6);
  v14 = BuildHwndList(*(_QWORD *)(DesktopWindow + 112), 2, 0LL);
  v15 = v14;
  if ( !v14 )
    return 1LL;
  v16 = (unsigned __int64 *)((char *)v14 + 32);
  v17 = *((_QWORD *)v14 + 4);
  if ( v17 == 1 )
  {
LABEL_32:
    FreeHwndList(v15);
    return 1LL;
  }
  v18 = v39;
  while ( 1 )
  {
    v19 = HMValidateHandleNoSecure(v17, 1);
    v20 = v19;
    if ( !v19 || *(struct tagWND **)(v19 + 120) != v18 || (*(_BYTE *)(v19 + 71) & 0x10) == 0 )
      goto LABEL_31;
    v22 = GreSaveDC(a2);
    if ( !v22 )
      break;
    GreSetWindowOrg(a2);
    v34 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v34;
    v35 = (struct tagWND *)v20;
    ++*(_DWORD *)(v20 + 8);
    xxxSendMessage(v20, 791, (int)a2, a3);
    ThreadUnlock1(v24, v23);
    GreRestoreDC(a2, v22);
LABEL_31:
    v17 = *++v16;
    if ( *v16 == 1 )
      goto LABEL_32;
  }
  v29 = v15;
LABEL_47:
  FreeHwndList(v29);
  return 0LL;
}
