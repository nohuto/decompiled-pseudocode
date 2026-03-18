/*
 * XREFs of NtUserPostMessage @ 0x1C00ABE80
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00CD2DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ForwardTouchMessage @ 0x1C01BD414 (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01F192C (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r13d
  int v11; // edi
  __int64 v12; // rsi
  BOOL v13; // ebp
  __int64 v14; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v16; // r14
  unsigned __int64 v17; // rax
  int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOL v26; // r8d
  __int64 v27; // rdx

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
    v11 = 0;
    goto LABEL_21;
  }
  v10 = 0x2000;
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = (unsigned __int16)MessageTable[v4];
    if ( (v9 & 0x2000) != 0 )
    {
      v11 = 0;
      v24 = 5LL;
LABEL_56:
      UserSetLastError(v24, v8);
      goto LABEL_21;
    }
  }
  v11 = 0;
  if ( a1 < 0x10000 || a1 == -1LL )
  {
    if ( !a1 )
    {
      v12 = 0LL;
      goto LABEL_6;
    }
    if ( a1 == 0xFFFF || a1 == -1LL )
    {
      v12 = -1LL;
      goto LABEL_6;
    }
  }
  v12 = ValidateHwnd(a1);
  if ( v12 )
  {
LABEL_6:
    if ( (_DWORD)v4 == 576 )
    {
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v11 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
        goto LABEL_21;
      }
      v24 = 1400LL;
      goto LABEL_56;
    }
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v24 = 1002LL;
      goto LABEL_56;
    }
    v13 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v13 = ValidateDDEConvPair(a3, v12) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
      v13 = v26;
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    if ( v13 )
      goto LABEL_16;
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
    v16 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v14 == CurrentProcessWin32Process )
      goto LABEL_16;
    if ( (_DWORD)v4 == 717 )
      goto LABEL_21;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v14,
                         (struct tagWND *)v12,
                         v4,
                         a3,
                         (__int64)a4,
                         0) )
      goto LABEL_16;
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
    {
      v22 = 2;
    }
    else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v14 == gpepCSRSS )
      {
        v19 = 0;
      }
      else
      {
        v10 = *(_DWORD *)(v14 + 832);
        v19 = *(_DWORD *)(v14 + 836);
      }
      v20 = *((_QWORD *)v16 + 104);
      if ( !gbEnforceUIPI )
        goto LABEL_71;
      if ( (unsigned int)v20 <= v10 )
      {
        if ( (_DWORD)v20 != v10 || (v21 = HIDWORD(v20), (_DWORD)v21 != v19) && (_DWORD)v21 != -1 && v19 != -1 )
        {
          if ( (_DWORD)v4 != 793
            || (v27 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v27 + 1352) != v12)
            || *(_QWORD *)(v27 + 408) != *(_QWORD *)(gptiCurrent + 408LL) )
          {
            EtwTraceUIPIMsgError(v16, v14, (unsigned int)v4, a3, a4);
            UserSetLastError(5LL, v23);
            MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v14, (__int64)a4, 0, 0);
            goto LABEL_21;
          }
          goto LABEL_16;
        }
      }
      if ( gbEnforceUIPI )
        v22 = 5;
      else
LABEL_71:
        v22 = 1;
    }
    else
    {
      v22 = 2;
    }
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v14, (__int64)a4, 0, v22);
LABEL_16:
    v17 = _PostTransformableMessageExtended(v12, (unsigned int)v4, a3, (struct _LARGE_STRING *)a4, 0LL, 1);
    v9 = (unsigned __int64)MmSystemRangeStart;
    if ( v17 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v17 )
        v11 = 1;
      LODWORD(v17) = v11;
    }
    v11 = v17;
    goto LABEL_21;
  }
  if ( (_DWORD)v4 == 993 )
    v11 = 1;
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
