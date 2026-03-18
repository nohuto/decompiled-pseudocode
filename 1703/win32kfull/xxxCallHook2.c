/*
 * XREFs of xxxCallHook2 @ 0x1C0053B80
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0052F90 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0053A00 (fnHkINLPCWPEXSTRUCT.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     EditionKeyEventLLHook @ 0x1C00CAF60 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 *     EditionLLMouseButtonHook @ 0x1C0101D20 (EditionLLMouseButtonHook.c)
 *     xxxCallMouseHook @ 0x1C010DAD8 (xxxCallMouseHook.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01A0050 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01C13AC (xxxCallJournalRecordHook.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxLoadHmodIndex @ 0x1C003ACEC (xxxLoadHmodIndex.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     FreeHook @ 0x1C00D9150 (FreeHook.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, unsigned int a2, __int64 a3, int *a4, int *a5)
{
  unsigned int v6; // r14d
  __int64 Valid; // rbx
  int *v8; // r8
  unsigned int v9; // r13d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r9
  int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // r12
  __int64 v17; // rdx
  BOOL v18; // edi
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int16 ProcessMachine; // di
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // r9
  char v47; // di
  int v48; // ecx
  __int64 v49; // rcx
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 CurrentProcess; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  struct tagHOOK *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  int v67; // eax
  __int64 v68; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-1F0h]
  __int128 v70; // [rsp+60h] [rbp-1E8h]
  __int64 v71; // [rsp+90h] [rbp-1B8h]
  int ProcessInformation; // [rsp+98h] [rbp-1B0h] BYREF
  char v73; // [rsp+9Ch] [rbp-1ACh]
  __int128 v74; // [rsp+A0h] [rbp-1A8h]
  __int64 v75; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-180h]
  __int64 v77; // [rsp+D8h] [rbp-170h] BYREF
  unsigned int v78; // [rsp+E0h] [rbp-168h]
  int *v79; // [rsp+E8h] [rbp-160h]
  __int64 v80; // [rsp+F0h] [rbp-158h]
  __int64 v81; // [rsp+F8h] [rbp-150h]
  __int128 v82; // [rsp+100h] [rbp-148h]
  __int128 v83; // [rsp+110h] [rbp-138h]
  __int128 v84; // [rsp+140h] [rbp-108h] BYREF
  __int128 v85; // [rsp+150h] [rbp-F8h] BYREF
  __int128 v86; // [rsp+160h] [rbp-E8h] BYREF
  __int128 v87; // [rsp+170h] [rbp-D8h] BYREF
  _QWORD v88[3]; // [rsp+180h] [rbp-C8h] BYREF
  _DWORD v89[10]; // [rsp+198h] [rbp-B0h] BYREF
  __int64 *v90; // [rsp+1C0h] [rbp-88h]
  _QWORD v91[3]; // [rsp+1C8h] [rbp-80h] BYREF
  _DWORD v92[2]; // [rsp+1E0h] [rbp-68h] BYREF
  int *v93; // [rsp+1E8h] [rbp-60h]
  __int64 v94; // [rsp+1F0h] [rbp-58h]
  unsigned int v95; // [rsp+1F8h] [rbp-50h]

  *(_QWORD *)&v70 = a3;
  v6 = a2;
  v69 = a2;
  Valid = a1;
  v8 = a5;
  *(_QWORD *)&v74 = a5;
  if ( a1 )
  {
    v9 = *(_DWORD *)(a1 + 48);
    if ( gptiCurrent != gptiRit || v9 >= 0xD && v9 <= 0xE )
    {
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 408LL) && v9 != 14 )
        return dword_1C02E78C0[v9 + 1];
      switch ( v9 )
      {
        case 4u:
          v10 = a4[4];
          v11 = *((_QWORD *)a4 + 1);
          break;
        case 3u:
          goto LABEL_65;
        case 0u:
          v10 = *a4;
          LOWORD(v11) = 0;
          break;
        case 0xFFFFFFFF:
        case 6u:
LABEL_65:
          v10 = a4[2];
          v11 = *((_QWORD *)a4 + 2);
          break;
        case 0xCu:
          v10 = a4[6];
          v11 = *((_QWORD *)a4 + 2);
          break;
        default:
          v10 = 0;
          LOWORD(v11) = 0;
          break;
      }
      if ( ((unsigned int)(v10 - 577) > 0x16 || (v12 = 8122367, !_bittest(&v12, v10 - 577)))
        && (v10 != 528 || (_WORD)v11 != 582)
        || v9 >= 3 && (v9 <= 4 || v9 == 12) )
      {
        v13 = 0x1C0000000uLL;
        while ( 1 )
        {
          if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid
                         + gSharedInfo[1]
                         + 25LL) & 1) != 0 )
          {
            Valid = PhkNextValid(Valid, gSharedInfo[0], v8);
            goto LABEL_60;
          }
          if ( v8 )
            *v8 = *(_DWORD *)(Valid + 64) & 2;
          v14 = *(_DWORD *)(Valid + 48);
          v15 = v14 + 1;
          v16 = *(_BYTE *)(v15 + v13 + 3037984);
          if ( v14 == 10 )
          {
            if ( (*(_DWORD *)(gptiCurrent + 440LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
              v16 |= 0x10u;
            if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 && v6 == 11 )
              v16 |= 0x10u;
          }
          v17 = *(_QWORD *)(Valid + 16);
          v18 = 0;
          if ( v17 != gptiCurrent )
          {
            if ( (v16 & 0x24) != 0
              || (v15 = *(_DWORD *)(gptiCurrent + 440LL) & 0x100, (*(_DWORD *)(v17 + 440) & 0x100) != (_DWORD)v15)
              || (_DWORD)v15
              && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v17 + 376)),
                  (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) != ProcessMachine)
              || (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) != 0
              && (v15 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v15 + 376) != *(_QWORD *)(gptiCurrent + 376LL))
              || (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 376LL))
              || !gbEnforceUIPI
              && (*(_DWORD *)(Valid + 64) & 1) != 0
              && (v58 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL),
                  v15 = *(unsigned int *)(v58 + 732),
                  *(_QWORD *)(v58 + 732) != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 732LL))
              && (*(_DWORD *)(gptiCurrent + 440LL) & 0x400000) == 0
              && ((_DWORD)v15 != luidSystem[0]
               || (v15 = (unsigned int)luidSystem[1], *(_DWORD *)(v58 + 736) != (_DWORD)v15))
              || (v15 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v15 + 376) != *(_QWORD *)(gptiCurrent + 376LL))
              && (unsigned __int8)IsRestricted(*(_QWORD *)v15) )
            {
              v18 = 1;
            }
          }
          if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) > 1 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
            v19 = *(_QWORD *)(Valid + 16);
            v20 = *(_QWORD *)(v19 + 376);
            v21 = *(_QWORD *)(v20 + 824);
            v22 = gbEnforceUIPI;
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v21 <= (unsigned int)v15 )
              {
                if ( (_DWORD)v21 != (_DWORD)v15
                  || (v23 = HIDWORD(v21), v15 >>= 32, (_DWORD)v23 != (_DWORD)v15)
                  && (_DWORD)v23 != -1
                  && (_DWORD)v15 != -1 )
                {
                  if ( *(int *)(v20 + 12) >= 0 )
                  {
                    v16 &= ~0x10u;
                    EtwTraceUIPIHookError(Valid, v16, v19, gptiCurrent, v9, v6, v70, a4);
                  }
                  v18 = 1;
                }
              }
            }
            goto LABEL_30;
          }
          v22 = gpqForeground;
          if ( !gpqForeground
            || (v22 = *(_QWORD *)(gpqForeground + 380LL),
                v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL) + 824LL),
                v15 = gbEnforceUIPI,
                !gbEnforceUIPI)
            || (unsigned int)v39 > (unsigned int)v22
            || (_DWORD)v39 == (_DWORD)v22
            && ((v55 = HIDWORD(v39), v22 >>= 32, (_DWORD)v55 == (_DWORD)v22) || (_DWORD)v22 == -1 || (_DWORD)v55 == -1)
            || (unsigned int)IsForegroundShellFrameQueueAccessible(*(_QWORD *)(Valid + 16))
            || (v15 = *(_QWORD *)(Valid + 16), *(int *)(*(_QWORD *)(v15 + 376) + 12LL) < 0) )
          {
            if ( *(_DWORD *)(Valid + 48) != 14 )
              goto LABEL_30;
            if ( *(_DWORD *)(gptiCurrent + 1240LL) == -1 )
              goto LABEL_30;
            v22 = *(_QWORD *)(gptiCurrent + 1240LL);
            v40 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
            v41 = *(_QWORD *)(v40 + 824);
            v15 = gbEnforceUIPI;
            if ( !gbEnforceUIPI )
              goto LABEL_30;
            if ( (unsigned int)v41 > (unsigned int)v22 )
              goto LABEL_30;
            if ( (_DWORD)v41 == (_DWORD)v22 )
            {
              v57 = HIDWORD(v41);
              v22 >>= 32;
              if ( (_DWORD)v57 == (_DWORD)v22 || (_DWORD)v22 == -1 || (_DWORD)v57 == -1 )
                goto LABEL_30;
            }
            if ( *(int *)(v40 + 12) < 0 )
              goto LABEL_30;
            v60 = *(_QWORD *)(gptiCurrent + 1240LL);
            v59 = 0LL;
            v15 = *(_QWORD *)(Valid + 16);
          }
          else
          {
            v59 = gpqForeground;
            v60 = *(_QWORD *)(gpqForeground + 380LL);
          }
          EtwTraceUIPIInputError(v15, 0LL, v59, v60, 6);
          v16 &= ~0x10u;
LABEL_30:
          if ( !v18
            && (*(_DWORD *)(Valid + 64) & 1) != 0
            && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL)) )
          {
            v22 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
            if ( *(int *)(v22 + 12) >= 0 )
            {
              v15 = *(_QWORD *)(gptiCurrent + 376LL);
              if ( v22 != v15 && (*(_DWORD *)(v22 + 768) & 0x100) == 0 )
              {
                if ( (unsigned int)IsImmersiveAppRestricted(v15)
                  || (ProcessInformation = 6,
                      ZwQueryInformationProcess(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        ProcessCookie|ProcessUserModeIOPL,
                        &ProcessInformation,
                        8u,
                        0LL) < 0)
                  || (v73 & 1) != 0 )
                {
                  v18 = 1;
                }
              }
            }
          }
          v88[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v88;
          v88[1] = Valid;
          ++*(_DWORD *)(Valid + 8);
          if ( v18 )
          {
            if ( (v16 & 0x10) != 0 )
            {
              v79 = a4;
              v77 = Valid;
              v78 = v6;
              v80 = -1LL;
              v81 = -1LL;
              v15 = *(unsigned int *)(*(_QWORD *)(Valid + 16) + 1096LL);
              if ( (v15 & 0x20) == 0 )
              {
                v42 = *(_QWORD *)(gptiCurrent + 608LL);
                v75 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v75;
                v76 = v42;
                if ( v42 )
                  ++*(_DWORD *)(v42 + 8);
                *(_QWORD *)&v74 = gptiCurrent + 608LL;
                *((_QWORD *)&v74 + 1) = Valid;
                v86 = v74;
                HMAssignmentLock(&v86);
                if ( *(_QWORD *)(gptiCurrent + 432LL) )
                {
                  v45 = (_QWORD *)PhkNextValid(Valid, v43, v44);
                  if ( v45 )
                    v45 = (_QWORD *)*v45;
                  v71 = *(_QWORD *)(v46 + 48);
                  *(_QWORD *)(v46 + 48) = v45;
                }
                v47 = v16 & 0x20;
                if ( (v16 & 0x20) != 0 )
                {
                  v48 = gnllHooksTimeout;
                  if ( (*(_DWORD *)(Valid + 88) & 0x80u) != 0 )
                    v48 = 20;
                }
                else
                {
                  v48 = 200;
                }
                if ( v47 || ((unsigned __int8)~(v16 >> 2) & ((*(_DWORD *)(gptiCurrent + 440LL) & 0xC) != 0)) != 0 )
                {
                  v89[0] = 2;
                  v89[8] = 2;
                  v89[9] = v48;
                  v90 = &v68;
                  if ( v47 )
                  {
                    v80 = *(_QWORD *)(gptiCurrent + 1232LL);
                    v81 = *(_QWORD *)(gptiCurrent + 1240LL);
                    v79 = *(int **)(gptiCurrent + 1248LL);
                  }
                  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000) != 0
                    || (unsigned int)IsThreadHung(*(_QWORD *)(Valid + 16), 0LL)
                    || (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v49),
                        !xxxInterSendMsgEx(
                           0,
                           788,
                           v70,
                           (unsigned int)&v77,
                           gptiCurrent,
                           CurrentThreadDpiAwarenessContext,
                           *(_QWORD *)(Valid + 16),
                           (__int64)v89,
                           1,
                           0)) )
                  {
                    v51 = dword_1C02E78C0[v9 + 1];
                    v68 = v51;
                  }
                  else
                  {
                    v51 = v68;
                  }
                  if ( v47 && v51 )
                    _InterlockedExchange(
                      (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL) + 12LL),
                      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
                }
                else
                {
                  v64 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 376LL), 0LL, 2LL);
                  v66 = v64;
                  if ( v64 )
                    PushW32ThreadLock(v64, v91, (__int64)ReleaseWakeReference);
                  v67 = W32GetCurrentThreadDpiAwarenessContext(v65);
                  v68 = xxxInterSendMsgEx(
                          0,
                          788,
                          v70,
                          (unsigned int)&v77,
                          gptiCurrent,
                          v67,
                          *(_QWORD *)(Valid + 16),
                          0LL,
                          1,
                          0);
                  if ( v66 )
                    PopAndFreeAlwaysW32ThreadLock((__int64)v91);
                }
                *(_QWORD *)&v70 = gptiCurrent + 608LL;
                *((_QWORD *)&v70 + 1) = v42;
                v87 = v70;
                HMAssignmentLock(&v87);
                v54 = *(_QWORD *)(gptiCurrent + 432LL);
                if ( v54 )
                {
                  v53 = v71;
                  *(_QWORD *)(v54 + 48) = v71;
                }
                ThreadUnlock1(v53, v52);
                goto LABEL_51;
              }
            }
            while ( 1 )
            {
LABEL_53:
              if ( *(_QWORD *)(Valid + 40) )
              {
                Valid = *(_QWORD *)(Valid + 40);
              }
              else
              {
                if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
                {
                  Valid = 0LL;
LABEL_56:
                  v37 = ThreadUnlock1(v15, v22);
                  if ( v37 && (*(_DWORD *)(v37 + 64) & 0x10) != 0 )
                    FreeHook((struct tagHOOK *)v37);
                  goto LABEL_59;
                }
                v22 = *(_DWORD *)(Valid + 48) + 1;
                v15 = gptiCurrent;
                Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * v22 + 32);
              }
              if ( !Valid || (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
                goto LABEL_56;
            }
          }
          v24 = *(_DWORD *)(Valid + 68);
          if ( v24 != -1 )
          {
            v25 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL);
            if ( !_bittest((const int *)&v25, v24) )
            {
              CurrentProcess = PsGetCurrentProcess(v25);
              if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*(_DWORD *)(Valid + 68)) )
                goto LABEL_53;
            }
          }
          if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL) | *(_DWORD *)(gptiCurrent + 600LL)) & 0x400) != 0
            && *(_DWORD *)(Valid + 48) != 9 )
          {
            v92[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
            v92[1] = 0;
            v95 = v6;
            v94 = v70;
            v93 = a4;
            if ( (unsigned int)xxxCallHook(0, *(_DWORD *)(Valid + 48), (__int64)v92, 9u) )
              goto LABEL_53;
          }
          v26 = *(_QWORD *)(gptiCurrent + 608LL);
          v75 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v75;
          v76 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v27 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( !v27 )
          {
            v29 = v71;
            goto LABEL_48;
          }
          v28 = Valid;
          while ( *(_QWORD *)(v28 + 40) )
          {
            v28 = *(_QWORD *)(v28 + 40);
LABEL_43:
            if ( !v28 )
              goto LABEL_47;
            if ( (*(_DWORD *)(v28 + 64) & 0x80u) == 0 )
              goto LABEL_45;
          }
          if ( (*(_DWORD *)(v28 + 64) & 1) == 0 )
          {
            v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * (*(_DWORD *)(v28 + 48) + 1) + 32);
            goto LABEL_43;
          }
          v28 = 0LL;
LABEL_45:
          if ( v28 )
            v28 = *(_QWORD *)v28;
LABEL_47:
          v29 = *(_QWORD *)(v27 + 48);
          v71 = v29;
          *(_QWORD *)(v27 + 48) = v28;
LABEL_48:
          *(_QWORD *)&v82 = gptiCurrent + 608LL;
          *((_QWORD *)&v82 + 1) = Valid;
          v84 = v82;
          HMAssignmentLock(&v84);
          v68 = xxxHkCallHook(Valid, v69, v70, a4);
          *(_QWORD *)&v83 = gptiCurrent + 608LL;
          *((_QWORD *)&v83 + 1) = v26;
          v85 = v83;
          HMAssignmentLock(&v85);
          v32 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( v32 )
            *(_QWORD *)(v32 + 48) = v29;
          ThreadUnlock1(v31, v30);
          if ( (*(_DWORD *)(Valid + 64) & 0x10) == 0 )
          {
LABEL_51:
            ThreadUnlock1(v34, v33);
            return v68;
          }
          Valid = PhkNextValid(Valid, v33, v35);
          v63 = (struct tagHOOK *)ThreadUnlock1(v62, v61);
          if ( v63 )
            FreeHook(v63);
          v6 = v69;
LABEL_59:
          v13 = 0x1C0000000uLL;
LABEL_60:
          v8 = (int *)v74;
          if ( !Valid )
            return *(int *)(v13 + 4LL * (v9 + 1) + 3045568);
        }
      }
      return dword_1C02E78C0[v9 + 1];
    }
  }
  return 0LL;
}
