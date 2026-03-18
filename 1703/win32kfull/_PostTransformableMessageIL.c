/*
 * XREFs of _PostTransformableMessageIL @ 0x1C00C8F84
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00C9964 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1C01E590C (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // ebx
  int v9; // r9d
  __int64 v10; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r15
  int v13; // edi
  unsigned int v14; // edx
  int v15; // r8d
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx

  v7 = a2;
  if ( (unsigned int)(a2 - 992) <= 8 )
  {
    v20 = ValidateDDEConvPair(a3, a1);
    v9 = a5;
    if ( v20 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( v7 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
    v9 = v21;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v7 == 717 )
    return 0LL;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                       CurrentProcessWin32Process,
                       (struct tagPROCESSINFO *)v10,
                       a1,
                       v7,
                       a3,
                       a4,
                       0) )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  v13 = IsMessageAlwaysAllowedAcrossIL(v7);
  if ( v13 )
  {
    v17 = 2;
    goto LABEL_16;
  }
  if ( v7 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
  {
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  }
  if ( *(_QWORD *)v10 == gpepCSRSS )
  {
    v14 = 0x2000;
    v15 = 0;
  }
  else
  {
    v14 = *(_DWORD *)(v10 + 824);
    v15 = *(_DWORD *)(v10 + 828);
  }
  v16 = *((_QWORD *)v12 + 103);
  if ( !gbEnforceUIPI
    || (unsigned int)v16 > v14
    || (_DWORD)v16 == v14 && ((v19 = HIDWORD(v16), (_DWORD)v19 == v15) || (_DWORD)v19 == -1 || v15 == -1) )
  {
    v13 = 1;
    v17 = gbEnforceUIPI != 0 ? 5 : 1;
LABEL_16:
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v17);
    goto LABEL_17;
  }
  v13 = 0;
  if ( v7 == 793 )
  {
    v22 = *((_QWORD *)a1 + 2);
    if ( *(struct tagWND **)(v22 + 1264) == a1 && *(_QWORD *)(v22 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
      return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  }
  EtwTraceUIPIMsgError(v12, v10, v7, a3, a4);
  UserSetLastError(5LL);
  MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
LABEL_17:
  if ( v13 )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  return 0LL;
}
