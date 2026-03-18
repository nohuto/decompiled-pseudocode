/*
 * XREFs of xxxInterSendMsgEx @ 0x1C00A1890
 * Callers:
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 *     ClearSendMessages @ 0x1C0060394 (ClearSendMessages.c)
 *     _ReplyMessage @ 0x1C009E280 (_ReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00AAED0 (TransformMessageBetweenCoordinateSpaces.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C010DBD4 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C01165BC (ProcessSuspendedSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01C0A58 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC058 (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01F24F8 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01F2714 (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01F27D4 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01F295C (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01F4974 (IsFmtBlocked.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C023B1D8 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, unsigned int a2, ...)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rsi
  __int64 CurrentProcessWin32Process; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int16 *v12; // r14
  unsigned __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  struct tagMSGSQM_PROCESSPAIR *v18; // rcx
  struct tagMSGSQM_MSGRECORD *v19; // rax
  struct tagMSGSQM_MSGRECORD *v20; // r12
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int16 v24; // r14
  unsigned __int64 v25; // rdi
  struct tagMSGSQM_PROCESSPAIR *v26; // rcx
  struct tagMSGSQM_MSGRECORD *v27; // rax
  struct tagMSGSQM_MSGRECORD *v28; // rdi
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 CurrentProcess; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 result; // rax
  __int64 v38; // rax
  _OWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  size_t v43; // r8
  _QWORD *v44; // r12
  const void *v45; // rdx
  size_t v46; // r8
  unsigned __int16 *v47; // r12
  __int64 v48; // rbx
  size_t v49; // r8
  __int64 v50; // rbx
  _QWORD *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r14
  unsigned __int64 v57; // rcx
  int v58; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v60; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rsi
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  int v71; // ecx
  __int64 v72; // r12
  _DWORD *v73; // rdx
  __int64 v74; // rdx
  int v75; // esi
  unsigned int v76; // r13d
  __int64 v77; // r9
  __int64 v78; // r8
  int v79; // ecx
  char v80; // r14
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // eax
  int v84; // ecx
  __int64 v86; // r13
  _OWORD *v87; // rbx
  __int128 *v88; // rax
  __int128 v89; // xmm0
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int v93; // ecx
  __int16 v94; // ax
  __int64 v95; // rdx
  __int64 v96; // r15
  __int64 v97; // rbx
  int v98; // eax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rcx
  int v103; // ecx
  int v104; // ecx
  __int64 v105; // rcx
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // rcx
  BOOLEAN v110; // [rsp+44h] [rbp-184h]
  __int64 v111; // [rsp+48h] [rbp-180h]
  unsigned int Size; // [rsp+50h] [rbp-178h]
  struct tagPROCESSINFO *v113; // [rsp+58h] [rbp-170h]
  unsigned int Src; // [rsp+60h] [rbp-168h]
  _OWORD *Srca; // [rsp+60h] [rbp-168h]
  void *Srcb; // [rsp+60h] [rbp-168h]
  int v117; // [rsp+68h] [rbp-160h]
  int v118; // [rsp+70h] [rbp-158h]
  void *v119[2]; // [rsp+78h] [rbp-150h] BYREF
  _OWORD *v120; // [rsp+88h] [rbp-140h] BYREF
  unsigned int v121; // [rsp+90h] [rbp-138h]
  unsigned __int16 *v122; // [rsp+98h] [rbp-130h]
  void *v123; // [rsp+A0h] [rbp-128h]
  __int64 v124; // [rsp+A8h] [rbp-120h]
  _OWORD *v125; // [rsp+B0h] [rbp-118h]
  __int64 v126; // [rsp+B8h] [rbp-110h]
  __int64 v127; // [rsp+C0h] [rbp-108h]
  unsigned __int64 HighLimit; // [rsp+C8h] [rbp-100h] BYREF
  unsigned __int64 LowLimit; // [rsp+D0h] [rbp-F8h] BYREF
  void *v130; // [rsp+D8h] [rbp-F0h]
  _DWORD *v131; // [rsp+E0h] [rbp-E8h]
  char v132[8]; // [rsp+E8h] [rbp-E0h] BYREF
  int v133; // [rsp+F0h] [rbp-D8h]
  int v134; // [rsp+F4h] [rbp-D4h]
  unsigned __int64 v135; // [rsp+F8h] [rbp-D0h]
  char v136[8]; // [rsp+110h] [rbp-B8h] BYREF
  int v137; // [rsp+118h] [rbp-B0h]
  __int16 v138; // [rsp+11Ch] [rbp-ACh]
  __int16 v139; // [rsp+11Eh] [rbp-AAh]
  unsigned __int64 v140; // [rsp+120h] [rbp-A8h]
  __int128 v141; // [rsp+140h] [rbp-88h]
  __int128 v142; // [rsp+160h] [rbp-68h] BYREF
  _QWORD v143[11]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v145; // [rsp+1E0h] [rbp+18h] BYREF
  va_list va; // [rsp+1E0h] [rbp+18h]
  __int64 v147; // [rsp+1E8h] [rbp+20h] BYREF
  va_list va1; // [rsp+1E8h] [rbp+20h]
  __int64 v149; // [rsp+1F0h] [rbp+28h]
  __int64 v150; // [rsp+1F8h] [rbp+30h]
  __int64 v151; // [rsp+200h] [rbp+38h]
  __int64 v152; // [rsp+208h] [rbp+40h]
  __int64 v153; // [rsp+210h] [rbp+48h]
  va_list va2; // [rsp+218h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v145 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v147 = va_arg(va2, _QWORD);
  v149 = va_arg(va2, _QWORD);
  v150 = va_arg(va2, _QWORD);
  v151 = va_arg(va2, _QWORD);
  v152 = va_arg(va2, _QWORD);
  v153 = va_arg(va2, _QWORD);
  v2 = a2;
  v3 = 0LL;
  v126 = 0LL;
  v125 = 0LL;
  v122 = 0LL;
  v119[0] = 0LL;
  v119[1] = 0LL;
  v123 = 0LL;
  v118 = 0;
  v110 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v113 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  v5 = 0LL;
  if ( (_DWORD)v149 )
    v5 = gptiCurrent;
  v111 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 464) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_26;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
  if ( v6 == CurrentProcessWin32Process || (unsigned int)(v2 - 14) <= 0x3F || (unsigned int)(v2 - 12) > 0x27C )
    goto LABEL_26;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      switch ( (int)v2 )
      {
        case 12:
        case 188:
          goto LABEL_21;
        case 13:
        case 196:
        case 204:
          v6 = *(_QWORD *)(a1 + 168);
          if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(v6 + 10) || (*(_BYTE *)(a1 + 68) & 0x20) == 0 )
            goto LABEL_26;
          UserSetLastError(5LL, v6);
          break;
        case 78:
          goto LABEL_25;
        default:
          goto LABEL_26;
      }
      goto LABEL_25;
    }
LABEL_21:
    if ( (!gbEnforceUIPI || *(_QWORD *)v6 == gpepCSRSS)
      && (*(_DWORD *)(v6 + 740) != *(_DWORD *)(CurrentProcessWin32Process + 740)
       || *(_DWORD *)(v6 + 744) != *(_DWORD *)(CurrentProcessWin32Process + 744)) )
    {
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  if ( (_DWORD)v2 == 272 )
  {
LABEL_25:
    UserSetLastError(5LL, v6);
    return 0LL;
  }
  if ( (_DWORD)v2 == 353 || (_DWORD)v2 == 424 || (_DWORD)v2 == 563 || (_DWORD)v2 == 648 )
    goto LABEL_21;
LABEL_26:
  if ( (_DWORD)v152 )
  {
    v12 = (unsigned __int16 *)v147;
    v13 = v145;
    goto LABEL_136;
  }
  if ( a1 )
  {
    v9 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v9 = v150;
    if ( !v150 )
      goto LABEL_31;
  }
  v3 = *(_QWORD *)(v9 + 400);
LABEL_31:
  if ( v3 != CurrentProcessWin32Process )
  {
    if ( (_DWORD)v2 == 717 )
      return 0LL;
    v10 = *(_QWORD *)(v3 + 800);
    v11 = 0;
    if ( v10 )
    {
      v7 = (unsigned __int16)v2;
      v6 = *(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 8LL * (((unsigned __int16)v2 >> 9) & 0xF));
        if ( v8 )
        {
          v6 = (unsigned int)(1 << (v2 & 7));
          v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F;
          if ( ((unsigned __int8)v6 & *(_BYTE *)(v7 + v8)) != 0 )
            v11 = 1;
        }
      }
    }
    v12 = (unsigned __int16 *)v147;
    v13 = v145;
    if ( v11 )
    {
      MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v3, v147, 1, 3);
LABEL_86:
      if ( v11 )
        goto LABEL_122;
      if ( (_DWORD)v2 == 274 && ((v13 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v13 != 61792 )
      {
        v11 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v3,
          (__int64)v12,
          1,
          2);
        goto LABEL_122;
      }
      if ( *(_QWORD *)v3 == gpepCSRSS )
      {
        v6 = 0LL;
        v8 = 0x2000LL;
      }
      else
      {
        v8 = *(unsigned int *)(v3 + 832);
        v6 = *(unsigned int *)(v3 + 836);
      }
      v22 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      v7 = gbEnforceUIPI;
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v22 <= (unsigned int)v8 )
        {
          v11 = 0;
          if ( (_DWORD)v22 == (_DWORD)v8 )
          {
            v23 = HIDWORD(v22);
            if ( (_DWORD)v23 == (_DWORD)v6 || (_DWORD)v23 == -1 || (_DWORD)v6 == -1 )
              v11 = 1;
          }
        }
        else
        {
          v11 = 1;
        }
      }
      else
      {
        v11 = gbEnforceUIPI + 1;
      }
      if ( !v11 )
      {
LABEL_123:
        if ( a1 )
        {
          if ( (_DWORD)v2 == 793 )
          {
            v6 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(v6 + 1352) == a1 && *(_QWORD *)(v6 + 408) == *(_QWORD *)(gptiCurrent + 408LL) )
            {
              v11 = 1;
              goto LABEL_130;
            }
          }
        }
        if ( !v11 )
        {
          EtwTraceUIPIMsgError(v113, v3, (unsigned int)v2, v13, v12);
          UserSetLastError(5LL, v30);
          MSGSQMAddMessage(v113, (struct tagPROCESSINFO *)v3, (__int64)v12, 1, 0);
LABEL_130:
          if ( !v11 )
            return 0LL;
        }
LABEL_134:
        v5 = v111;
        goto LABEL_135;
      }
      v24 = 1;
      if ( gbEnforceUIPI )
        v24 = 5;
      v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      Src = v25;
      if ( !gfWinMsgSQMIsOptedIn
        || (v26 = MsgSQMGetSourceListProcessPair(v113, (struct tagPROCESSINFO *)v3, gbEnforceUIPI)) == 0LL )
      {
        v12 = (unsigned __int16 *)v147;
        v13 = v145;
        goto LABEL_122;
      }
      v137 = v2;
      v138 = 1;
      v139 = v24;
      v140 = 0LL;
      if ( (unsigned int)v2 < 0x111 )
        goto LABEL_116;
      if ( (unsigned int)v2 <= 0x112 || (_DWORD)v2 == 281 || (_DWORD)v2 == 528 )
      {
        v13 = v145;
        v140 = v145;
        v12 = (unsigned __int16 *)v147;
LABEL_118:
        v27 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v26 + 6, (const struct tagMSGSQM_MSGRECORD *)v136, v25);
        v28 = v27;
        if ( v27 && !(unsigned int)MsgSQMUpdateMsgRecord(v27, Src, v7) )
        {
          MsgSQMFlushMsgRecord(v113, (struct tagPROCESSINFO *)v3, v28);
          MsgSQMUpdateMsgRecord(v28, Src, v29);
        }
LABEL_122:
        if ( v11 )
          goto LABEL_134;
        goto LABEL_123;
      }
      if ( (_DWORD)v2 == 793 )
      {
        v12 = (unsigned __int16 *)v147;
        v140 = ((unsigned __int64)v147 >> 16) & 0xFFF;
      }
      else
      {
LABEL_116:
        v12 = (unsigned __int16 *)v147;
      }
      v13 = v145;
      goto LABEL_118;
    }
    if ( a1 )
    {
      v124 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 808LL);
      if ( !v6 )
        goto LABEL_48;
      v14 = 0;
      v7 = *(unsigned int *)v6;
      if ( (_DWORD)v7 )
      {
        do
        {
          if ( a1 == *(_QWORD *)(v6 + 16LL * v14 + 24) )
            break;
          ++v14;
        }
        while ( v14 < (unsigned int)v7 );
      }
      if ( v14 < (unsigned int)v7 )
      {
        _mm_lfence();
        v15 = *(_QWORD *)(v6 + 16 * (v14 + 1LL));
        v12 = (unsigned __int16 *)v147;
        v13 = v145;
      }
      else
      {
LABEL_48:
        v15 = 0LL;
      }
      v124 = v15;
      if ( !v15
        || (v7 = (unsigned __int16)v2, (v6 = *(_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0)
        || (v8 = *(_QWORD *)(v6 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
        || (v6 = (unsigned int)(1 << (v2 & 7)),
            v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F,
            v11 = 1,
            ((unsigned __int8)v6 & *(_BYTE *)(v7 + v8)) == 0) )
      {
        v11 = 0;
      }
      if ( !v11 )
        goto LABEL_57;
      MSGSQMAddMessage(
        (struct tagPROCESSINFO *)CurrentProcessWin32Process,
        (struct tagPROCESSINFO *)v3,
        (__int64)v12,
        1,
        4);
    }
    if ( v11 )
      goto LABEL_86;
LABEL_57:
    v11 = 0;
    if ( (unsigned int)(v2 - 52) <= 0x4A )
      goto LABEL_69;
    if ( (_DWORD)v2 )
    {
      if ( (unsigned int)v2 > 0x308 )
      {
        v6 = 0x1C0000000uLL;
        switch ( (int)v2 )
        {
          case 777:
          case 778:
          case 779:
          case 780:
          case 782:
            LOBYTE(v11) = (unsigned int)IsFmtBlocked(128LL) == 0;
            break;
          case 781:
          case 787:
          case 794:
          case 795:
          case 799:
            goto LABEL_68;
          default:
            break;
        }
LABEL_69:
        if ( !v11 )
          goto LABEL_86;
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !gfWinMsgSQMIsOptedIn
          || (v18 = MsgSQMGetSourceListProcessPair(
                      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                      (struct tagPROCESSINFO *)v3,
                      v7)) == 0LL )
        {
          v12 = (unsigned __int16 *)v147;
          v13 = v145;
          goto LABEL_86;
        }
        v133 = v2;
        v134 = 131073;
        v135 = 0LL;
        if ( (unsigned int)v2 < 0x111 )
        {
          v13 = v145;
        }
        else
        {
          if ( (unsigned int)v2 > 0x112 && (_DWORD)v2 != 281 && (_DWORD)v2 != 528 )
          {
            v12 = (unsigned __int16 *)v147;
            v13 = v145;
            if ( (_DWORD)v2 == 793 )
              v135 = ((unsigned __int64)v147 >> 16) & 0xFFF;
            goto LABEL_81;
          }
          v13 = v145;
          v135 = v145;
        }
        v12 = (unsigned __int16 *)v147;
LABEL_81:
        v19 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v18 + 6, (const struct tagMSGSQM_MSGRECORD *)v132, v17);
        v20 = v19;
        if ( v19 && !(unsigned int)MsgSQMUpdateMsgRecord(v19, v17, v7) )
        {
          MsgSQMFlushMsgRecord(v113, (struct tagPROCESSINFO *)v3, v20);
          MsgSQMUpdateMsgRecord(v20, v17, v21);
        }
        CurrentProcessWin32Process = (__int64)v113;
        goto LABEL_86;
      }
      if ( (_DWORD)v2 != 776 )
      {
        if ( (unsigned int)v2 > 0x33 || (v16 = 0x8000000006028LL, !_bittest64(&v16, v2)) )
        {
          if ( (_DWORD)v2 != 127 && (_DWORD)v2 != 773 )
            goto LABEL_69;
        }
      }
    }
LABEL_68:
    v11 = 1;
    goto LABEL_69;
  }
  v12 = (unsigned __int16 *)v147;
  v13 = v145;
LABEL_135:
  LODWORD(v3) = 0;
LABEL_136:
  if ( (_DWORD)v2 == 576 )
  {
    LOBYTE(v6) = 20;
    if ( !HMValidateHandle((__int64)v12, v6, v7, v8) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 )
  {
    LOBYTE(v6) = 21;
    if ( !HMValidateHandle((__int64)v12, v6, v7, v8) )
      return 0LL;
  }
  v31 = v150;
  if ( (*(_DWORD *)(v150 + 1184) & 0x20) != 0 )
  {
    v32 = v151;
    if ( v151 )
    {
      if ( (*(_DWORD *)(v151 + 32) & 0x40) != 0 )
        goto LABEL_149;
      if ( *(_DWORD *)v151 == 2 && *(_DWORD *)(v151 + 36) )
        return 0LL;
    }
    if ( !v5 )
    {
LABEL_150:
      if ( !v32 && !(unsigned int)ProcessSuspendedSendMessage(v31, a1, (unsigned int)v2, v13, v12)
        || *(_DWORD *)(v31 + 512) > 0x2710u )
      {
        return 0LL;
      }
      goto LABEL_153;
    }
    v33 = *(_QWORD **)(v150 + 400);
    CurrentProcess = PsGetCurrentProcess(v151, v6);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v33) )
      return 0LL;
    v32 = v151;
    v5 = v111;
LABEL_149:
    if ( v5 )
      goto LABEL_153;
    goto LABEL_150;
  }
LABEL_153:
  v35 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v36 = v35;
  v127 = v35;
  if ( !v35 )
    return 0LL;
  *(_QWORD *)(v35 + 120) = 0LL;
  Size = 0;
  Srca = v12;
  *(_DWORD *)(v35 + 128) = *(_DWORD *)(gptiCurrent + 1372LL);
  if ( v151 && *(_DWORD *)v151 == 33 )
  {
LABEL_249:
    v50 = 0LL;
    *(_QWORD *)(v36 + 112) = 0LL;
    v51 = (_QWORD *)(v36 + 16);
    *(_QWORD *)(v36 + 16) = 0LL;
    *(_QWORD *)&v141 = v36 + 112;
    *((_QWORD *)&v141 + 1) = a1;
    v142 = v141;
    HMAssignmentLock(&v142);
    *(_DWORD *)(v36 + 104) = v2;
    *(_QWORD *)(v36 + 88) = v13;
    *(_QWORD *)(v36 + 96) = v12;
    *(_DWORD *)(v36 + 84) = 0;
    *(_QWORD *)(v36 + 72) = 0LL;
    if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
    {
      v52 = 3LL * (unsigned __int16)v12;
      v55 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v12);
      v56 = v150;
      if ( v55 )
        HMChangeOwnerThread(v55, v150);
    }
    else
    {
      v56 = v150;
    }
    if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
      __fastfail(3u);
    *(_QWORD *)v36 = gsmsList;
    *(_QWORD *)(v36 + 8) = gsmsList;
    *(_QWORD *)(gsmsList + 8LL) = v36;
    gsmsList = v36;
    v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v36 + 80) = v57;
    *(_QWORD *)(v36 + 40) = v56;
    *(_QWORD *)(v36 + 32) = v111;
    v58 = 18;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v52, v53, v54) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v50 = *ThreadWin32Thread;
    }
    if ( v50 )
    {
      if ( *(_QWORD *)(v50 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(v50);
      if ( *(_DWORD *)(v50 + 340) )
      {
        v58 = *(_DWORD *)(v50 + 340);
      }
      else
      {
        v62 = PsGetCurrentProcessWin32Process(v60);
        if ( v62 )
          v58 = *(_DWORD *)(v62 + 280);
      }
    }
    *(_DWORD *)(v36 + 132) = v58;
    v63 = 0LL;
    *(_QWORD *)(v36 + 64) = 0LL;
    v64 = v151;
    if ( v151 && (*(_DWORD *)v151 & 1) != 0 )
    {
      v65 = 1024;
      if ( (*(_DWORD *)v151 & 0x100) == 0 )
        v65 = 2048;
      v66 = *(_DWORD *)(v36 + 84) | v65;
      *(_DWORD *)(v36 + 84) = v66;
      *(_QWORD *)(v36 + 48) = *(_QWORD *)(v64 + 8);
      *(_QWORD *)(v36 + 56) = *(_QWORD *)(v64 + 16);
      if ( (*(_DWORD *)v64 & 0x20) != 0 )
      {
        *(_DWORD *)(v36 + 84) = v66 | 0x200;
        *(_QWORD *)(v36 + 72) = *(_QWORD *)(v64 + 24);
      }
      else
      {
        *(_DWORD *)(v36 + 84) = v66 | 0x100;
        *(_QWORD *)(v36 + 64) = gptiCurrent;
      }
    }
    if ( (_DWORD)v153 )
      *(_DWORD *)(v36 + 84) |= 0x10000u;
    v67 = v150;
    v68 = v150 + 496;
    v69 = *(_QWORD **)(v150 + 504);
    if ( *v69 != v150 + 496 )
      __fastfail(3u);
    *v51 = v68;
    *(_QWORD *)(v36 + 24) = v69;
    *v69 = v51;
    *(_QWORD *)(v68 + 8) = v51;
    v70 = *(_DWORD *)(v67 + 512) + 1;
    *(_DWORD *)(v67 + 512) = v70;
    if ( v70 > HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = v70;
    if ( v111 )
    {
      v126 = *(_QWORD *)(v111 + 480);
      *(_QWORD *)(v111 + 480) = v36;
    }
    else
    {
      *(_DWORD *)(v36 + 84) |= 8u;
    }
    if ( (*(_DWORD *)(v36 + 84) & 0x200) == 0
      && ((unsigned int)(v2 - 577) <= 0x16 && (v71 = 8122367, _bittest(&v71, v2 - 577))
       || (_DWORD)v2 == 528 && (_WORD)v145 == 582) )
    {
      v72 = v147;
      ReferenceMsgData(v147, 6LL, v36);
    }
    else
    {
      v72 = v147;
    }
    EtwTraceBeginSendMessage(v36, v111, v64);
    v73 = (_DWORD *)v111;
    if ( !v111 )
    {
      SetWakeBit(v150, 64LL);
      EtwTraceEndSendMessage(v36, v74);
      return 1LL;
    }
    v75 = 0;
    LODWORD(v149) = 0;
    v76 = 512;
    v117 = 0;
    v77 = v150;
    if ( (*(_DWORD *)(v150 + 464) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v150 + 424) + 6LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)(v77 + 424) + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(*(_QWORD *)(v77 + 424) + 10LL) & 0x40) != 0 )
      {
        KeSetEvent(*(PRKEVENT *)(v77 + 704), 2, 0);
        v73 = (_DWORD *)v111;
      }
    }
    if ( v151 )
    {
      LODWORD(v149) = *(_DWORD *)(v151 + 36);
      v76 = ((*(_DWORD *)(v151 + 32) & 1) << 15) + 512;
    }
    if ( !v73[194] )
    {
      v110 = KeSetKernelStackSwapEnable(0);
      v73 = (_DWORD *)v111;
    }
    ++v73[194];
    v78 = v150;
    if ( *((_QWORD *)v73 + 51) == *(_QWORD *)(v150 + 408) )
    {
      v79 = v73[116];
      if ( (v79 & 0x10000) == 0 )
      {
        v73[116] = v79 | 0x10000;
        v117 = 1;
      }
    }
    if ( (*(_DWORD *)(v36 + 84) & 1) == 0 )
    {
      while ( !v75 )
      {
        v80 = 0;
        *(_WORD *)(*((_QWORD *)v73 + 53) + 4LL) &= ~0x200u;
        if ( (_DWORD)v2 == 788 )
        {
          if ( v72 )
          {
            if ( *(_DWORD *)(v78 + 608) <= 0x501u )
            {
              if ( *(_DWORD *)(v78 + 624) )
              {
                v63 = *(_QWORD *)v72;
                if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v72 + 48LL) - 13) <= 1 )
                {
                  v81 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v143[0] = *(_QWORD *)(v81 + 392);
                  *(_QWORD *)(v81 + 392) = v143;
                  v143[1] = v63;
                  _InterlockedIncrement((volatile signed __int32 *)(v63 + 8));
                  v80 = 1;
                  v72 = v147;
                }
              }
            }
          }
        }
        v75 = xxxRealSleepThread(v76, v149, 0, 0, 0LL) == 0;
        if ( v80 )
        {
          v82 = (v75 << 7) | *(_DWORD *)(v63 + 88) & 0xFFFFFF7F;
          *(_DWORD *)(v63 + 88) = v82;
          if ( v75 )
          {
            v83 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(v82 + 1)) & 0x7F;
            *(_DWORD *)(v63 + 88) = v83;
            if ( (v83 & 0x7Fu) > 0xA )
              *(_DWORD *)(v63 + 64) |= 0x10u;
          }
          ThreadUnlock1(v82, 0LL);
        }
        if ( v75 && v151 )
        {
          v84 = *(_DWORD *)(v151 + 32);
          if ( ((v84 & 0x10) != 0 || (*(_DWORD *)(v36 + 84) & 0x20) != 0) && (*(_DWORD *)(v36 + 84) & 0x10) != 0 )
          {
            LODWORD(v149) = 0;
            v75 = 0;
          }
          if ( (v84 & 8) == 0 || (unsigned int)IsThreadHung((_QWORD *)v150, 0) )
          {
            if ( v75 )
              goto LABEL_327;
          }
          else
          {
            v75 = 0;
          }
          EtwTraceConvertTimeOutToBlocking();
        }
LABEL_327:
        v63 = 0LL;
        v73 = (_DWORD *)v111;
        if ( (*(_DWORD *)(v36 + 84) & 1) != 0 )
          break;
        v78 = v150;
      }
    }
    LODWORD(v149) = v75;
    if ( v73[194]-- == 1 )
    {
      KeSetKernelStackSwapEnable(v110);
      v73 = (_DWORD *)v111;
    }
    if ( v117 )
    {
      v73[116] &= ~0x10000u;
      MergeDeferredMessagesOfThreadOnQueue(v73);
    }
    v86 = v111;
    if ( (*(_DWORD *)(v111 + 464) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v111 + 424) + 6LL) |= 0x200u;
      *(_WORD *)(*(_QWORD *)(v111 + 424) + 4LL) |= 0x200u;
      if ( (*(_WORD *)(*(_QWORD *)(v111 + 424) + 10LL) & 0x200) != 0 )
        KeSetEvent(*(PRKEVENT *)(v111 + 704), 2, 0);
    }
    if ( !v75 )
    {
      if ( !Size )
      {
        if ( (_DWORD)v2 == 831 && (_DWORD)v153 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
        goto LABEL_367;
      }
      v87 = v123;
      v120 = v123;
      if ( (unsigned int)v2 < 0x46 )
        goto LABEL_353;
      if ( (unsigned int)v2 <= 0x47 )
      {
        if ( (_DWORD)v153 )
        {
          if ( a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)&v120, 0LL, a1);
            v87 = v120;
          }
          v86 = v111;
        }
        v92 = *(_QWORD *)(v36 + 120);
        *v87 = *(_OWORD *)v92;
        v87[1] = *(_OWORD *)(v92 + 16);
        *((_QWORD *)v87 + 4) = *(_QWORD *)(v92 + 32);
        goto LABEL_367;
      }
      if ( (_DWORD)v2 == 131 )
      {
        if ( (_DWORD)v153 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v120, 0LL, a1);
          v87 = v120;
        }
        v88 = *(__int128 **)(v36 + 120);
        v89 = *v88;
        if ( v145 )
        {
          v90 = *((_QWORD *)v87 + 6);
          *v87 = v89;
          v87[1] = v88[1];
          v87[2] = v88[2];
          *((_QWORD *)v87 + 6) = v90;
          v91 = *((_QWORD *)v88 + 6);
          *(_OWORD *)v90 = *(_OWORD *)v91;
          *(_OWORD *)(v90 + 16) = *(_OWORD *)(v91 + 16);
          *(_QWORD *)(v90 + 32) = *(_QWORD *)(v91 + 32);
        }
        else
        {
          *v87 = v89;
        }
      }
      else
      {
LABEL_353:
        v73 = *(_DWORD **)(v36 + 120);
        if ( v118 )
        {
          if ( v118 == 1 )
          {
            strncpycch(v123, v73, Size);
          }
          else
          {
            v93 = Size >> 1;
            v121 = Size >> 1;
            v131 = v73;
            v130 = v123;
            while ( v93 )
            {
              v94 = *(_WORD *)v73;
              *(_WORD *)v87 = *(_WORD *)v73;
              v87 = (_OWORD *)((char *)v87 + 2);
              v130 = v87;
              v73 = (_DWORD *)((char *)v73 + 2);
              v131 = v73;
              if ( !v94 )
                break;
              v121 = --v93;
            }
          }
        }
        else
        {
          memmove(v123, v73, Size);
        }
      }
    }
LABEL_367:
    EtwTraceEndSendMessage(v36, v73);
    *(_QWORD *)(v86 + 480) = v126;
    v96 = v151;
    if ( v151 )
    {
      **(_QWORD **)(v151 + 40) = *(_QWORD *)(v36 + 72);
      if ( (*(_DWORD *)(v96 + 32) & 0x20) != 0 && (*(_DWORD *)(v36 + 84) & 0x8000) != 0 )
      {
        v97 = 0LL;
        UserSetLastError(1400LL, v95);
      }
      else
      {
        v97 = v75 == 0;
      }
    }
    else
    {
      v97 = *(_QWORD *)(v36 + 72);
    }
    if ( v96 || v75 )
    {
      v98 = *(_DWORD *)(v36 + 84);
      if ( (v98 & 1) == 0 )
      {
        v99 = v98 | 1;
        *(_DWORD *)(v36 + 84) = v99;
        if ( (v99 & 0x4000) != 0 )
        {
          *(_DWORD *)(v36 + 84) = v99 | 8;
        }
        else
        {
          v100 = v36 + 16;
          if ( *(_QWORD *)(v36 + 16) )
          {
            --*(_DWORD *)(v150 + 512);
            v101 = *(_QWORD *)v100;
            v102 = *(_QWORD **)(v36 + 24);
            if ( *(_QWORD *)(*(_QWORD *)v100 + 8LL) != v100 || *v102 != v100 )
              __fastfail(3u);
            *v102 = v101;
            *(_QWORD *)(v101 + 8) = v102;
            *(_QWORD *)v100 = 0LL;
          }
          *(_DWORD *)(v36 + 84) |= 0x10u;
        }
      }
    }
    if ( (*(_DWORD *)(v36 + 84) & 0x4010) != 0x10 )
      *(_DWORD *)(v36 + 84) |= 8u;
    if ( (*(_DWORD *)(v36 + 84) & 0x8008) != 8 )
    {
      v103 = *(_DWORD *)(v36 + 104);
      if ( v103 == 576 )
      {
        FreeTouchInputInfo(*(_QWORD *)(v36 + 96), 0LL);
      }
      else if ( v103 == 281 )
      {
        FreeGestureInfo(*(_QWORD *)(v36 + 96), 0LL);
      }
      if ( (*(_DWORD *)(v36 + 84) & 0x200) == 0 )
      {
        if ( ((v104 = *(_DWORD *)(v36 + 104), (unsigned int)(v104 - 577) <= 3)
           || (unsigned int)(v104 - 581) <= 0x12 && v104 != 589)
          && v104 != 595
          || v104 == 528 && *(_WORD *)(v36 + 88) == 582 )
        {
          UnreferenceMsgData(*(_QWORD *)(v36 + 96), 6LL, v36);
        }
      }
      v105 = *(_QWORD *)v36;
      v106 = *(_QWORD **)(v36 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v106 != v36 )
        __fastfail(3u);
      *v106 = v105;
      *(_QWORD *)(v105 + 8) = v106;
      HMAssignmentUnlock(v36 + 112);
      v109 = *(_QWORD *)(v36 + 120);
      if ( v109 )
        Win32FreePool(v109, v107, v108);
      Win32FreeToPagedLookasideList(SMSLookaside, v36);
    }
    return v97;
  }
  if ( (unsigned int)(v2 - 57) <= 0xC || (unsigned int)(v2 - 1) > 0x341 )
    goto LABEL_209;
  if ( (_DWORD)v2 == 13 )
  {
LABEL_206:
    *(_OWORD *)v119 = *(_OWORD *)v12;
    v118 = 2 - (SHIDWORD(v119[0]) < 0);
    v12 = (unsigned __int16 *)v119;
    v147 = (__int64)v119;
    if ( _mm_srli_si128(*(__m128i *)v119, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      LODWORD(v3) = HIDWORD(v119[0]) & 0x7FFFFFFF;
    goto LABEL_209;
  }
  if ( (unsigned int)v2 > 0x143 )
  {
    if ( (unsigned int)v2 <= 0x283 )
    {
      if ( (_DWORD)v2 == 643 )
      {
        if ( v13 == 24 )
          LODWORD(v3) = (*(_DWORD *)v12 << 9) + 4;
      }
      else
      {
        switch ( (int)v2 )
        {
          case 325:
          case 397:
          case 406:
            goto LABEL_180;
          case 328:
          case 393:
            goto LABEL_206;
          case 330:
          case 332:
          case 333:
          case 344:
          case 384:
          case 385:
          case 396:
          case 399:
          case 418:
            goto LABEL_179;
          case 401:
          case 402:
LABEL_196:
            LODWORD(v3) = 4 * v13;
            goto LABEL_209;
          case 536:
            if ( !v12 || (v13 & 0x8000) == 0 || v12 >= MmSystemRangeStart && v5 )
              goto LABEL_209;
            if ( *((_DWORD *)v12 + 4) >= 0xFFFFFFEC )
              goto LABEL_183;
            LODWORD(v3) = *((_DWORD *)v12 + 4) + 20;
            break;
          case 537:
            if ( v12 && (v13 & 0x8000) != 0 && (v12 < MmSystemRangeStart || !v5) )
LABEL_188:
              LODWORD(v3) = *(_DWORD *)v12;
            goto LABEL_209;
          case 544:
            v122 = v12;
            LODWORD(v3) = (*((_DWORD *)v12 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v12 + 19) & 0x7FFFFFFF);
            goto LABEL_209;
          default:
            goto LABEL_209;
        }
      }
      goto LABEL_209;
    }
    if ( (_DWORD)v2 != 780 )
    {
      switch ( (_DWORD)v2 )
      {
        case 0x32C:
          LODWORD(v3) = 328;
LABEL_210:
          v38 = Win32AllocPoolWithQuota((unsigned int)v3, 1668510549LL);
          *(_QWORD *)(v36 + 120) = v38;
          if ( !v38 )
            goto LABEL_239;
          v123 = v12;
          if ( (_DWORD)v2 == 13 )
            goto LABEL_238;
          if ( (unsigned int)v2 <= 0x83 )
          {
            if ( (_DWORD)v2 == 131 )
            {
              if ( v13 )
              {
                *(_OWORD *)v38 = *Srca;
                *(_OWORD *)(v38 + 16) = Srca[1];
                *(_OWORD *)(v38 + 32) = Srca[2];
                *(_QWORD *)(v38 + 48) = *((_QWORD *)Srca + 6);
                v40 = *(_QWORD *)(v36 + 120) + 56LL;
                *(_QWORD *)(v38 + 48) = v40;
                v41 = *((_QWORD *)Srca + 6);
                *(_OWORD *)v40 = *(_OWORD *)v41;
                *(_OWORD *)(v40 + 16) = *(_OWORD *)(v41 + 16);
                *(_QWORD *)(v40 + 32) = *(_QWORD *)(v41 + 32);
              }
              else
              {
                memmove((void *)v38, Srca, (unsigned int)v3);
              }
              v12 = *(unsigned __int16 **)(v36 + 120);
              v147 = (__int64)v12;
              goto LABEL_239;
            }
            if ( (_DWORD)v2 == 12 )
              goto LABEL_227;
            if ( (unsigned int)v2 > 0x19 )
            {
              if ( (unsigned int)v2 > 0x1B )
              {
                if ( (_DWORD)v2 == 74 )
                {
                  v12 = (unsigned __int16 *)v38;
                  v147 = v38;
                  v39 = v125;
                  *(_OWORD *)v38 = *v125;
                  *(_QWORD *)(v38 + 16) = *((_QWORD *)v39 + 2);
                  if ( *((_QWORD *)v39 + 2) )
                  {
                    *(_QWORD *)(v38 + 16) = v38 + 24;
                    memmove((void *)(v38 + 24), *((const void **)v39 + 2), *((unsigned int *)v39 + 2));
                  }
                  goto LABEL_239;
                }
                goto LABEL_229;
              }
LABEL_227:
              v12 = (unsigned __int16 *)v38;
              v147 = v38;
              v42 = HIDWORD(v119[0]) ^ (HIDWORD(v119[0]) ^ *(_DWORD *)(v38 + 4)) & 0x7FFFFFFF;
              *(_DWORD *)(v38 + 4) = v42;
              *(_DWORD *)v38 = v119[0];
              *(_QWORD *)(v38 + 8) = v38 + 16;
              *(_DWORD *)(v38 + 4) ^= (v42 ^ (v3 - 16)) & 0x7FFFFFFF;
              v43 = *(unsigned int *)(v38 + 4);
              LODWORD(v43) = v43 & 0x7FFFFFFF;
              memmove((void *)(v38 + 16), v119[1], v43);
              goto LABEL_239;
            }
LABEL_229:
            memmove((void *)v38, Srca, (unsigned int)v3);
            v12 = *(unsigned __int16 **)(v36 + 120);
            v147 = (__int64)v12;
            goto LABEL_239;
          }
          if ( (unsigned int)v2 <= 0x220 )
          {
            if ( (_DWORD)v2 != 544 )
            {
              switch ( (int)v2 )
              {
                case 194:
                case 323:
                case 325:
                case 330:
                case 332:
                case 333:
                case 344:
                case 384:
                case 385:
                case 396:
                case 397:
                case 399:
                case 406:
                case 418:
                  goto LABEL_227;
                case 196:
                  *(_WORD *)v38 = *(_WORD *)v119[1];
                  goto LABEL_238;
                case 328:
                case 393:
                  goto LABEL_238;
                case 401:
                  Size = v3;
                  goto LABEL_229;
                default:
                  goto LABEL_229;
              }
            }
            v44 = v122;
            v45 = (const void *)*((_QWORD *)v122 + 10);
            if ( v45 )
            {
              v46 = *((unsigned int *)v122 + 19);
              LODWORD(v46) = v46 & 0x7FFFFFFF;
              memmove((void *)v38, v45, v46);
              *v44 = *(_QWORD *)(v36 + 120);
            }
            v47 = v122;
            if ( *((_DWORD *)v122 + 14) )
            {
              v48 = *((unsigned int *)v122 + 19);
              LODWORD(v48) = v48 & 0x7FFFFFFF;
              Srcb = (void *)(*(_QWORD *)(v36 + 120) + v48);
              v49 = *((unsigned int *)v122 + 15);
              LODWORD(v49) = v49 & 0x7FFFFFFF;
              memmove(Srcb, *((const void **)v122 + 8), v49);
              *((_QWORD *)v47 + 1) = Srcb;
            }
            goto LABEL_239;
          }
          if ( (_DWORD)v2 == 780 )
          {
LABEL_238:
            Size = v3;
            v123 = v119[1];
            v119[1] = *(void **)(v36 + 120);
          }
          else
          {
            if ( (_DWORD)v2 != 812 )
              goto LABEL_229;
            MakeUpKeyboardCorrectionCalloutContents(v12, v13, v38);
            v13 = 0LL;
            v145 = 0LL;
            v12 = *(unsigned __int16 **)(v36 + 120);
            v147 = (__int64)v12;
          }
LABEL_239:
          if ( (_DWORD)v3 && !*(_QWORD *)(v36 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v36);
            return 0LL;
          }
          if ( (_DWORD)v153
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && ((_DWORD)v2 == 589 || (unsigned int)v2 <= 0x240 || (unsigned int)v2 >= 0x258) )
          {
            TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
            v12 = (unsigned __int16 *)v147;
          }
          goto LABEL_249;
        case 0x341:
          LODWORD(v3) = 64;
          Size = 64;
          break;
        case 0x342:
          LODWORD(v3) = 40;
          break;
      }
LABEL_209:
      if ( !(_DWORD)v3 )
        goto LABEL_239;
      goto LABEL_210;
    }
    goto LABEL_206;
  }
  if ( (_DWORD)v2 == 323 )
  {
LABEL_179:
    if ( *(_DWORD *)(gptiCurrent + 1372LL) != 1 )
    {
LABEL_180:
      *(_OWORD *)v119 = *(_OWORD *)v12;
      if ( _mm_srli_si128(*(__m128i *)v119, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      {
        LODWORD(v3) = LODWORD(v119[0]) + 18;
        if ( (unsigned int)(LODWORD(v119[0]) + 18) < LODWORD(v119[0]) )
        {
LABEL_183:
          Win32FreeToPagedLookasideList(SMSLookaside, v35);
          return 8LL;
        }
      }
    }
    goto LABEL_209;
  }
  switch ( (int)v2 )
  {
    case 1:
    case 129:
      UserSetLastError(5LL, 0x1C0000000LL);
      Win32FreeToPagedLookasideList(SMSLookaside, v36);
      return 0LL;
    case 12:
    case 26:
    case 194:
      if ( !v12 )
        goto LABEL_209;
      goto LABEL_180;
    case 27:
      goto LABEL_180;
    case 56:
      LODWORD(v3) = *v12;
      goto LABEL_209;
    case 70:
      LODWORD(v3) = 40;
      Size = 40;
      goto LABEL_209;
    case 73:
      LODWORD(v3) = v13;
      goto LABEL_209;
    case 74:
      v125 = v12;
      if ( !*((_QWORD *)v12 + 2) )
      {
        LODWORD(v3) = 24;
        goto LABEL_210;
      }
      LODWORD(v3) = *((_DWORD *)v12 + 2) + 24;
      if ( (unsigned int)v3 >= 0x18 )
        goto LABEL_209;
      Win32FreeToPagedLookasideList(SMSLookaside, v35);
      result = 0LL;
      break;
    case 83:
      goto LABEL_188;
    case 131:
      LODWORD(v3) = 96;
      if ( !v13 )
        LODWORD(v3) = 16;
      Size = v3;
      goto LABEL_209;
    case 196:
      goto LABEL_206;
    case 203:
      goto LABEL_196;
    default:
      goto LABEL_209;
  }
  return result;
}
