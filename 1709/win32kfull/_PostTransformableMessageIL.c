/*
 * XREFs of _PostTransformableMessageIL @ 0x1C00CC8E0
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00CD2DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1C01F192C (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  int v9; // r9d
  __int64 v10; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r15
  int v13; // r14d
  unsigned int v14; // edx
  int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r8d
  __int64 v23; // rdx

  if ( a2 - 992 <= 8 )
  {
    v21 = ValidateDDEConvPair(a3, a1);
    v9 = a5;
    if ( v21 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
    v9 = v22;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 == 717 )
    return 0LL;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                       CurrentProcessWin32Process,
                       (struct tagPROCESSINFO *)v10,
                       a1,
                       a2,
                       a3,
                       a4,
                       0) )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v13 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v13 )
  {
    v18 = 2;
    goto LABEL_18;
  }
  if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
  {
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  }
  if ( *(_QWORD *)v10 == gpepCSRSS )
  {
    v14 = 0x2000;
    v15 = 0;
  }
  else
  {
    v14 = *(_DWORD *)(v10 + 832);
    v15 = *(_DWORD *)(v10 + 836);
  }
  v16 = *((_QWORD *)v12 + 104);
  if ( !gbEnforceUIPI
    || (unsigned int)v16 > v14
    || (_DWORD)v16 == v14 && ((v17 = HIDWORD(v16), (_DWORD)v17 == v15) || (_DWORD)v17 == -1 || v15 == -1) )
  {
    v13 = 1;
    v18 = gbEnforceUIPI != 0 ? 5 : 1;
LABEL_18:
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v18);
    goto LABEL_19;
  }
  v13 = 0;
  if ( a2 == 793 )
  {
    v23 = *((_QWORD *)a1 + 2);
    if ( *(struct tagWND **)(v23 + 1352) == a1 && *(_QWORD *)(v23 + 408) == *(_QWORD *)(gptiCurrent + 408LL) )
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  }
  EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
  UserSetLastError(5LL, v20);
  MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
LABEL_19:
  if ( v13 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  return 0LL;
}
