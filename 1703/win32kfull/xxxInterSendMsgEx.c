/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0058A60
 * Callers:
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     ClearSendMessages @ 0x1C005D298 (ClearSendMessages.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1C00F5F20 (_ReplyMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005505C (TransformMessageBetweenCoordinateSpaces.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C0107414 (ProcessSuspendedSendMessage.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01BCAF4 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C740C (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01E64AC (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01E66C8 (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01E6788 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01E6920 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01E8954 (IsFmtBlocked.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C02393B8 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, __int64 a2, ...)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rsi
  __int64 CurrentProcessWin32Process; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  BOOL v12; // ebx
  unsigned __int16 *v13; // r14
  __int64 v14; // r13
  _DWORD *v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  struct tagMSGSQM_PROCESSPAIR *v22; // rcx
  struct tagMSGSQM_MSGRECORD *v23; // rax
  unsigned int v24; // r8d
  struct tagMSGSQM_MSGRECORD *v25; // r12
  unsigned int v26; // r8d
  int v27; // edx
  unsigned int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int16 v31; // r14
  unsigned __int64 v32; // rdi
  struct tagMSGSQM_PROCESSPAIR *v33; // rcx
  struct tagMSGSQM_MSGRECORD *v34; // rax
  unsigned int v35; // r8d
  struct tagMSGSQM_MSGRECORD *v36; // rdi
  unsigned int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  __int64 CurrentProcess; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  int v45; // esi
  __int64 result; // rax
  __int64 v47; // rax
  _OWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // edx
  size_t v52; // r8
  const void *v53; // rdx
  size_t v54; // r8
  __int64 v55; // rbx
  void *v56; // rbx
  size_t v57; // r8
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // r14
  int v63; // ecx
  int v64; // ecx
  unsigned int v65; // r13d
  _QWORD *v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // r12
  __int64 v69; // r9
  __int64 v70; // rdx
  _DWORD *v71; // rbx
  int v72; // esi
  unsigned __int64 v73; // rdx
  __int64 v74; // r10
  char v75; // r14
  __int64 v76; // rcx
  int v77; // eax
  int v78; // ecx
  _OWORD *v80; // rbx
  __int128 *v81; // rax
  __int128 v82; // xmm0
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int16 v87; // ax
  __int64 v88; // r15
  __int64 v89; // rbx
  int v90; // eax
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  int v95; // ecx
  int v96; // ecx
  __int64 v97; // rcx
  _QWORD *v98; // rax
  __int64 v99; // rcx
  BOOLEAN v100; // [rsp+44h] [rbp-174h]
  struct tagPROCESSINFO *Src; // [rsp+48h] [rbp-170h]
  _OWORD *Srca; // [rsp+48h] [rbp-170h]
  unsigned int Size; // [rsp+50h] [rbp-168h]
  unsigned int v104[2]; // [rsp+58h] [rbp-160h]
  unsigned int v105; // [rsp+58h] [rbp-160h]
  unsigned int v106[2]; // [rsp+60h] [rbp-158h] BYREF
  int v107; // [rsp+68h] [rbp-150h]
  void *v108[2]; // [rsp+70h] [rbp-148h] BYREF
  int v109; // [rsp+80h] [rbp-138h]
  void *v110; // [rsp+88h] [rbp-130h]
  _OWORD *v111; // [rsp+90h] [rbp-128h]
  __int64 v112; // [rsp+98h] [rbp-120h]
  __int64 v113; // [rsp+A0h] [rbp-118h]
  unsigned __int64 HighLimit; // [rsp+A8h] [rbp-110h] BYREF
  unsigned __int64 LowLimit; // [rsp+B0h] [rbp-108h] BYREF
  void *v116; // [rsp+B8h] [rbp-100h]
  _WORD *v117; // [rsp+C0h] [rbp-F8h]
  char v118[8]; // [rsp+C8h] [rbp-F0h] BYREF
  int v119; // [rsp+D0h] [rbp-E8h]
  int v120; // [rsp+D4h] [rbp-E4h]
  unsigned __int64 v121; // [rsp+D8h] [rbp-E0h]
  char v122[8]; // [rsp+F0h] [rbp-C8h] BYREF
  int v123; // [rsp+F8h] [rbp-C0h]
  __int16 v124; // [rsp+FCh] [rbp-BCh]
  __int16 v125; // [rsp+FEh] [rbp-BAh]
  unsigned __int64 v126; // [rsp+100h] [rbp-B8h]
  __int128 v127; // [rsp+120h] [rbp-98h]
  __int128 v128; // [rsp+150h] [rbp-68h] BYREF
  _QWORD v129[11]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v131; // [rsp+1D0h] [rbp+18h] BYREF
  va_list va; // [rsp+1D0h] [rbp+18h]
  __int64 v133; // [rsp+1D8h] [rbp+20h] BYREF
  va_list va1; // [rsp+1D8h] [rbp+20h]
  __int64 v135; // [rsp+1E0h] [rbp+28h]
  __int64 v136; // [rsp+1E8h] [rbp+30h]
  __int64 v137; // [rsp+1F0h] [rbp+38h]
  __int64 v138; // [rsp+1F8h] [rbp+40h]
  __int64 v139; // [rsp+200h] [rbp+48h]
  __int64 v140; // [rsp+208h] [rbp+50h]
  va_list va2; // [rsp+210h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v131 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v133 = va_arg(va2, _QWORD);
  v135 = va_arg(va2, _QWORD);
  v136 = va_arg(va2, _QWORD);
  v137 = va_arg(va2, _QWORD);
  v138 = va_arg(va2, _QWORD);
  v139 = va_arg(va2, _QWORD);
  v140 = va_arg(va2, _QWORD);
  v2 = (unsigned int)a2;
  v3 = 0LL;
  v112 = 0LL;
  v111 = 0LL;
  *(_QWORD *)v104 = 0LL;
  v108[0] = 0LL;
  v108[1] = 0LL;
  v110 = 0LL;
  v107 = 0;
  v100 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  Src = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  _InterlockedIncrement(&glInterSendMessage);
  v5 = v135;
  if ( v135 && (*(_DWORD *)(v135 + 440) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_24;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v7 == CurrentProcessWin32Process || (unsigned int)(v2 - 14) <= 0x3F || (unsigned int)(v2 - 12) > 0x27C )
    goto LABEL_24;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      v6 = 0x1C0000000uLL;
      switch ( (int)v2 )
      {
        case 12:
        case 188:
          goto LABEL_19;
        case 13:
        case 196:
        case 204:
          if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(*(_QWORD *)(a1 + 168) + 10LL) || (*(_BYTE *)(a1 + 68) & 0x20) == 0 )
            goto LABEL_24;
          UserSetLastError(5LL);
          break;
        case 78:
          goto LABEL_23;
        default:
          goto LABEL_24;
      }
      goto LABEL_23;
    }
LABEL_19:
    if ( (!gbEnforceUIPI || *(_QWORD *)v7 == gpepCSRSS)
      && (*(_DWORD *)(v7 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
       || *(_DWORD *)(v7 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736)) )
    {
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)v2 == 272 )
  {
LABEL_23:
    UserSetLastError(5LL);
    return 0LL;
  }
  if ( (_DWORD)v2 == 353 || (_DWORD)v2 == 424 || (_DWORD)v2 == 563 || (_DWORD)v2 == 648 )
    goto LABEL_19;
LABEL_24:
  if ( (_DWORD)v139 )
  {
    v13 = (unsigned __int16 *)v133;
    v14 = v131;
    goto LABEL_136;
  }
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v8 = v137;
    if ( !v137 )
      goto LABEL_29;
  }
  v3 = *(_QWORD *)(v8 + 376);
LABEL_29:
  if ( v5 )
  {
    CurrentProcessWin32Process = *(_QWORD *)(v5 + 376);
    Src = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  }
  if ( v3 != CurrentProcessWin32Process )
  {
    if ( (_DWORD)v2 == 717 )
      return 0LL;
    v9 = *(_QWORD *)(v3 + 792);
    v12 = 0;
    if ( v9 )
    {
      LODWORD(v6) = (unsigned __int16)v2;
      v10 = *(_QWORD *)(v9 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8LL * (((unsigned __int16)v2 >> 9) & 0xF));
        if ( v11 )
        {
          v6 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F;
          if ( ((unsigned __int8)(1 << (v2 & 7)) & *(_BYTE *)(v6 + v11)) != 0 )
            v12 = 1;
        }
      }
    }
    v13 = (unsigned __int16 *)v133;
    v14 = v131;
    if ( v12 )
    {
      MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v3, v133, 1, 3);
LABEL_86:
      if ( v12 )
        goto LABEL_122;
      if ( (_DWORD)v2 == 274 && ((v14 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v14 != 61792 )
      {
        v12 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v3,
          (__int64)v13,
          1,
          2);
        goto LABEL_122;
      }
      if ( *(_QWORD *)v3 == gpepCSRSS )
      {
        v27 = 0;
        v28 = 0x2000;
      }
      else
      {
        v28 = *(_DWORD *)(v3 + 824);
        v27 = *(_DWORD *)(v3 + 828);
      }
      v29 = *(_QWORD *)(CurrentProcessWin32Process + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v29 <= v28 )
        {
          v12 = 0;
          if ( (_DWORD)v29 == v28 )
          {
            v30 = HIDWORD(v29);
            if ( (_DWORD)v30 == v27 || (_DWORD)v30 == -1 || v27 == -1 )
              v12 = 1;
          }
        }
        else
        {
          v12 = 1;
        }
      }
      else
      {
        v12 = 1;
      }
      if ( !v12 )
      {
LABEL_123:
        if ( a1 )
        {
          if ( (_DWORD)v2 == 793 )
          {
            v38 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(v38 + 1264) == a1 && *(_QWORD *)(v38 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
            {
              v12 = 1;
              goto LABEL_130;
            }
          }
        }
        if ( !v12 )
        {
          EtwTraceUIPIMsgError(Src, v3, (unsigned int)v2, v14, v13);
          UserSetLastError(5LL);
          MSGSQMAddMessage(Src, (struct tagPROCESSINFO *)v3, (__int64)v13, 1, 0);
LABEL_130:
          if ( !v12 )
            return 0LL;
        }
LABEL_134:
        v5 = v135;
        goto LABEL_135;
      }
      v31 = 1;
      if ( gbEnforceUIPI )
        v31 = 5;
      v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)v106 = v32;
      if ( !gfWinMsgSQMIsOptedIn
        || (v33 = MsgSQMGetSourceListProcessPair(Src, (struct tagPROCESSINFO *)v3, gbEnforceUIPI)) == 0LL )
      {
        v13 = (unsigned __int16 *)v133;
        v14 = v131;
        goto LABEL_122;
      }
      v123 = v2;
      v124 = 1;
      v125 = v31;
      v126 = 0LL;
      if ( (unsigned int)v2 < 0x111 )
        goto LABEL_116;
      if ( (unsigned int)v2 <= 0x112 || (_DWORD)v2 == 281 || (_DWORD)v2 == 528 )
      {
        v14 = v131;
        v126 = v131;
        v13 = (unsigned __int16 *)v133;
LABEL_118:
        v34 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v33 + 6, (const struct tagMSGSQM_MSGRECORD *)v122, v32);
        v36 = v34;
        if ( v34 && !(unsigned int)MsgSQMUpdateMsgRecord(v34, v106[0], v35) )
        {
          MsgSQMFlushMsgRecord(Src, (struct tagPROCESSINFO *)v3, v36);
          MsgSQMUpdateMsgRecord(v36, v106[0], v37);
        }
LABEL_122:
        if ( v12 )
          goto LABEL_134;
        goto LABEL_123;
      }
      if ( (_DWORD)v2 == 793 )
      {
        v13 = (unsigned __int16 *)v133;
        v126 = ((unsigned __int64)v133 >> 16) & 0xFFF;
      }
      else
      {
LABEL_116:
        v13 = (unsigned __int16 *)v133;
      }
      v14 = v131;
      goto LABEL_118;
    }
    if ( a1 )
    {
      v15 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 800LL);
      if ( !v15 )
        goto LABEL_48;
      v16 = 0;
      LODWORD(v6) = *v15;
      if ( *v15 )
      {
        do
        {
          if ( a1 == *(_QWORD *)&v15[4 * v16 + 6] )
            break;
          ++v16;
        }
        while ( v16 < (unsigned int)v6 );
      }
      if ( v16 < (unsigned int)v6 )
      {
        _mm_lfence();
        v17 = *(_QWORD *)&v15[4 * v16 + 4];
        v13 = (unsigned __int16 *)v133;
        v14 = v131;
      }
      else
      {
LABEL_48:
        v17 = 0LL;
      }
      if ( !v17
        || (LODWORD(v6) = (unsigned __int16)v2,
            (v18 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0)
        || (v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
        || (v6 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F,
            v12 = 1,
            ((unsigned __int8)(1 << (v2 & 7)) & *(_BYTE *)(v6 + v19)) == 0) )
      {
        v12 = 0;
      }
      if ( !v12 )
        goto LABEL_57;
      MSGSQMAddMessage(
        (struct tagPROCESSINFO *)CurrentProcessWin32Process,
        (struct tagPROCESSINFO *)v3,
        (__int64)v13,
        1,
        4);
    }
    if ( v12 )
      goto LABEL_86;
LABEL_57:
    v12 = 0;
    if ( (unsigned int)(v2 - 52) <= 0x4A )
      goto LABEL_69;
    if ( (_DWORD)v2 )
    {
      if ( (unsigned int)v2 > 0x308 )
      {
        switch ( (int)v2 )
        {
          case 777:
          case 778:
          case 779:
          case 780:
          case 782:
            LOBYTE(v12) = (unsigned int)IsFmtBlocked(128LL) == 0;
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
        if ( !v12 )
          goto LABEL_86;
        v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !gfWinMsgSQMIsOptedIn
          || (v22 = MsgSQMGetSourceListProcessPair(
                      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                      (struct tagPROCESSINFO *)v3,
                      v6)) == 0LL )
        {
          v13 = (unsigned __int16 *)v133;
          v14 = v131;
          goto LABEL_86;
        }
        v119 = v2;
        v120 = 131073;
        v121 = 0LL;
        if ( (unsigned int)v2 < 0x111 )
        {
          v14 = v131;
        }
        else
        {
          if ( (unsigned int)v2 > 0x112 && (_DWORD)v2 != 281 && (_DWORD)v2 != 528 )
          {
            v13 = (unsigned __int16 *)v133;
            v14 = v131;
            if ( (_DWORD)v2 == 793 )
              v121 = ((unsigned __int64)v133 >> 16) & 0xFFF;
            goto LABEL_81;
          }
          v14 = v131;
          v121 = v131;
        }
        v13 = (unsigned __int16 *)v133;
LABEL_81:
        v23 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v22 + 6, (const struct tagMSGSQM_MSGRECORD *)v118, v21);
        v25 = v23;
        if ( v23 && !(unsigned int)MsgSQMUpdateMsgRecord(v23, v21, v24) )
        {
          MsgSQMFlushMsgRecord(Src, (struct tagPROCESSINFO *)v3, v25);
          MsgSQMUpdateMsgRecord(v25, v21, v26);
        }
        CurrentProcessWin32Process = (__int64)Src;
        goto LABEL_86;
      }
      if ( (_DWORD)v2 != 776 )
      {
        if ( (unsigned int)v2 > 0x33 || (v20 = 0x8000000006028LL, !_bittest64(&v20, v2)) )
        {
          if ( (_DWORD)v2 != 127 && (_DWORD)v2 != 773 )
            goto LABEL_69;
        }
      }
    }
LABEL_68:
    v12 = 1;
    goto LABEL_69;
  }
  v13 = (unsigned __int16 *)v133;
  v14 = v131;
LABEL_135:
  LODWORD(v3) = 0;
LABEL_136:
  if ( (_DWORD)v2 == 576 )
  {
    if ( !HMValidateHandle((__int64)v13, 20) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 && !HMValidateHandle((__int64)v13, 21) )
  {
    return 0LL;
  }
  v39 = v137;
  if ( (*(_DWORD *)(v137 + 1096) & 0x20) != 0 )
  {
    v40 = v138;
    if ( v138 )
    {
      if ( (*(_DWORD *)(v138 + 32) & 0x40) != 0 )
        goto LABEL_149;
      if ( *(_DWORD *)v138 == 2 && *(_DWORD *)(v138 + 36) )
        return 0LL;
    }
    if ( !v5 )
    {
LABEL_150:
      if ( !v40 && !(unsigned int)ProcessSuspendedSendMessage(v39, a1, (unsigned int)v2, v14, v13)
        || *(_DWORD *)(v39 + 488) > 0x2710u )
      {
        return 0LL;
      }
      goto LABEL_153;
    }
    v41 = *(_QWORD **)(v137 + 376);
    CurrentProcess = PsGetCurrentProcess(v138);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v41) )
      return 0LL;
    v40 = v138;
    v5 = v135;
LABEL_149:
    if ( v5 )
      goto LABEL_153;
    goto LABEL_150;
  }
LABEL_153:
  v43 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v44 = v43;
  v113 = v43;
  if ( !v43 )
    return 0LL;
  *(_QWORD *)(v43 + 120) = 0LL;
  Size = 0;
  Srca = v13;
  *(_DWORD *)(v43 + 128) = *(_DWORD *)(gptiCurrent + 1284LL);
  if ( v138 && *(_DWORD *)v138 == 33 )
  {
    v45 = v140;
LABEL_251:
    *(_QWORD *)(v44 + 112) = 0LL;
    v58 = (_QWORD *)(v44 + 16);
    *(_QWORD *)(v44 + 16) = 0LL;
    *(_QWORD *)&v127 = v44 + 112;
    *((_QWORD *)&v127 + 1) = a1;
    v128 = v127;
    HMAssignmentLock(&v128);
    *(_DWORD *)(v44 + 104) = v2;
    *(_QWORD *)(v44 + 88) = v14;
    *(_QWORD *)(v44 + 96) = v13;
    *(_DWORD *)(v44 + 84) = 0;
    *(_QWORD *)(v44 + 72) = 0LL;
    if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
    {
      v59 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v13);
      if ( v59 )
        HMChangeOwnerThread(v59, v137);
    }
    if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
      __fastfail(3u);
    *(_QWORD *)v44 = gsmsList;
    *(_QWORD *)(v44 + 8) = gsmsList;
    *(_QWORD *)(gsmsList + 8LL) = v44;
    gsmsList = v44;
    *(_DWORD *)(v44 + 80) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v60 = v137;
    *(_QWORD *)(v44 + 40) = v137;
    v61 = v135;
    *(_QWORD *)(v44 + 32) = v135;
    *(_DWORD *)(v44 + 132) = v136;
    *(_QWORD *)(v44 + 64) = 0LL;
    v62 = v138;
    if ( v138 && (*(_DWORD *)v138 & 1) != 0 )
    {
      v63 = 1024;
      if ( (*(_DWORD *)v138 & 0x100) == 0 )
        v63 = 2048;
      v64 = *(_DWORD *)(v44 + 84) | v63;
      *(_DWORD *)(v44 + 84) = v64;
      *(_QWORD *)(v44 + 48) = *(_QWORD *)(v62 + 8);
      *(_QWORD *)(v44 + 56) = *(_QWORD *)(v62 + 16);
      v65 = 512;
      if ( (*(_DWORD *)v62 & 0x20) != 0 )
      {
        *(_DWORD *)(v44 + 84) = v64 | 0x200;
        *(_QWORD *)(v44 + 72) = *(_QWORD *)(v62 + 24);
      }
      else
      {
        *(_DWORD *)(v44 + 84) = v64 | 0x100;
        *(_QWORD *)(v44 + 64) = gptiCurrent;
      }
    }
    else
    {
      v65 = 512;
    }
    if ( v45 )
      *(_DWORD *)(v44 + 84) |= 0x10000u;
    v66 = *(_QWORD **)(v60 + 480);
    if ( *v66 != v60 + 472 )
      __fastfail(3u);
    *v58 = v60 + 472;
    *(_QWORD *)(v44 + 24) = v66;
    *v66 = v58;
    *(_QWORD *)(v60 + 480) = v58;
    v67 = *(_DWORD *)(v60 + 488) + 1;
    *(_DWORD *)(v60 + 488) = v67;
    if ( v67 > gcSmsHighWaterMark )
      gcSmsHighWaterMark = v67;
    if ( v61 )
    {
      v112 = *(_QWORD *)(v61 + 456);
      *(_QWORD *)(v61 + 456) = v44;
    }
    else
    {
      *(_DWORD *)(v44 + 84) |= 8u;
    }
    if ( (*(_DWORD *)(v44 + 84) & 0x200) != 0
      || ((unsigned int)(v2 - 577) > 3 && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) || (_DWORD)v2 == 595)
      && ((_DWORD)v2 != 528 || (_WORD)v131 != 582) )
    {
      v68 = v133;
    }
    else
    {
      v68 = v133;
      ReferenceMsgData(v133, 6LL, v44);
      v61 = v135;
    }
    EtwTraceBeginSendMessage(v44, v61, v62);
    v69 = v135;
    if ( !v135 )
    {
      SetWakeBit(v137, 0x40u);
      EtwTraceEndSendMessage(v44, v70);
      return 1LL;
    }
    v71 = 0LL;
    v72 = 0;
    v73 = 0LL;
    v105 = 0;
    v74 = v137;
    if ( (*(_DWORD *)(v137 + 440) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v137 + 400) + 6LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)(v74 + 400) + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(*(_QWORD *)(v74 + 400) + 10LL) & 0x40) != 0 )
      {
        KeSetEvent(*(PRKEVENT *)(v74 + 648), 2, 0);
        v73 = 0LL;
        v69 = v135;
      }
    }
    if ( v62 )
    {
      v73 = *(unsigned int *)(v62 + 36);
      v105 = *(_DWORD *)(v62 + 36);
      v65 = ((*(_DWORD *)(v62 + 32) & 1) << 15) + 512;
    }
    if ( !*(_DWORD *)(v69 + 720) )
    {
      v100 = KeSetKernelStackSwapEnable(0);
      v73 = v105;
      v69 = v135;
    }
    ++*(_DWORD *)(v69 + 720);
    for ( ; (*(_DWORD *)(v44 + 84) & 1) == 0; v69 = v135 )
    {
      if ( v72 )
        break;
      v75 = 0;
      *(_WORD *)(*(_QWORD *)(v69 + 400) + 4LL) &= ~0x200u;
      if ( (_DWORD)v2 == 788 )
      {
        if ( v68 )
        {
          if ( *(_DWORD *)(v137 + 552) <= 0x501u )
          {
            if ( *(_DWORD *)(v137 + 568) )
            {
              v71 = *(_DWORD **)v68;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v68 + 48LL) - 13) <= 1 )
              {
                v129[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v129;
                v129[1] = v71;
                ++v71[2];
                v75 = 1;
              }
            }
          }
        }
      }
      v72 = xxxRealSleepThread(v65, v73, 0, 0, 0LL) == 0;
      if ( v75 )
      {
        v76 = (v72 << 7) | v71[22] & 0xFFFFFF7F;
        v71[22] = v76;
        if ( v72 )
        {
          v77 = v76 ^ ((unsigned __int8)v76 ^ (unsigned __int8)(v76 + 1)) & 0x7F;
          v71[22] = v77;
          if ( (v77 & 0x7Fu) > 0xA )
            v71[16] |= 0x10u;
        }
        ThreadUnlock1(v76, 0LL);
      }
      if ( v72 && v138 )
      {
        v78 = *(_DWORD *)(v138 + 32);
        if ( ((v78 & 0x10) != 0 || (*(_DWORD *)(v44 + 84) & 0x20) != 0) && (*(_DWORD *)(v44 + 84) & 0x10) != 0 )
        {
          v105 = 0;
          v72 = 0;
        }
        if ( (v78 & 8) != 0 && !(unsigned int)IsThreadHung(v137, 0LL) )
        {
          v72 = 0;
LABEL_315:
          EtwTraceConvertTimeOutToBlocking();
          goto LABEL_316;
        }
        if ( !v72 )
          goto LABEL_315;
      }
LABEL_316:
      v73 = v105;
      v71 = 0LL;
    }
    if ( (*(_DWORD *)(v69 + 720))-- == 1 )
    {
      KeSetKernelStackSwapEnable(v100);
      v69 = v135;
    }
    if ( (*(_DWORD *)(v69 + 440) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v69 + 400) + 6LL) |= 0x200u;
      *(_WORD *)(*(_QWORD *)(v69 + 400) + 4LL) |= 0x200u;
      if ( (*(_WORD *)(*(_QWORD *)(v69 + 400) + 10LL) & 0x200) != 0 )
        KeSetEvent(*(PRKEVENT *)(v69 + 648), 2, 0);
    }
    if ( v72 )
      goto LABEL_353;
    if ( !Size )
    {
      if ( (_DWORD)v2 == 831 && (_DWORD)v140 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        TransformMessageBetweenCoordinateSpaces(831LL, 1, (__int64 *)va, (__int16 *)va1, 0LL, a1);
      goto LABEL_353;
    }
    v80 = v110;
    *(_QWORD *)v106 = v110;
    if ( (unsigned int)v2 < 0x46 )
      goto LABEL_339;
    if ( (unsigned int)v2 <= 0x47 )
    {
      if ( (_DWORD)v140 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      {
        TransformMessageBetweenCoordinateSpaces((unsigned int)v2, 1, (__int64 *)va, (__int16 *)v106, 0LL, a1);
        v80 = *(_OWORD **)v106;
      }
      v85 = *(_QWORD *)(v44 + 120);
      *v80 = *(_OWORD *)v85;
      v80[1] = *(_OWORD *)(v85 + 16);
      *((_QWORD *)v80 + 4) = *(_QWORD *)(v85 + 32);
      goto LABEL_353;
    }
    if ( (_DWORD)v2 == 131 )
    {
      if ( (_DWORD)v140 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      {
        TransformMessageBetweenCoordinateSpaces(131LL, 1, (__int64 *)va, (__int16 *)v106, 0LL, a1);
        v80 = *(_OWORD **)v106;
      }
      v81 = *(__int128 **)(v44 + 120);
      v82 = *v81;
      if ( v131 )
      {
        v83 = *((_QWORD *)v80 + 6);
        *v80 = v82;
        v80[1] = v81[1];
        v80[2] = v81[2];
        *((_QWORD *)v80 + 6) = v83;
        v84 = *((_QWORD *)v81 + 6);
        *(_OWORD *)v83 = *(_OWORD *)v84;
        *(_OWORD *)(v83 + 16) = *(_OWORD *)(v84 + 16);
        *(_QWORD *)(v83 + 32) = *(_QWORD *)(v84 + 32);
      }
      else
      {
        *v80 = v82;
      }
    }
    else
    {
LABEL_339:
      v73 = *(_QWORD *)(v44 + 120);
      if ( v107 )
      {
        if ( v107 == 1 )
        {
          strncpycch(v110, v73, Size);
        }
        else
        {
          v86 = (unsigned __int64)Size >> 1;
          v109 = Size >> 1;
          v117 = (_WORD *)v73;
          v116 = v110;
          while ( (_DWORD)v86 )
          {
            v87 = *(_WORD *)v73;
            *(_WORD *)v80 = *(_WORD *)v73;
            v80 = (_OWORD *)((char *)v80 + 2);
            v116 = v80;
            v73 += 2LL;
            v117 = (_WORD *)v73;
            if ( !v87 )
              break;
            LODWORD(v86) = v86 - 1;
            v109 = v86;
          }
        }
      }
      else
      {
        memmove(v110, (const void *)v73, Size);
      }
    }
LABEL_353:
    EtwTraceEndSendMessage(v44, v73);
    *(_QWORD *)(v135 + 456) = v112;
    v88 = v138;
    if ( v138 )
    {
      **(_QWORD **)(v138 + 40) = *(_QWORD *)(v44 + 72);
      if ( (*(_DWORD *)(v88 + 32) & 0x20) != 0 && (*(_DWORD *)(v44 + 84) & 0x8000) != 0 )
      {
        v89 = 0LL;
        UserSetLastError(1400LL);
      }
      else
      {
        v89 = v72 == 0;
      }
    }
    else
    {
      v89 = *(_QWORD *)(v44 + 72);
    }
    if ( v88 || v72 )
    {
      v90 = *(_DWORD *)(v44 + 84);
      if ( (v90 & 1) == 0 )
      {
        v91 = v90 | 1;
        *(_DWORD *)(v44 + 84) = v91;
        if ( (v91 & 0x4000) != 0 )
        {
          *(_DWORD *)(v44 + 84) = v91 | 8;
        }
        else
        {
          v92 = v44 + 16;
          if ( *(_QWORD *)(v44 + 16) )
          {
            --*(_DWORD *)(v137 + 488);
            v93 = *(_QWORD *)v92;
            v94 = *(_QWORD **)(v44 + 24);
            if ( *(_QWORD *)(*(_QWORD *)v92 + 8LL) != v92 || *v94 != v92 )
              __fastfail(3u);
            *v94 = v93;
            *(_QWORD *)(v93 + 8) = v94;
            *(_QWORD *)v92 = 0LL;
          }
          *(_DWORD *)(v44 + 84) |= 0x10u;
        }
      }
    }
    if ( (*(_DWORD *)(v44 + 84) & 0x4010) != 0x10 )
      *(_DWORD *)(v44 + 84) |= 8u;
    if ( (*(_DWORD *)(v44 + 84) & 0x8008) != 8 )
    {
      v95 = *(_DWORD *)(v44 + 104);
      if ( v95 == 576 )
      {
        FreeTouchInputInfo(*(_QWORD *)(v44 + 96), 0LL);
      }
      else if ( v95 == 281 )
      {
        FreeGestureInfo(*(_QWORD *)(v44 + 96), 0LL);
      }
      if ( (*(_DWORD *)(v44 + 84) & 0x200) == 0 )
      {
        if ( ((v96 = *(_DWORD *)(v44 + 104), (unsigned int)(v96 - 577) <= 3)
           || (unsigned int)(v96 - 581) <= 0x12 && v96 != 589)
          && v96 != 595
          || v96 == 528 && *(_WORD *)(v44 + 88) == 582 )
        {
          UnreferenceMsgData(*(_QWORD *)(v44 + 96), 6LL, v44);
        }
      }
      v97 = *(_QWORD *)v44;
      v98 = *(_QWORD **)(v44 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v44 + 8LL) != v44 || *v98 != v44 )
        __fastfail(3u);
      *v98 = v97;
      *(_QWORD *)(v97 + 8) = v98;
      HMAssignmentUnlock(v44 + 112);
      v99 = *(_QWORD *)(v44 + 120);
      if ( v99 )
        Win32FreePool(v99);
      Win32FreeToPagedLookasideList(SMSLookaside, v44);
    }
    return v89;
  }
  if ( (unsigned int)(v2 - 1) > 0x37 && (unsigned int)v2 < 0x46 )
    goto LABEL_211;
  if ( (_DWORD)v2 == 13 )
  {
LABEL_208:
    *(_OWORD *)v108 = *(_OWORD *)v13;
    v107 = 2 - (SHIDWORD(v108[0]) < 0);
    v13 = (unsigned __int16 *)v108;
    v133 = (__int64)v108;
    if ( _mm_srli_si128(*(__m128i *)v108, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      LODWORD(v3) = HIDWORD(v108[0]) & 0x7FFFFFFF;
    goto LABEL_211;
  }
  if ( (unsigned int)v2 > 0x342 )
    goto LABEL_211;
  if ( (unsigned int)v2 > 0x143 )
  {
    if ( (unsigned int)v2 <= 0x283 )
    {
      if ( (_DWORD)v2 == 643 )
      {
        if ( v14 == 24 )
          LODWORD(v3) = (*(_DWORD *)v13 << 9) + 4;
      }
      else
      {
        switch ( (int)v2 )
        {
          case 325:
          case 397:
          case 406:
            goto LABEL_182;
          case 328:
          case 393:
            goto LABEL_208;
          case 330:
          case 332:
          case 333:
          case 344:
          case 384:
          case 385:
          case 396:
          case 399:
          case 418:
            goto LABEL_181;
          case 401:
          case 402:
LABEL_198:
            LODWORD(v3) = 4 * v14;
            goto LABEL_211;
          case 536:
            if ( !v13 || (v14 & 0x8000) == 0 || v13 >= MmSystemRangeStart && v5 )
              goto LABEL_211;
            if ( *((_DWORD *)v13 + 4) >= 0xFFFFFFEC )
              goto LABEL_185;
            LODWORD(v3) = *((_DWORD *)v13 + 4) + 20;
            break;
          case 537:
            if ( v13 && (v14 & 0x8000) != 0 && (v13 < MmSystemRangeStart || !v5) )
LABEL_190:
              LODWORD(v3) = *(_DWORD *)v13;
            goto LABEL_211;
          case 544:
            *(_QWORD *)v104 = v13;
            LODWORD(v3) = (*((_DWORD *)v13 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v13 + 19) & 0x7FFFFFFF);
            goto LABEL_211;
          default:
            goto LABEL_211;
        }
      }
      goto LABEL_211;
    }
    if ( (_DWORD)v2 != 780 )
    {
      switch ( (_DWORD)v2 )
      {
        case 0x32C:
          LODWORD(v3) = 328;
LABEL_212:
          v47 = Win32AllocPoolWithQuota((unsigned int)v3, 1668510549LL);
          *(_QWORD *)(v44 + 120) = v47;
          if ( !v47 )
            goto LABEL_241;
          v110 = v13;
          if ( (_DWORD)v2 == 13 )
            goto LABEL_240;
          if ( (unsigned int)v2 <= 0x83 )
          {
            if ( (_DWORD)v2 == 131 )
            {
              if ( v14 )
              {
                *(_OWORD *)v47 = *Srca;
                *(_OWORD *)(v47 + 16) = Srca[1];
                *(_OWORD *)(v47 + 32) = Srca[2];
                *(_QWORD *)(v47 + 48) = *((_QWORD *)Srca + 6);
                v49 = *(_QWORD *)(v44 + 120) + 56LL;
                *(_QWORD *)(v47 + 48) = v49;
                v50 = *((_QWORD *)Srca + 6);
                *(_OWORD *)v49 = *(_OWORD *)v50;
                *(_OWORD *)(v49 + 16) = *(_OWORD *)(v50 + 16);
                *(_QWORD *)(v49 + 32) = *(_QWORD *)(v50 + 32);
              }
              else
              {
                memmove((void *)v47, Srca, (unsigned int)v3);
              }
              v13 = *(unsigned __int16 **)(v44 + 120);
              v133 = (__int64)v13;
              goto LABEL_241;
            }
            if ( (_DWORD)v2 == 12 )
              goto LABEL_229;
            if ( (unsigned int)v2 > 0x19 )
            {
              if ( (unsigned int)v2 > 0x1B )
              {
                if ( (_DWORD)v2 == 74 )
                {
                  v13 = (unsigned __int16 *)v47;
                  v133 = v47;
                  v48 = v111;
                  *(_OWORD *)v47 = *v111;
                  *(_QWORD *)(v47 + 16) = *((_QWORD *)v48 + 2);
                  if ( *((_QWORD *)v48 + 2) )
                  {
                    *(_QWORD *)(v47 + 16) = v47 + 24;
                    memmove((void *)(v47 + 24), *((const void **)v48 + 2), *((unsigned int *)v48 + 2));
                  }
                  goto LABEL_241;
                }
                goto LABEL_231;
              }
LABEL_229:
              v13 = (unsigned __int16 *)v47;
              v133 = v47;
              v51 = HIDWORD(v108[0]) ^ (HIDWORD(v108[0]) ^ *(_DWORD *)(v47 + 4)) & 0x7FFFFFFF;
              *(_DWORD *)(v47 + 4) = v51;
              *(_DWORD *)v47 = v108[0];
              *(_QWORD *)(v47 + 8) = v47 + 16;
              *(_DWORD *)(v47 + 4) ^= (v51 ^ (v3 - 16)) & 0x7FFFFFFF;
              v52 = *(unsigned int *)(v47 + 4);
              LODWORD(v52) = v52 & 0x7FFFFFFF;
              memmove((void *)(v47 + 16), v108[1], v52);
              goto LABEL_241;
            }
LABEL_231:
            memmove((void *)v47, Srca, (unsigned int)v3);
            v13 = *(unsigned __int16 **)(v44 + 120);
            v133 = (__int64)v13;
            goto LABEL_241;
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
                  goto LABEL_229;
                case 196:
                  *(_WORD *)v47 = *(_WORD *)v108[1];
                  goto LABEL_240;
                case 328:
                case 393:
                  goto LABEL_240;
                case 401:
                  Size = v3;
                  goto LABEL_231;
                default:
                  goto LABEL_231;
              }
            }
            v53 = *(const void **)(*(_QWORD *)v104 + 80LL);
            if ( v53 )
            {
              v54 = *(unsigned int *)(*(_QWORD *)v104 + 76LL);
              LODWORD(v54) = v54 & 0x7FFFFFFF;
              memmove((void *)v47, v53, v54);
              **(_QWORD **)v104 = *(_QWORD *)(v44 + 120);
            }
            if ( *(_DWORD *)(*(_QWORD *)v104 + 56LL) )
            {
              v55 = *(unsigned int *)(*(_QWORD *)v104 + 76LL);
              LODWORD(v55) = v55 & 0x7FFFFFFF;
              v56 = (void *)(*(_QWORD *)(v44 + 120) + v55);
              v57 = *(unsigned int *)(*(_QWORD *)v104 + 60LL);
              LODWORD(v57) = v57 & 0x7FFFFFFF;
              memmove(v56, *(const void **)(*(_QWORD *)v104 + 64LL), v57);
              *(_QWORD *)(*(_QWORD *)v104 + 8LL) = v56;
            }
            goto LABEL_241;
          }
          if ( (_DWORD)v2 == 780 )
          {
LABEL_240:
            Size = v3;
            v110 = v108[1];
            v108[1] = *(void **)(v44 + 120);
          }
          else
          {
            if ( (_DWORD)v2 != 812 )
              goto LABEL_231;
            MakeUpKeyboardCorrectionCalloutContents(v13, v14, v47);
            v14 = 0LL;
            v131 = 0LL;
            v13 = *(unsigned __int16 **)(v44 + 120);
            v133 = (__int64)v13;
          }
LABEL_241:
          if ( (_DWORD)v3 && !*(_QWORD *)(v44 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v44);
            return 0LL;
          }
          v45 = v140;
          if ( (_DWORD)v140
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && (unsigned int)(v2 - 577) > 3
            && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) )
          {
            TransformMessageBetweenCoordinateSpaces(
              (unsigned int)v2,
              1,
              (__int64 *)va,
              (__int16 *)va1,
              (_DWORD *)a1,
              0LL);
            v13 = (unsigned __int16 *)v133;
          }
          goto LABEL_251;
        case 0x341:
          LODWORD(v3) = 64;
          Size = 64;
          break;
        case 0x342:
          LODWORD(v3) = 40;
          break;
      }
LABEL_211:
      if ( !(_DWORD)v3 )
        goto LABEL_241;
      goto LABEL_212;
    }
    goto LABEL_208;
  }
  if ( (_DWORD)v2 == 323 )
  {
LABEL_181:
    if ( *(_DWORD *)(gptiCurrent + 1284LL) != 1 )
    {
LABEL_182:
      *(_OWORD *)v108 = *(_OWORD *)v13;
      if ( _mm_srli_si128(*(__m128i *)v108, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v5 )
      {
        LODWORD(v3) = LODWORD(v108[0]) + 18;
        if ( (unsigned int)(LODWORD(v108[0]) + 18) < LODWORD(v108[0]) )
        {
LABEL_185:
          Win32FreeToPagedLookasideList(SMSLookaside, v43);
          return 8LL;
        }
      }
    }
    goto LABEL_211;
  }
  switch ( (int)v2 )
  {
    case 1:
    case 129:
      UserSetLastError(5LL);
      Win32FreeToPagedLookasideList(SMSLookaside, v44);
      return 0LL;
    case 12:
    case 26:
    case 194:
      if ( !v13 )
        goto LABEL_211;
      goto LABEL_182;
    case 27:
      goto LABEL_182;
    case 56:
      LODWORD(v3) = *v13;
      goto LABEL_211;
    case 70:
      LODWORD(v3) = 40;
      Size = 40;
      goto LABEL_211;
    case 73:
      LODWORD(v3) = v14;
      goto LABEL_211;
    case 74:
      v111 = v13;
      if ( !*((_QWORD *)v13 + 2) )
      {
        LODWORD(v3) = 24;
        goto LABEL_212;
      }
      LODWORD(v3) = *((_DWORD *)v13 + 2) + 24;
      if ( (unsigned int)v3 >= 0x18 )
        goto LABEL_211;
      Win32FreeToPagedLookasideList(SMSLookaside, v43);
      result = 0LL;
      break;
    case 83:
      goto LABEL_190;
    case 131:
      LODWORD(v3) = 96;
      if ( !v14 )
        LODWORD(v3) = 16;
      Size = v3;
      goto LABEL_211;
    case 196:
      goto LABEL_208;
    case 203:
      goto LABEL_198;
    default:
      goto LABEL_211;
  }
  return result;
}
