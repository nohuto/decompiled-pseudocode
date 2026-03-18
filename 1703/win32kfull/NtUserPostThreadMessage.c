/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00CBA30
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C001B650 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00C6ED0 (IsPrivileged.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00C9964 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v8; // ebx
  unsigned __int64 i; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r15
  _QWORD *v17; // rdx
  int v18; // esi
  unsigned int v19; // edx
  int v20; // r8d
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _DWORD v26[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v27[2]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v8 = 0;
    goto LABEL_6;
  }
  v8 = 0;
  v12 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v12 )
  {
    v17 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v17 )
      goto LABEL_9;
    for ( i = v17[2]; ; i = *(_QWORD *)i )
    {
      if ( !i )
      {
        v17 = (_QWORD *)*v17;
        goto LABEL_8;
      }
      if ( *(unsigned __int16 *)(i + 32) == a1 )
        break;
    }
    v12 = *(_QWORD **)(i + 16);
  }
  v13 = v12[51];
  if ( *(_QWORD *)(gptiCurrent + 408LL) != v13
    && (*(_DWORD *)(gptiCurrent + 440LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 376LL), v13) )
  {
    if ( !(unsigned int)IsPrivileged(psTcb) )
    {
LABEL_9:
      UserSetLastError(1444LL);
      goto LABEL_6;
    }
    if ( gbEnforceUIPI )
    {
      i = *(_QWORD *)(v12[47] + 824LL);
      v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
      if ( (unsigned int)v24 <= (unsigned int)i )
      {
        if ( (_DWORD)v24 != (_DWORD)i
          || (v25 = HIDWORD(v24), i >>= 32, (_DWORD)v25 != (_DWORD)i) && (_DWORD)v25 != -1 && (_DWORD)i != -1 )
        {
          UserSetLastError(1444LL);
          EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 376LL), v12[47], a2, a3, a4);
          goto LABEL_6;
        }
      }
    }
    else if ( (int)GetProcessLuid(*gptiCurrent, v27) < 0
           || (int)GetProcessLuid(*v12, v26) < 0
           || v27[0] != v26[0]
           || v27[1] != v26[1] )
    {
      goto LABEL_9;
    }
  }
  v14 = v12[47];
  v15 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( v14 != v15 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          (struct tagPROCESSINFO *)v15,
                          (void *const **)v14,
                          0LL,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v18 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v18 )
      {
        v22 = 2;
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage((struct tagPROCESSINFO *)v15, (struct tagPROCESSINFO *)v14, 0x112u, a3, a4, 0, 2);
          goto LABEL_5;
        }
        if ( *(_QWORD *)v14 == gpepCSRSS )
        {
          v19 = 0x2000;
          v20 = 0;
        }
        else
        {
          v19 = *(_DWORD *)(v14 + 824);
          v20 = *(_DWORD *)(v14 + 828);
        }
        v21 = *(_QWORD *)(v15 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v21 <= v19 )
          {
            if ( (_DWORD)v21 != v19 || (v23 = HIDWORD(v21), (_DWORD)v23 != v20) && v20 != -1 && (_DWORD)v23 != -1 )
            {
              v18 = 0;
              EtwTraceUIPIMsgError(v15, v14, a2, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage((struct tagPROCESSINFO *)v15, (struct tagPROCESSINFO *)v14, a2, a3, a4, 0, 0);
LABEL_20:
              if ( !v18 )
                goto LABEL_6;
              goto LABEL_5;
            }
          }
        }
        v18 = 1;
        v22 = gbEnforceUIPI != 0 ? 5 : 1;
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)v15, (struct tagPROCESSINFO *)v14, a2, a3, a4, 0, v22);
      goto LABEL_20;
    }
  }
LABEL_5:
  v8 = PostThreadMessage(v12, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v13, v10, v11);
  return v8;
}
