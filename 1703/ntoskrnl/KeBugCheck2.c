/*
 * XREFs of KeBugCheck2 @ 0x1401FEE60
 * Callers:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x140168660 (KdRefreshDebuggerNotPresent.c)
 *     KiMarkBugCheckRegions @ 0x1401747D0 (KiMarkBugCheckRegions.c)
 *     DebugService2 @ 0x140189440 (DebugService2.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlLogGuestCrashInformation @ 0x1401E4CB0 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1401E771C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1401E77DC (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1401F0C68 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401F0EA4 (IoSaveBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x1401FB608 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1401FB95C (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x1401FDC10 (KiCheckForFreezeExecution.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1401FFBC4 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x1401FFED0 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1402003E0 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x14020056C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140200608 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402006D8 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x1402007F8 (KiScanBugCheckCallbackList.c)
 *     KiSendFreeze @ 0x1402038C8 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140203980 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140203B14 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x140211AB4 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     VfNotifyVerifierOfEvent @ 0x140764CA0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const CHAR *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rdi
  char v7; // r11
  __int64 v8; // rsi
  unsigned int v13; // edx
  signed __int32 v14; // eax
  signed __int32 v15; // ecx
  bool v16; // r8
  signed __int32 v17; // eax
  unsigned int v18; // edx
  signed __int32 v19; // ecx
  __int64 CurrentPrcb; // r8
  int v21; // ecx
  size_t v22; // r8
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm1
  _BOOL8 v27; // rcx
  char v28; // si
  __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rcx
  unsigned __int64 v34; // r14
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rbx
  BOOLEAN refreshed; // al
  __int64 v38; // rdi
  char v39; // bl
  bool v40; // si
  unsigned int v41; // eax
  bool v42; // r13
  bool v43; // r14
  _OWORD *v44; // rax
  __int128 v45; // xmm1
  unsigned int v46; // ebx
  __int64 v47; // rcx
  char v48; // [rsp+51h] [rbp-AFh] BYREF
  char v49; // [rsp+52h] [rbp-AEh]
  char v50; // [rsp+53h] [rbp-ADh]
  char v51; // [rsp+54h] [rbp-ACh]
  bool v52; // [rsp+55h] [rbp-ABh]
  bool v53; // [rsp+56h] [rbp-AAh]
  bool v54; // [rsp+57h] [rbp-A9h]
  PCSTR Format; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+74h] [rbp-8Ch]
  __int64 v59; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+98h] [rbp-68h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  void *Src; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v66[4]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v67[88]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v68[77]; // [rsp+180h] [rbp+80h] BYREF
  char pszDest[176]; // [rsp+650h] [rbp+550h] BYREF

  v6 = (const CHAR *)a5;
  v7 = 0;
  v8 = a6;
  pszDest[0] = 0;
  v63 = KiBugCheckProgress;
  v49 = 0;
  v54 = IopAutoReboot != 0;
  v52 = 1;
  v53 = 1;
  Format = 0LL;
  v59 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v57 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    v16 = KeQueryCurrentStackInformation(&v61, (unsigned __int64 *)&Src, &v64);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v17 & 3) == 3 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
    }
    while ( v17 != v19 );
    v7 = 0;
    if ( v16 )
    {
      if ( v61 > 7 || (v21 = 161, !_bittest(&v21, v61)) )
      {
        v22 = v64 - (_QWORD)Src;
        if ( v64 - (unsigned __int64)Src > 0x6000 )
          v22 = 24576LL;
        memmove(&KiPreBugcheckStackSaveArea, Src, v22);
        v7 = 0;
      }
    }
LABEL_21:
    v51 = 1;
  }
  else
  {
    v13 = (16 * KeGetCurrentPrcb()->Number) | 3;
    v14 = KiBugCheckActive;
    while ( (v14 & 3) != 3 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(&KiBugCheckActive, v13, v14);
      if ( v14 == v15 )
        goto LABEL_21;
    }
LABEL_12:
    v51 = 0;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v56 = CurrentPrcb;
  v58 = *(_DWORD *)(CurrentPrcb + 36);
  if ( !qword_14034B1C0 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_14034B1C0 + 3) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
      "Due to verification temporarily enabled by Po during this time,\n"
      "regular bugcheck processing may not work.\n"
      "\n");
    if ( a1 == 10 )
      DbgPrintEx(
        0x65u,
        0,
        "Memory was accessed during this time that was not properly marked\n"
        "for the boot phase of hibernate! Check the callstack and parameters\n"
        "to find the pages that need to be marked.\n"
        "\n");
    CurrentPrcb = v56;
    v7 = 0;
    v50 = 1;
    v63 = 0LL;
  }
  else
  {
LABEL_14:
    v50 = 0;
  }
  v23 = *(_OWORD **)(CurrentPrcb + 25600);
  v24 = v68;
  v25 = 9LL;
  do
  {
    *v24 = *v23;
    v24[1] = v23[1];
    v24[2] = v23[2];
    v24[3] = v23[3];
    v24[4] = v23[4];
    v24[5] = v23[5];
    v24[6] = v23[6];
    v24 += 8;
    v26 = v23[7];
    v23 += 8;
    *(v24 - 1) = v26;
    --v25;
  }
  while ( v25 );
  *v24 = *v23;
  v24[1] = v23[1];
  v24[2] = v23[2];
  v24[3] = v23[3];
  v24[4] = v23[4];
  if ( !v51 )
    goto LABEL_139;
  off_14033B5D8[0]();
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(0x60u);
  v27 = (unsigned int)KeIsEmptyAffinityEx(KiNmiInProgress) == 0;
  ((void (__fastcall *)(_BOOL8))off_14033B3A8[0])(v27);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v50 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((int)&KseEngine, 96);
  if ( a1 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_14033B5B8[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_140350128 = a2;
  qword_140350130 = a3;
  if ( a1 == -1073741103 )
    a1 = 195;
  qword_140350138 = (__int64)a4;
  KiBugCheckData = a1;
  qword_140350140 = a5;
  if ( a1 > 0xCB )
  {
    if ( a1 == 216 )
    {
      KiBugCheckDriver = a2 + 88;
      goto LABEL_47;
    }
    if ( a1 == 234 )
    {
      KiBugCheckDriver = (__int64)a4;
      goto LABEL_47;
    }
    if ( a1 != 239 )
    {
      if ( a1 == 252 )
        goto LABEL_102;
      if ( a1 == 317 )
      {
        v57 = 8;
        goto LABEL_47;
      }
      if ( a1 != 335 )
        goto LABEL_47;
      if ( a3 < 0x100 && a5 )
      {
        v35 = CurrentThread;
        if ( *(_QWORD *)(a5 + 8) )
          v35 = *(struct _KTHREAD **)(a5 + 8);
        CurrentThread = v35;
      }
      if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
        goto LABEL_47;
    }
    v49 = 1;
    goto LABEL_86;
  }
  if ( a1 != 203 )
  {
    if ( a1 == 10 )
    {
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v62, 0LL, &v48);
        if ( v48 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v62, 1LL, &v48) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v62 + 88;
          }
          else
          {
            KiBugCheckDriver = MmLocateUnloadedDriver(a2);
            if ( KiBugCheckDriver )
              KiBugCheckData = 212LL;
          }
        }
        else
        {
          KiBugCheckData = 209LL;
        }
      }
      else
      {
        KiBugCheckData = 197LL;
      }
      v59 = 0LL;
      goto LABEL_86;
    }
    if ( a1 == 76 )
    {
      v33 = &qword_140350128;
      v49 = 1;
      v28 = 1;
      v34 = a3 - (_QWORD)&qword_140350128;
      KiBugCheckData = (unsigned int)a2;
      do
      {
        *v33 = *(__int64 *)((char *)v33 + v34);
        ++v33;
      }
      while ( (__int64)v33 < (__int64)qword_140350148 );
      goto LABEL_114;
    }
    if ( a1 != 80 )
    {
      if ( a1 != 123 )
      {
        if ( a1 != 142 && a1 != 190 )
          goto LABEL_47;
LABEL_102:
        v6 = 0LL;
        if ( !a6 )
        {
          if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
            goto LABEL_113;
          v8 = (__int64)a4;
        }
        if ( a1 != 142 )
        {
          v36 = *(_QWORD *)(v8 + 360);
          v59 = v36;
          if ( KeIsAttachedProcess() && MmIsSessionAddress(v36) )
          {
            if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
            {
              a4 = 0LL;
              v49 = 1;
              v28 = 0;
              goto LABEL_114;
            }
            goto LABEL_47;
          }
        }
LABEL_113:
        a4 = 0LL;
        v28 = 0;
        goto LABEL_114;
      }
      v52 = ((unsigned __int8)a4 & 1) == 0;
      v53 = ((unsigned __int8)a4 & 2) == 0;
LABEL_86:
      a4 = Format;
      v6 = Format;
      v28 = (char)Format;
      goto LABEL_114;
    }
    v29 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
      {
        v48 = 1;
LABEL_57:
        if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
        {
          a4 = Format;
          v6 = Format;
          v28 = (char)Format;
          if ( ((a2 >> 9) & 8) != 0 )
          {
            v31 = 214LL;
            v32 = 205LL;
          }
          else
          {
            v31 = 213LL;
            v32 = 204LL;
          }
          if ( v48 == 1 )
            v31 = v32;
          KiBugCheckData = v31;
        }
        else
        {
          if ( v59 == a2 && MmIsSessionAddress(a2) && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
          {
            KiBugCheckData = 207LL;
          }
          else if ( !v29 )
          {
            KiBugCheckDriver = MmLocateUnloadedDriver(a2);
            if ( KiBugCheckDriver )
              KiBugCheckData = 206LL;
          }
          a4 = 0LL;
          v6 = 0LL;
          v28 = 0;
        }
        goto LABEL_114;
      }
      v8 = (__int64)a4;
    }
    v59 = *(_QWORD *)(v8 + 360);
    v30 = v59;
    qword_140350138 = v59;
    v29 = KiPcToFileHeader(v59, &v62, 0LL, &v48);
    if ( KeIsAttachedProcess()
      && MmIsSessionAddress(v30)
      && KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      v49 = 1;
    }
    goto LABEL_57;
  }
  v59 = a2;
LABEL_47:
  a4 = Format;
  v6 = Format;
  v28 = (char)Format;
LABEL_114:
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140350128, qword_140350130, qword_140350138, qword_140350140);
  v24 = (_OWORD *)KiBugCheckDriver;
  v7 = 0;
  if ( KiBugCheckDriver )
  {
    KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v59 )
  {
    KiDumpParameterImages(pszDest);
    v7 = 0;
  }
  if ( KdPitchDebugger == v7 )
    qword_14033B938 = (__int64)v68;
  if ( a1 == 226 || (_BYTE)KdDebuggerEnabled == v7 && KdEventLoggingEnabled == v7 )
    goto LABEL_138;
  if ( KiHypervisorInitiatedCrashDump != v7 )
    goto LABEL_138;
  refreshed = KdRefreshDebuggerNotPresent();
  v7 = 0;
  if ( refreshed )
  {
    if ( !KdEventLoggingPresent )
      goto LABEL_138;
  }
  CurrentPrcb = v56;
  if ( !*(_WORD *)(v56 + 22758) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      (const void *)qword_140350128,
      (const void *)qword_140350130,
      (const void *)qword_140350138,
      (const void *)qword_140350140);
    v7 = 0;
    if ( KiBugCheckDriver )
    {
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      v7 = 0;
    }
    if ( v28 )
    {
      if ( a4 )
      {
        DbgPrintEx(0x65u, 0, a4);
        v7 = 0;
      }
      if ( v6 )
      {
        DbgPrintEx(0x65u, 0, v6);
        v7 = 0;
      }
    }
    CurrentPrcb = v56;
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
  {
    KiBugCheckDebugBreak(3u);
    v7 = 0;
LABEL_138:
    CurrentPrcb = v56;
  }
LABEL_139:
  _disable();
  KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( v51 == v7 )
  {
    if ( v58 != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump != v7 || (v46 = ((unsigned int)KiBugCheckActive >> 2) & 3, v46 >= 2) )
    {
      while ( 1 )
        off_14033B2E8();
    }
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x20000u;
      IoUpdateBugCheckProgressEnvVariable();
      v7 = 0;
    }
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v46 )
    {
      KiBugCheckDebugBreak(4u);
      v7 = 0;
    }
    v42 = v54;
    v43 = v52;
    v39 = v50;
  }
  else
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && KiHypervisorInitiatedCrashDump == v7 )
    {
      KiSetDebuggerOwner(CurrentPrcb);
      KeCopyAffinityEx((__int64)v67, (unsigned __int16 *)KeActiveProcessors);
      v38 = v56;
      KeRemoveProcessorAffinityEx(v67, *(_DWORD *)(v56 + 36));
      KiSendFreeze(v67, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    else
    {
      v38 = v56;
    }
    IoInitializeBugCheckProgress(a1, a2);
    IoSaveBugCheckProgress(1u);
    v39 = v50;
    v40 = v53;
    if ( v50 )
    {
      v43 = v52;
      v42 = v54;
    }
    else
    {
      if ( CrashdmpDumpBlock && v53 )
        v41 = v57;
      else
        v41 = v57 | 4;
      v42 = v54;
      if ( !v54 )
        v41 |= 2u;
      v43 = v52;
      if ( !v52 )
        v41 |= 1u;
      KiDisplayBlueScreen(v41);
    }
    HvlPrepareForRootCrashdump();
    v7 = 0;
    if ( !v39 )
    {
      KiInvokeBugCheckEntryCallbacks();
      IoSaveBugCheckProgress(2u);
      v7 = 0;
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
    {
      KdEnableDebuggerWithLock(0);
      v7 = 0;
    }
    v44 = *(_OWORD **)(v38 + 25600);
    v24 = v68;
    v25 = 9LL;
    CurrentPrcb = 128LL;
    do
    {
      *v44 = *v24;
      v44[1] = v24[1];
      v44[2] = v24[2];
      v44[3] = v24[3];
      v44[4] = v24[4];
      v44[5] = v24[5];
      v44[6] = v24[6];
      v44 += 8;
      v45 = v24[7];
      v24 += 8;
      *(v44 - 1) = v45;
      --v25;
    }
    while ( v25 );
    *v44 = *v24;
    v44[1] = v24[1];
    v44[2] = v24[2];
    v44[3] = v24[3];
    v44[4] = v24[4];
    if ( v40 )
    {
      if ( a1 == 265 )
        KiMarkBugCheckRegions(qword_140350128, qword_140350130, qword_140350138, qword_140350140);
      KdDecodeDataBlock();
      if ( a1 == 395 )
      {
        if ( qword_140350128 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_173:
          IoWriteCrashDump(
            KiBugCheckData,
            qword_140350128,
            qword_140350130,
            qword_140350138,
            qword_140350140,
            v68,
            (__int64)CurrentThread,
            (__int64)v63,
            v49);
          IoSaveBugCheckProgress(3u);
          v7 = 0;
          goto LABEL_183;
        }
        IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
      }
      if ( a1 == 239 )
      {
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
        if ( (_DWORD)CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((int)&CriticalProcessExceptionData, 48);
          if ( (_WORD)xmmword_140344AF0 )
            IoAddTriageDumpDataBlock(SDWORD2(xmmword_140344AF0), (unsigned __int16)xmmword_140344AF0);
        }
      }
      goto LABEL_173;
    }
  }
LABEL_183:
  if ( VslVsmEnabled == v7 )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    ((void (__fastcall *)(_OWORD *, __int64, __int64))off_14033B4B8[0])(v24, v25, CurrentPrcb);
  }
  IoSaveBugCheckProgress(0x63u);
  if ( !v39 )
    KiScanBugCheckCallbackList();
  off_14033B5C8[0]();
  IoSaveBugCheckProgress(4u);
  if ( v42 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v66[0] = -1LL;
      v66[1] = 0LL;
      v66[2] = 0LL;
      DebugService2(0LL, (__int64)v66, 4u);
    }
    ((void (__fastcall *)(_QWORD))off_14033B5B8[0])(0LL);
    if ( PoPowerDownActionInProgress || (v47 = 3LL, !v43) )
      v47 = 1LL;
    HalReturnToFirmware(v47);
  }
  KiBugCheckDebugBreak(4u);
}
