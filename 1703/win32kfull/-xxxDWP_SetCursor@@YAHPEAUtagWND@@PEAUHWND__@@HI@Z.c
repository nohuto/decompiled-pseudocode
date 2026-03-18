/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C01128F0 (_GetMenuState.c)
 *     xxxActiveWindowTracking @ 0x1C01BD2BC (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C020DBAC (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C020DC94 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v6; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v19; // esi
  char v20; // cl
  bool v21; // zf
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  int v29; // esi
  int v30; // esi
  __int64 v31; // rbx
  _QWORD v32[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v33[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = a2;
  if ( !a4 )
    goto LABEL_5;
  v8 = *((_QWORD *)a1 + 3);
  if ( *(_QWORD *)(v8 + 328) )
  {
    if ( (*(_DWORD *)(v8 + 336) & 8) != 0 )
    {
      v20 = *((_BYTE *)a1 + 305);
      if ( (v20 & 3) != 0 )
      {
        if ( a3 != 10 )
        {
          switch ( a3 )
          {
            case 11:
              goto LABEL_42;
            case 13:
              goto LABEL_43;
            case 14:
LABEL_42:
              v21 = (v20 & 1) == 0;
              goto LABEL_44;
          }
          if ( a3 != 16 )
          {
            if ( a3 != 17 )
              goto LABEL_25;
            goto LABEL_42;
          }
        }
LABEL_43:
        v21 = (v20 & 2) == 0;
LABEL_44:
        if ( !v21 )
          goto LABEL_45;
        goto LABEL_25;
      }
    }
  }
  if ( a3 < 10 )
  {
LABEL_5:
    if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
      v9 = *((_QWORD *)a1 + 13);
    else
      v9 = 0LL;
    v10 = *((_QWORD *)a1 + 3);
    v11 = 0LL;
    if ( v10 )
    {
      a2 = *(_QWORD **)(v10 + 8);
      if ( a2 )
        v11 = a2[2];
    }
    v12 = 0LL;
    if ( v9 != v11 )
      v12 = v9;
    if ( v12 )
    {
      v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v33;
      v33[1] = v12;
      ++*(_DWORD *)(v12 + 8);
      v13 = xxxSendMessage(v12, 32LL, v6, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16));
      ThreadUnlock1(v15, v14);
      if ( v13 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_25;
    LOBYTE(a2) = 1;
    v16 = HMValidateHandleNoSecure(v6, a2);
    if ( v16 )
    {
      if ( a3 == -2 )
      {
        v19 = a4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_25;
        }
        v28 = v19 - 1;
        if ( v28 )
        {
          v29 = v28 - 3;
          if ( v29 )
          {
            v30 = v29 - 3;
            if ( v30 )
            {
              if ( v30 != 4 )
                goto LABEL_25;
            }
          }
        }
        else
        {
          v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
          xxxActivateEnabledPopup(a1);
          if ( v31 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
            goto LABEL_25;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_25;
      }
      if ( a3 != 1 )
      {
LABEL_25:
        v17 = gasyscur[1];
        goto LABEL_19;
      }
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 168) + 128LL);
      if ( v17 )
LABEL_19:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_45:
    v22 = gasyscur[15];
    goto LABEL_46;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_52:
      v22 = gasyscur[11];
      goto LABEL_46;
    }
    if ( a3 == 14 )
    {
LABEL_51:
      v22 = gasyscur[13];
      goto LABEL_46;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_5;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
  }
  v22 = gasyscur[17];
LABEL_46:
  LOBYTE(a2) = 1;
  v23 = HMValidateHandleNoSecure(v6, a2);
  if ( !v23 )
    return 0LL;
  if ( (*(_BYTE *)(v23 + 70) & 8) != 0 )
  {
    v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v32;
    ++*(_DWORD *)(v23 + 8);
    v32[1] = v23;
    SysMenu = xxxGetSysMenu(v23, 1LL);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v27, v26);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_25;
  }
  zzzSetCursor(v22);
  return 1LL;
}
