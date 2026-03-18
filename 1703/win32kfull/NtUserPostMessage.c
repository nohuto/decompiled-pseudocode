/*
 * XREFs of NtUserPostMessage @ 0x1C0055CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00C9964 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ForwardTouchMessage @ 0x1C01B81B4 (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01E590C (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // ebp
  __int64 v15; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int v20; // edx
  int v21; // r9d
  unsigned __int64 v22; // rax
  __int16 v23; // ax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rdx

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v10 = 0;
    goto LABEL_22;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = ((unsigned __int16)MessageTable[v4] >> 13) & 1;
    if ( (((unsigned __int16)MessageTable[v4] >> 13) & 1) != 0 )
    {
      v10 = 0;
      v25 = 5LL;
LABEL_70:
      UserSetLastError(v25);
      goto LABEL_22;
    }
  }
  v10 = 0;
  if ( a1 < 0x10000 || a1 == -1LL )
  {
    if ( !a1 )
    {
      v11 = 0LL;
      goto LABEL_6;
    }
    if ( a1 == 0xFFFF || a1 == -1LL )
    {
      v11 = -1LL;
      goto LABEL_6;
    }
  }
  v11 = ValidateHwnd(a1);
  if ( !v11 )
  {
    if ( (_DWORD)v4 == 993 )
      v10 = 1;
    goto LABEL_22;
  }
LABEL_6:
  if ( (_DWORD)v4 != 576 )
  {
    if ( (unsigned int)(v4 - 577) <= 0x16 && (v9 = 8384511LL, _bittest((const int *)&v9, v4 - 577))
      || (_DWORD)v4 == 281
      || (_DWORD)v4 == 283 )
    {
      v25 = 1002LL;
      goto LABEL_70;
    }
    v14 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v14 = ValidateDDEConvPair(a3, v11) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
      v14 = 1;
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_17;
    if ( v14 )
      goto LABEL_17;
    v15 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9, v8);
    v17 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v15 == CurrentProcessWin32Process )
      goto LABEL_17;
    if ( (_DWORD)v4 == 717 )
      goto LABEL_22;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v15,
                         (struct tagWND *)v11,
                         v4,
                         a3,
                         (__int64)a4,
                         0) )
      goto LABEL_17;
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
    {
      v23 = 2;
    }
    else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v15 == gpepCSRSS )
      {
        v20 = 0x2000;
        v21 = 0;
      }
      else
      {
        v20 = *(_DWORD *)(v15 + 824);
        v21 = *(_DWORD *)(v15 + 828);
      }
      v22 = *((_QWORD *)v17 + 103);
      if ( !gbEnforceUIPI )
        goto LABEL_68;
      if ( (unsigned int)v22 <= v20 )
      {
        if ( (_DWORD)v22 != v20 || (v24 = HIDWORD(v22), (_DWORD)v24 != v21) && (_DWORD)v24 != -1 && v21 != -1 )
        {
          if ( (_DWORD)v4 != 793
            || (v27 = *(_QWORD *)(v11 + 16), *(_QWORD *)(v27 + 1264) != v11)
            || *(_QWORD *)(v27 + 384) != *(_QWORD *)(gptiCurrent + 384LL) )
          {
            EtwTraceUIPIMsgError(v17, v15, (unsigned int)v4, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, (__int64)a4, 0, 0);
            goto LABEL_22;
          }
          goto LABEL_17;
        }
      }
      if ( gbEnforceUIPI )
        v23 = 5;
      else
LABEL_68:
        v23 = 1;
    }
    else
    {
      v23 = 2;
    }
    MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, (__int64)a4, 0, v23);
LABEL_17:
    v18 = _PostTransformableMessageExtended(v11, (unsigned int)v4, a3, a4, 0LL, 1);
    v9 = (__int64)MmSystemRangeStart;
    if ( v18 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v18 )
        v10 = 1;
      LODWORD(v18) = v10;
    }
    v10 = v18;
    goto LABEL_22;
  }
  if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v25 = 1400LL;
    goto LABEL_70;
  }
  v10 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
LABEL_22:
  UserSessionSwitchLeaveCrit(v9, v8, v12, v13);
  return v10;
}
