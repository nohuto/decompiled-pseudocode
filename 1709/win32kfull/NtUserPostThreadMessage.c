/*
 * XREFs of NtUserPostThreadMessage @ 0x1C009E440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00CD2DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  unsigned __int64 i; // rcx
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // r15d
  unsigned int v17; // edx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  _DWORD v25[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
    v9 = 0;
    goto LABEL_6;
  }
  v9 = 0;
  v11 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v11 )
  {
    v12 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v12 )
      goto LABEL_9;
    for ( i = v12[2]; ; i = *(_QWORD *)i )
    {
      if ( !i )
      {
        v12 = (_QWORD *)*v12;
        goto LABEL_8;
      }
      if ( *(unsigned __int16 *)(i + 32) == a1 )
        break;
    }
    v11 = *(_QWORD **)(i + 16);
  }
  v12 = (_QWORD *)v11[54];
  if ( *(_QWORD **)(gptiCurrent + 432LL) != v12
    && (*(_DWORD *)(gptiCurrent + 464LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 400LL), (__int64)v12) )
  {
    if ( !(unsigned int)IsPrivileged(psTcb) )
    {
LABEL_9:
      UserSetLastError(1444LL, (__int64)v12);
      goto LABEL_6;
    }
    if ( gbEnforceUIPI )
    {
      i = *(_QWORD *)(v11[50] + 832LL);
      v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
      if ( (unsigned int)v23 <= (unsigned int)i )
      {
        if ( (_DWORD)v23 != (_DWORD)i
          || (v24 = HIDWORD(v23), i >>= 32, (_DWORD)v24 != (_DWORD)i) && (_DWORD)v24 != -1 && (_DWORD)i != -1 )
        {
          UserSetLastError(1444LL, (__int64)v12);
          EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 400LL), v11[50], a2, a3, a4);
          goto LABEL_6;
        }
      }
    }
    else if ( (int)GetProcessLuid(*gptiCurrent, v26) < 0
           || (int)GetProcessLuid(*v11, v25) < 0
           || v26[0] != v25[0]
           || v26[1] != v25[1] )
    {
      goto LABEL_9;
    }
  }
  v13 = v11[50];
  v14 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( v13 != v14 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          (struct tagPROCESSINFO *)v14,
                          (struct tagPROCESSINFO *)v13,
                          0LL,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v16 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v16 )
      {
        v21 = 2;
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage((struct tagPROCESSINFO *)v14, (struct tagPROCESSINFO *)v13, a4, 0, 2);
          goto LABEL_5;
        }
        if ( *(_QWORD *)v13 == gpepCSRSS )
        {
          v17 = 0x2000;
          v18 = 0;
        }
        else
        {
          v17 = *(_DWORD *)(v13 + 832);
          v18 = *(_DWORD *)(v13 + 836);
        }
        v19 = *(_QWORD *)(v14 + 832);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v19 <= v17 )
          {
            if ( (_DWORD)v19 != v17 || (v20 = HIDWORD(v19), (_DWORD)v20 != v18) && v18 != -1 && (_DWORD)v20 != -1 )
            {
              v16 = 0;
              EtwTraceUIPIMsgError(v14, v13, a2, a3, a4);
              UserSetLastError(5LL, v22);
              MSGSQMAddMessage((struct tagPROCESSINFO *)v14, (struct tagPROCESSINFO *)v13, a4, 0, 0);
LABEL_22:
              if ( !v16 )
                goto LABEL_6;
              goto LABEL_5;
            }
          }
        }
        v16 = 1;
        v21 = gbEnforceUIPI != 0 ? 5 : 1;
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)v14, (struct tagPROCESSINFO *)v13, a4, 0, v21);
      goto LABEL_22;
    }
  }
LABEL_5:
  v9 = PostThreadMessage(v11, a2, a3, a4);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v12);
  return v9;
}
