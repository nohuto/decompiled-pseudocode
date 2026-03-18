/*
 * XREFs of xxxDispatchMessage @ 0x1C00A10D0
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserDispatchMessage @ 0x1C00A0FA0 (NtUserDispatchMessage.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C00A1650 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     ValidateTimerCallback @ 0x1C00F2078 (ValidateTimerCallback.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0121148 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C023AA3C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  struct _KTHREAD *v14; // r14
  __int64 v15; // rbp
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64, char); // rdx
  unsigned __int64 i; // rcx
  __int64 *v18; // rax
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rax
  int v22; // r15d
  int v23; // r14d
  int v24; // r12d
  int v25; // ebp
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r14d
  void *v29; // rax
  char v30; // r8
  __int64 (__fastcall *v31)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rbp
  __int64 *v34; // r14
  unsigned int v35; // r10d
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int64 v41; // rsi
  struct _KTHREAD *v42; // r14
  int v43; // r8d
  unsigned __int64 v44; // rsi
  char *v45; // r14
  __int64 v46; // r15
  _QWORD v48[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp+8h] BYREF

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v49 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  LOBYTE(v8) = *(_BYTE *)(v6 + 1196);
  EtwTraceBeginDispatchMessage(v8, v49);
  v11 = *(_QWORD *)a1;
  v12 = 0LL;
  if ( !*(_QWORD *)a1 || (v12 = ValidateHwnd(v11)) != 0 )
  {
    v13 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v13 < 0x400
      && ((v11 = 512LL, (MessageTable[v13] & 0x200) != 0) || (_DWORD)v13 == 537
                                                          && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0)
      || (_DWORD)v13 == 536 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0 )
    {
      UserSetLastError(1159LL, v13);
      goto LABEL_86;
    }
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v13, 0x8000LL, v10) )
    {
      v18 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v18 )
        v15 = *v18;
    }
    v48[0] = *(_QWORD *)(v15 + 392);
    *(_QWORD *)(v15 + 392) = v48;
    v48[1] = v12;
    if ( v12 )
      _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v19 = *(_DWORD *)(a1 + 8);
    if ( v19 == 275 || v19 == 280 )
    {
      v16 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))(a1 + 24);
      if ( v16 )
      {
        if ( v19 == 280 )
        {
          v20 = 0LL;
          for ( i = gtmrListHead; i != gtmrListHead; i = *(_QWORD *)i )
          {
            v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))(i - 72);
            if ( (*(_DWORD *)(i - 72 + 48) & 2) != 0
              && *(_QWORD *)(a1 + 16) == *((_QWORD *)v16 + 12)
              && v12 == *((_QWORD *)v16 + 11) )
            {
              goto LABEL_29;
            }
          }
          v16 = 0LL;
LABEL_29:
          if ( v16 && *((_QWORD *)v16 + 4) )
            (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))v16 + 4))(
              v12,
              280LL,
              *(unsigned int *)(a1 + 16),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          goto LABEL_85;
        }
        i = gptiCurrent;
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
        {
          v21 = SfnDWORD(
                  v12,
                  275,
                  *(_QWORD *)(a1 + 16),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                  *(_QWORD *)(a1 + 24),
                  *(_QWORD *)(gpsi + 744LL));
LABEL_36:
          v20 = v21;
          goto LABEL_85;
        }
        goto LABEL_33;
      }
    }
    if ( !v12 )
      goto LABEL_33;
    if ( v19 == 15 )
    {
      v22 = *(_DWORD *)(v12 + 68);
      v23 = *(_DWORD *)(v12 + 64);
      v24 = *(_DWORD *)(v12 + 304);
      *(_BYTE *)(v12 + 58) |= 0x40u;
      if ( (unsigned int)IsWindowDesktopComposed(v12) )
      {
        v25 = *(_DWORD *)(v12 + 68);
        v26 = *(unsigned int *)(v12 + 64);
        v27 = *(_DWORD *)(v12 + 304);
        if ( v22 != v25 )
          goto LABEL_44;
        if ( v23 != (_DWORD)v26 || v24 != v27 )
        {
          if ( v22 == v25 )
          {
            if ( v23 == (_DWORD)v26 )
            {
              if ( ((v24 ^ v27) & 0x5C00300) == 0 )
                goto LABEL_52;
              v28 = -268435456;
              v25 = *(_DWORD *)(v12 + 304);
            }
            else
            {
              if ( ((v23 ^ (unsigned int)v26) & 0x4E27A9) == 0 )
                goto LABEL_52;
              v28 = -20;
              v25 = *(_DWORD *)(v12 + 64);
            }
            goto LABEL_51;
          }
LABEL_44:
          if ( ((v22 ^ v25) & 0xB9CF0000) == 0 )
            goto LABEL_52;
          v28 = -16;
LABEL_51:
          v29 = (void *)ReferenceDwmApiPort(v26);
          DwmAsyncChildStyleChange(v29, *(_QWORD *)v12, v28, v25);
        }
      }
    }
LABEL_52:
    v30 = *(_BYTE *)(v12 + 58);
    if ( (v30 & 4) != 0 )
    {
      i = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)i < 0x400 )
        v31 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[i]];
      else
        v31 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
      v16 = SfnINWPARAMCHAR;
      if ( v31 == SfnINWPARAMCHAR && (v30 & 8) != 0 )
        RtlMBMessageWParamCharToWCS(i, a1 + 16);
      v32 = *(_QWORD *)(v12 + 160);
      if ( v32 < 7 )
      {
        v21 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v32))(
                v12,
                *(unsigned int *)(a1 + 8),
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 24));
        goto LABEL_36;
      }
LABEL_33:
      v20 = 0LL;
LABEL_85:
      ThreadUnlock1(i, v16);
      v4 = v20;
      goto LABEL_86;
    }
    v33 = *(_QWORD *)(v12 + 160);
    if ( (v30 & 8) != 0 )
    {
      v34 = (__int64 *)(a1 + 16);
      RtlWCSMessageWParamCharToMB(*(unsigned int *)(a1 + 8), a1 + 16);
      v35 = *(_DWORD *)(a1 + 8);
      if ( v35 != 576 && v35 != 281 )
      {
        v36 = *v34;
LABEL_65:
        v37 = SfnDWORD(v12, v35, v36, *(_QWORD *)(a1 + 24), v33, *(_QWORD *)(gpsi + 744LL));
        goto LABEL_72;
      }
      v40 = *v34;
    }
    else
    {
      v35 = *(_DWORD *)(a1 + 8);
      if ( v35 != 576 && v35 != 281 )
      {
        v36 = *(_QWORD *)(a1 + 16);
        goto LABEL_65;
      }
      v40 = *(_QWORD *)(a1 + 16);
    }
    v37 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v35]])(
            v12,
            v35,
            v40,
            *(_QWORD *)(a1 + 24),
            v33,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
LABEL_72:
    v20 = v37;
    if ( *(_DWORD *)(a1 + 8) == 15 )
    {
      v41 = *(_QWORD *)a1;
      v42 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(i, v16, v38, v39) )
        PsGetThreadWin32Thread(v42);
      v43 = (unsigned __int16)v41;
      i = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v41 < *(_QWORD *)(gpsi + 8LL) )
      {
        v44 = v41 >> 16;
        v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gSharedInfo[1];
        v45 = (char *)v16 + (unsigned int)(v43 * LODWORD(gSharedInfo[2]));
        v46 = 3 * ((__int64)(unsigned int)(v43 * LODWORD(gSharedInfo[2])) >> 5);
        if ( ((_WORD)v44 == *((_WORD *)v45 + 13)
           || (_WORD)v44 == 0xFFFF
           || !(_WORD)v44 && PsGetCurrentProcessWow64Process(gpsi))
          && (v45[25] & 1) == 0
          && v45[24] == 1
          && *(_QWORD *)(gpKernelHandleTable + 8 * v46)
          && (*(_BYTE *)(v12 + 58) & 0x40) != 0 )
        {
          SetOrClrWF(0, (_DWORD *)v12, 0x401u, 1);
          xxxSimpleDoSyncPaint((struct tagWND *)v12);
        }
      }
    }
    goto LABEL_85;
  }
LABEL_86:
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v49);
  return v4;
}
