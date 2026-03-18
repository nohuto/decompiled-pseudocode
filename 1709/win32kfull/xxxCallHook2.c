/*
 * XREFs of xxxCallHook2 @ 0x1C00A9660
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00535B0 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     xxxCallNextHookEx @ 0x1C0055BC8 (xxxCallNextHookEx.c)
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C00A6240 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1C00A94D0 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxCallMouseHook @ 0x1C0119694 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01BACA0 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01C4BB4 (xxxCallJournalRecordHook.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0051374 (IsForegroundShellFrameQueueAccessible.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, unsigned int a2, __int64 a3, int *a4, _DWORD *a5)
{
  unsigned int v6; // r15d
  __int64 Valid; // rbx
  _DWORD *v8; // r9
  unsigned int v9; // r13d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // r8
  int *v14; // r14
  int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // r12
  __int64 v18; // rdx
  BOOL v19; // edi
  __int64 v20; // r10
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int *v27; // r12
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int16 ProcessMachine; // di
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // r8
  char v48; // di
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 CurrentProcess; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct tagHOOK *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  PULONG ReturnLength; // [rsp+20h] [rbp-248h]
  __int64 v67; // [rsp+38h] [rbp-230h]
  __int64 v68; // [rsp+50h] [rbp-218h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-210h]
  int *v70; // [rsp+60h] [rbp-208h]
  __int64 v71; // [rsp+68h] [rbp-200h]
  __int64 v72; // [rsp+70h] [rbp-1F8h]
  __int64 v73; // [rsp+98h] [rbp-1D0h]
  int ProcessInformation; // [rsp+A0h] [rbp-1C8h] BYREF
  char v75; // [rsp+A4h] [rbp-1C4h]
  __int64 v76; // [rsp+B8h] [rbp-1B0h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-1A8h]
  __int64 v78; // [rsp+D0h] [rbp-198h] BYREF
  unsigned int v79; // [rsp+D8h] [rbp-190h]
  int *v80; // [rsp+E0h] [rbp-188h]
  __int64 v81; // [rsp+E8h] [rbp-180h]
  __int64 v82; // [rsp+F0h] [rbp-178h]
  __int128 v83; // [rsp+100h] [rbp-168h]
  __int128 v84; // [rsp+110h] [rbp-158h]
  __int128 v85; // [rsp+120h] [rbp-148h]
  __int128 v86; // [rsp+130h] [rbp-138h]
  __int128 v87; // [rsp+150h] [rbp-118h] BYREF
  __int128 v88; // [rsp+160h] [rbp-108h] BYREF
  __int128 v89; // [rsp+170h] [rbp-F8h] BYREF
  __int128 v90; // [rsp+180h] [rbp-E8h] BYREF
  _QWORD v91[4]; // [rsp+198h] [rbp-D0h] BYREF
  _DWORD v92[10]; // [rsp+1B8h] [rbp-B0h] BYREF
  __int64 *v93; // [rsp+1E0h] [rbp-88h]
  _QWORD v94[3]; // [rsp+1E8h] [rbp-80h] BYREF
  _DWORD v95[2]; // [rsp+200h] [rbp-68h] BYREF
  int *v96; // [rsp+208h] [rbp-60h]
  __int64 v97; // [rsp+210h] [rbp-58h]
  unsigned int v98; // [rsp+218h] [rbp-50h]

  v70 = a4;
  v71 = a3;
  v6 = a2;
  v69 = a2;
  Valid = a1;
  v8 = a5;
  v72 = (__int64)a5;
  if ( a1 )
  {
    v9 = *(_DWORD *)(a1 + 48);
    if ( gptiCurrent != gptiRit || v9 >= 0xD && v9 <= 0xE )
    {
      if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 432LL) && v9 != 14 )
        return dword_1C02E1F90[v9 + 1];
      switch ( v9 )
      {
        case 4u:
          v10 = a4[4];
          v11 = *((_QWORD *)a4 + 1);
          break;
        case 3u:
          goto LABEL_66;
        case 0u:
          v10 = *a4;
          LOWORD(v11) = 0;
          break;
        case 0xFFFFFFFF:
        case 6u:
LABEL_66:
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
        v14 = a4;
        while ( 1 )
        {
          if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid
                         + gSharedInfo[1]
                         + 25LL) & 1) != 0 )
          {
            Valid = PhkNextValid(Valid);
            goto LABEL_61;
          }
          if ( v8 )
            *v8 = *(_DWORD *)(Valid + 64) & 2;
          v15 = *(_DWORD *)(Valid + 48);
          v16 = v15 + 1;
          v17 = *(_BYTE *)(v16 + v13 + 3022880);
          if ( v15 == 10 )
          {
            if ( (*(_DWORD *)(gptiCurrent + 464LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
              v17 |= 0x10u;
            if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) != 0 && v6 == 11 )
              v17 |= 0x10u;
          }
          v18 = *(_QWORD *)(Valid + 16);
          v19 = 0;
          if ( v18 != gptiCurrent )
          {
            if ( (v17 & 0x24) != 0
              || (v16 = *(_DWORD *)(gptiCurrent + 464LL) & 0x100, (*(_DWORD *)(v18 + 464) & 0x100) != (_DWORD)v16)
              || (_DWORD)v16
              && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v18 + 400)),
                  (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 400LL)) != ProcessMachine)
              || (*(_DWORD *)(gptiCurrent + 464LL) & 0xC) != 0
              && (v16 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v16 + 400) != *(_QWORD *)(gptiCurrent + 400LL))
              || (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 400LL))
              || !gbEnforceUIPI
              && (*(_DWORD *)(Valid + 64) & 1) != 0
              && (v54 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL),
                  v16 = *(unsigned int *)(v54 + 740),
                  *(_QWORD *)(v54 + 740) != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 740LL))
              && (*(_DWORD *)(gptiCurrent + 464LL) & 0x400000) == 0
              && ((_DWORD)v16 != luidSystem[0]
               || (v16 = (unsigned int)luidSystem[1], *(_DWORD *)(v54 + 744) != (_DWORD)v16))
              || (v16 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v16 + 400) != *(_QWORD *)(gptiCurrent + 400LL))
              && (unsigned __int8)IsRestricted(*(_QWORD *)v16) )
            {
              v19 = 1;
            }
          }
          if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) > 1 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
            v20 = *(_QWORD *)(Valid + 16);
            v21 = *(_QWORD *)(v20 + 400);
            v22 = *(_QWORD *)(v21 + 832);
            v23 = gbEnforceUIPI;
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v22 <= (unsigned int)v16 )
              {
                if ( (_DWORD)v22 != (_DWORD)v16
                  || (v24 = HIDWORD(v22), v16 >>= 32, (_DWORD)v24 != (_DWORD)v16)
                  && (_DWORD)v24 != -1
                  && (_DWORD)v16 != -1 )
                {
                  if ( *(int *)(v21 + 12) >= 0 )
                  {
                    v17 &= ~0x10u;
                    EtwTraceUIPIHookError(Valid, v17, v20, gptiCurrent, v9, v6, v71, v14);
                  }
                  v19 = 1;
                }
              }
            }
            goto LABEL_30;
          }
          v23 = gpqForeground;
          if ( !gpqForeground
            || (v23 = *(_QWORD *)(gpqForeground + 420LL),
                v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL) + 832LL),
                v16 = gbEnforceUIPI,
                !gbEnforceUIPI)
            || (unsigned int)v40 > (unsigned int)v23
            || (_DWORD)v40 == (_DWORD)v23
            && ((v41 = HIDWORD(v40), v23 >>= 32, (_DWORD)v41 == (_DWORD)v23) || (_DWORD)v23 == -1 || (_DWORD)v41 == -1)
            || IsForegroundShellFrameQueueAccessible(*(_QWORD *)(Valid + 16))
            || (v16 = *(_QWORD *)(Valid + 16), *(int *)(*(_QWORD *)(v16 + 400) + 12LL) < 0) )
          {
            if ( *(_DWORD *)(Valid + 48) != 14 )
              goto LABEL_30;
            if ( *(_DWORD *)(gptiCurrent + 1328LL) == -1 )
              goto LABEL_30;
            v23 = *(_QWORD *)(gptiCurrent + 1328LL);
            v42 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL);
            v43 = *(_QWORD *)(v42 + 832);
            v16 = gbEnforceUIPI;
            if ( !gbEnforceUIPI )
              goto LABEL_30;
            if ( (unsigned int)v43 > (unsigned int)v23 )
              goto LABEL_30;
            if ( (_DWORD)v43 == (_DWORD)v23 )
            {
              v44 = HIDWORD(v43);
              v23 >>= 32;
              if ( (_DWORD)v44 == (_DWORD)v23 || (_DWORD)v23 == -1 || (_DWORD)v44 == -1 )
                goto LABEL_30;
            }
            if ( *(int *)(v42 + 12) < 0 )
              goto LABEL_30;
            v56 = *(_QWORD *)(gptiCurrent + 1328LL);
            v55 = 0LL;
            v16 = *(_QWORD *)(Valid + 16);
          }
          else
          {
            v55 = gpqForeground;
            v56 = *(_QWORD *)(gpqForeground + 420LL);
          }
          EtwTraceUIPIInputError(v16, 0LL, v55, v56, 6);
          v17 &= ~0x10u;
LABEL_30:
          if ( !v19
            && (*(_DWORD *)(Valid + 64) & 1) != 0
            && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL)) )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL);
            if ( *(int *)(v23 + 12) >= 0 )
            {
              v16 = *(_QWORD *)(gptiCurrent + 400LL);
              if ( v23 != v16 && (*(_DWORD *)(v23 + 776) & 0x100) == 0 )
              {
                if ( (unsigned int)IsImmersiveAppRestricted(v16)
                  || (ProcessInformation = 6,
                      ZwQueryInformationProcess(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        ProcessCookie|ProcessUserModeIOPL,
                        &ProcessInformation,
                        8u,
                        0LL) < 0)
                  || (v75 & 1) != 0 )
                {
                  v19 = 1;
                }
              }
            }
          }
          v91[0] = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = v91;
          v91[1] = Valid;
          _InterlockedIncrement((volatile signed __int32 *)(Valid + 8));
          if ( v19 )
          {
            if ( (v17 & 0x10) != 0 )
            {
              v80 = v14;
              v78 = Valid;
              v79 = v6;
              v81 = -1LL;
              v82 = -1LL;
              v16 = *(unsigned int *)(*(_QWORD *)(Valid + 16) + 1184LL);
              if ( (v16 & 0x20) == 0 )
              {
                v45 = *(_QWORD *)(gptiCurrent + 664LL);
                v76 = *(_QWORD *)(gptiCurrent + 392LL);
                *(_QWORD *)(gptiCurrent + 392LL) = &v76;
                v77 = v45;
                if ( v45 )
                  _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
                *(_QWORD *)&v85 = gptiCurrent + 664LL;
                *((_QWORD *)&v85 + 1) = Valid;
                v89 = v85;
                HMAssignmentLock(&v89);
                if ( *(_QWORD *)(gptiCurrent + 456LL) )
                {
                  v46 = (_QWORD *)PhkNextValid(Valid);
                  if ( v46 )
                    v46 = (_QWORD *)*v46;
                  v73 = *(_QWORD *)(v47 + 48);
                  *(_QWORD *)(v47 + 48) = v46;
                }
                v48 = v17 & 0x20;
                if ( (v17 & 0x20) != 0 )
                {
                  v49 = gnllHooksTimeout;
                  if ( (*(_DWORD *)(Valid + 88) & 0x80u) != 0 )
                    v49 = 20;
                }
                else
                {
                  v49 = 200;
                }
                if ( v48 || ((unsigned __int8)~(v17 >> 2) & ((*(_DWORD *)(gptiCurrent + 464LL) & 0xC) != 0)) != 0 )
                {
                  v92[0] = 2;
                  v92[8] = 2;
                  v92[9] = v49;
                  v93 = &v68;
                  if ( v48 )
                  {
                    v81 = *(_QWORD *)(gptiCurrent + 1320LL);
                    v82 = *(_QWORD *)(gptiCurrent + 1328LL);
                    v80 = *(int **)(gptiCurrent + 1336LL);
                  }
                  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000) != 0
                    || (unsigned int)IsThreadHung(*(_QWORD **)(Valid + 16), 0)
                    || (LODWORD(v67) = 1,
                        LODWORD(ReturnLength) = 1,
                        !xxxInterSendMsgEx(0LL, 0x314u, v71, &v78, ReturnLength, *(_QWORD *)(Valid + 16), v92, v67, 0)) )
                  {
                    v50 = dword_1C02E1F90[v9 + 1];
                    v68 = v50;
                  }
                  else
                  {
                    v50 = v68;
                  }
                  if ( v48 && v50 )
                    _InterlockedExchange(
                      (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 424LL) + 12LL),
                      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
                }
                else
                {
                  v60 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 400LL), 0LL, 2LL);
                  v62 = v60;
                  if ( v60 )
                    PushW32ThreadLock(v60, v94, (__int64)ReleaseWakeReference, v61);
                  LODWORD(v67) = 1;
                  LODWORD(ReturnLength) = 1;
                  v68 = xxxInterSendMsgEx(0LL, 0x314u, v71, &v78, ReturnLength, *(_QWORD *)(Valid + 16), 0LL, v67, 0);
                  if ( v62 )
                    PopAndFreeAlwaysW32ThreadLock((__int64)v94, v63, v64, v65);
                }
                *(_QWORD *)&v86 = gptiCurrent + 664LL;
                *((_QWORD *)&v86 + 1) = v45;
                v90 = v86;
                HMAssignmentLock(&v90);
                v52 = *(_QWORD *)(gptiCurrent + 456LL);
                if ( v52 )
                  *(_QWORD *)(v52 + 48) = v73;
                ThreadUnlock1(v52, v51);
                goto LABEL_52;
              }
            }
            while ( 1 )
            {
LABEL_54:
              if ( *(_QWORD *)(Valid + 40) )
              {
                Valid = *(_QWORD *)(Valid + 40);
              }
              else
              {
                if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
                {
                  Valid = 0LL;
LABEL_57:
                  v38 = ThreadUnlock1(v16, v23);
                  if ( v38 && (*(_DWORD *)(v38 + 64) & 0x10) != 0 )
                    FreeHook((struct tagHOOK *)v38);
                  goto LABEL_60;
                }
                v23 = *(_DWORD *)(Valid + 48) + 1;
                v16 = gptiCurrent;
                Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8 * v23 + 32);
              }
              if ( !Valid || (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
                goto LABEL_57;
            }
          }
          v25 = *(unsigned int *)(Valid + 68);
          if ( (_DWORD)v25 != -1 )
          {
            v26 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 400LL) + 380LL);
            if ( !_bittest((const int *)&v26, v25) )
            {
              CurrentProcess = PsGetCurrentProcess(v26, v25);
              if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*(_DWORD *)(Valid + 68)) )
                goto LABEL_54;
            }
          }
          if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL) | *(_DWORD *)(gptiCurrent + 656LL)) & 0x400) == 0
            || *(_DWORD *)(Valid + 48) == 9 )
          {
            v27 = v70;
          }
          else
          {
            v95[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
            v95[1] = 0;
            v98 = v6;
            v97 = v71;
            v27 = v70;
            v96 = v70;
            if ( (unsigned int)xxxCallHook(0, *(_DWORD *)(Valid + 48), (__int64)v95, 9u) )
            {
              v14 = v70;
              goto LABEL_54;
            }
          }
          v28 = *(_QWORD *)(gptiCurrent + 664LL);
          v76 = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = &v76;
          v77 = v28;
          if ( v28 )
            _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
          v29 = *(_QWORD *)(gptiCurrent + 456LL);
          if ( !v29 )
          {
            v31 = v73;
            goto LABEL_49;
          }
          v30 = Valid;
          while ( *(_QWORD *)(v30 + 40) )
          {
            v30 = *(_QWORD *)(v30 + 40);
LABEL_44:
            if ( !v30 )
              goto LABEL_48;
            if ( (*(_DWORD *)(v30 + 64) & 0x80u) == 0 )
              goto LABEL_46;
          }
          if ( (*(_DWORD *)(v30 + 64) & 1) == 0 )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL * (*(_DWORD *)(v30 + 48) + 1) + 32);
            goto LABEL_44;
          }
          v30 = 0LL;
LABEL_46:
          if ( v30 )
            v30 = *(_QWORD *)v30;
LABEL_48:
          v31 = *(_QWORD *)(v29 + 48);
          v73 = v31;
          *(_QWORD *)(v29 + 48) = v30;
LABEL_49:
          *(_QWORD *)&v83 = gptiCurrent + 664LL;
          *((_QWORD *)&v83 + 1) = Valid;
          v87 = v83;
          HMAssignmentLock(&v87);
          v68 = xxxHkCallHook(Valid, v69, v71, v27);
          *(_QWORD *)&v84 = gptiCurrent + 664LL;
          *((_QWORD *)&v84 + 1) = v28;
          v88 = v84;
          HMAssignmentLock(&v88);
          v34 = *(_QWORD *)(gptiCurrent + 456LL);
          if ( v34 )
            *(_QWORD *)(v34 + 48) = v31;
          ThreadUnlock1(v33, v32);
          if ( (*(_DWORD *)(Valid + 64) & 0x10) == 0 )
          {
LABEL_52:
            ThreadUnlock1(v36, v35);
            return v68;
          }
          Valid = PhkNextValid(Valid);
          v59 = (struct tagHOOK *)ThreadUnlock1(v58, v57);
          if ( v59 )
            FreeHook(v59);
          v6 = v69;
          v14 = v70;
LABEL_60:
          v13 = 0x1C0000000uLL;
          v8 = (_DWORD *)v72;
LABEL_61:
          if ( !Valid )
            return *(int *)(v13 + 4LL * (v9 + 1) + 3022736);
        }
      }
      return dword_1C02E1F90[v9 + 1];
    }
  }
  return 0LL;
}
