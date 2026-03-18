/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00C5FC0
 * Callers:
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00C5ED0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C011B3B0 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01BE8C0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01BE920 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01BE980 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00C9964 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbp
  __int64 v10; // rdi
  int v12; // ebx
  int v13; // r11d
  __int16 v14; // ax
  unsigned int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx

  v6 = a2;
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_29;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v9 = CurrentProcessWin32Process;
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return 1LL;
  if ( v6 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v10,
                         a1,
                         v6,
                         a3,
                         a4,
                         1) )
      return 1LL;
    v12 = IsMessageAlwaysAllowedAcrossIL(v6);
    if ( v12 )
    {
      v14 = v13 + 2;
    }
    else
    {
      if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 2);
        return 1LL;
      }
      if ( *(_QWORD *)v10 == gpepCSRSS )
      {
        v15 = 0x2000;
        v16 = v13;
      }
      else
      {
        v15 = *(_DWORD *)(v10 + 824);
        v16 = *(_DWORD *)(v10 + 828);
      }
      v17 = *((_QWORD *)v9 + 103);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v17 <= v15 )
        {
          if ( (_DWORD)v17 != v15 || (v18 = HIDWORD(v17), (_DWORD)v18 != v16) && (_DWORD)v18 != -1 && v16 != -1 )
          {
            v12 = v13;
            if ( v6 == 793 )
            {
              v19 = *((_QWORD *)a1 + 2);
              if ( *(struct tagWND **)(v19 + 1264) == a1 && *(_QWORD *)(v19 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
                return 1LL;
            }
            EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 0);
LABEL_27:
            if ( v12 )
              return 1LL;
            goto LABEL_28;
          }
        }
      }
      v12 = 1;
      v14 = gbEnforceUIPI != 0 ? 5 : 1;
    }
    MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, v14);
    goto LABEL_27;
  }
LABEL_28:
  if ( *(_QWORD *)v9 == gpepCSRSS )
    return 1LL;
LABEL_29:
  UserSetLastError(5LL);
  return 0LL;
}
