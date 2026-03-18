/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetMenuState @ 0x1C0046708 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C020F3C8 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C020F4B8 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, HWND a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v19; // esi
  char v20; // cl
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  int v36; // esi
  int v37; // esi
  __int64 v38; // rbx
  _QWORD v39[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v40[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a4;
  v5 = a3;
  if ( !(_DWORD)a4 )
    goto LABEL_4;
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8LL, a3, a4) )
  {
    v20 = *((_BYTE *)a1 + 305);
    if ( (v20 & 3) != 0 )
    {
      v21 = v5 - 10;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
          goto LABEL_35;
        v23 = v22 - 2;
        if ( !v23 )
          goto LABEL_36;
        v24 = v23 - 1;
        if ( !v24 )
        {
LABEL_35:
          v26 = (v20 & 1) == 0;
          goto LABEL_37;
        }
        v25 = v24 - 2;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_18;
          goto LABEL_35;
        }
      }
LABEL_36:
      v26 = (v20 & 2) == 0;
LABEL_37:
      if ( !v26 )
        goto LABEL_38;
      goto LABEL_18;
    }
  }
  if ( v5 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v11 = 0LL;
    if ( v10 != DesktopWindow )
      v11 = v10;
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v40[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v40;
      v40[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v13 = xxxSendMessage(v11, 32LL, a2, (unsigned __int16)v5 | ((unsigned __int16)v4 << 16));
      ThreadUnlock1(v15, v14);
      if ( v13 )
        return 1LL;
    }
    if ( !v4 )
      goto LABEL_18;
    LOBYTE(v10) = 1;
    v16 = HMValidateHandleNoSecure(a2, v10);
    if ( v16 )
    {
      if ( v5 == -2 )
      {
        v19 = v4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_18;
        }
        v35 = v19 - 1;
        if ( v35 )
        {
          v36 = v35 - 3;
          if ( v36 )
          {
            v37 = v36 - 3;
            if ( v37 )
            {
              if ( v37 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v38 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
          xxxActivateEnabledPopup(a1);
          if ( v38 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_18;
      }
      if ( v5 != 1 )
      {
LABEL_18:
        v17 = *(_QWORD *)&gasyscur[4];
        goto LABEL_13;
      }
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 168) + 136LL);
      if ( v17 )
LABEL_13:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( v5 <= 11 )
  {
LABEL_38:
    v27 = *(_QWORD *)&gasyscur[60];
    goto LABEL_39;
  }
  if ( v5 != 12 )
  {
    if ( v5 == 13 )
    {
LABEL_45:
      v27 = *(_QWORD *)&gasyscur[44];
      goto LABEL_39;
    }
    if ( v5 == 14 )
    {
LABEL_44:
      v27 = *(_QWORD *)&gasyscur[52];
      goto LABEL_39;
    }
    if ( v5 != 15 )
    {
      if ( v5 != 16 )
      {
        if ( v5 != 17 )
          goto LABEL_4;
        goto LABEL_45;
      }
      goto LABEL_44;
    }
  }
  v27 = *(_QWORD *)&gasyscur[68];
LABEL_39:
  LOBYTE(v8) = 1;
  v28 = HMValidateHandleNoSecure(a2, v8);
  v29 = v28;
  if ( !v28 )
    return 0LL;
  if ( (*(_BYTE *)(v28 + 70) & 8) != 0 )
  {
    v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v39[0] = *(_QWORD *)(v30 + 392);
    *(_QWORD *)(v30 + 392) = v39;
    v39[1] = v29;
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    SysMenu = xxxGetSysMenu((struct tagWND *)v29, 1);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v34, v33);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v27);
  return 1LL;
}
