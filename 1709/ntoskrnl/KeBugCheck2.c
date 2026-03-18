/*
 * XREFs of KeBugCheck2 @ 0x1402052B0
 * Callers:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeQueryCurrentStackInformation @ 0x1400D9080 (KeQueryCurrentStackInformation.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x14015D520 (KdRefreshDebuggerNotPresent.c)
 *     KiFilterBugCheckInfo @ 0x14016875C (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x1401690CC (KiMarkBugCheckRegions.c)
 *     DebugService2 @ 0x140188F40 (DebugService2.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvlLogGuestCrashInformation @ 0x1401E9994 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x1401EC99C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1401ECA5C (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1401F652C (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1401F67F0 (IoSaveBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F6A8C (IoUpdateBugCheckProgressEnvVariable.c)
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x140201310 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x14020166C (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x140203DC0 (KiCheckForFreezeExecution.c)
 *     KeBugCheckUnicodeToAnsi @ 0x140206040 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x140206350 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140206534 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140206870 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1402069FC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140206A98 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140206B68 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x140206C88 (KiScanBugCheckCallbackList.c)
 *     KiSendFreeze @ 0x140209BCC (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140209C84 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140209E18 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x140219388 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rsi
  char v7; // r10
  __int64 v8; // r15
  __int64 v12; // r9
  signed __int32 v13; // eax
  unsigned int v14; // edx
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
  char v27; // di
  _BOOL8 v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // r12
  char v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  BOOL IsSessionAddress; // eax
  __int64 *v36; // rcx
  unsigned __int64 v37; // r12
  struct _KTHREAD *v38; // rcx
  _KPROCESS *Process; // rcx
  int v40; // edi
  BOOLEAN refreshed; // al
  __int64 v42; // rdi
  char v43; // bl
  bool v44; // si
  int v45; // ecx
  bool v46; // r13
  unsigned int v47; // eax
  __int64 v48; // rcx
  bool v49; // r15
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  int v52; // r11d
  unsigned int v53; // ebx
  __int64 v54; // rcx
  char v55; // [rsp+51h] [rbp-AFh]
  char v56; // [rsp+52h] [rbp-AEh] BYREF
  char v57; // [rsp+53h] [rbp-ADh]
  bool v58; // [rsp+54h] [rbp-ACh]
  bool v59; // [rsp+55h] [rbp-ABh]
  bool v60; // [rsp+56h] [rbp-AAh]
  unsigned int v61; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  const CHAR *v63; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+90h] [rbp-70h]
  unsigned int v68; // [rsp+94h] [rbp-6Ch] BYREF
  int v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+A8h] [rbp-58h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v74[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v75[88]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v76[77]; // [rsp+190h] [rbp+90h] BYREF
  char pszDest[176]; // [rsp+660h] [rbp+560h] BYREF

  v6 = (const CHAR *)a5;
  v7 = 0;
  v8 = a6;
  pszDest[0] = 0;
  v61 = a1;
  v71 = KiBugCheckProgress;
  v12 = 1LL;
  v60 = IopAutoReboot != 0;
  v58 = 1;
  v59 = 1;
  LOBYTE(v64) = 0;
  v63 = 0LL;
  v66 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v67 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    v16 = KeQueryCurrentStackInformation(&v68, (unsigned __int64 *)&Src, &v72);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v17 & 3) == 3 )
      {
        v7 = 0;
        v12 = 1LL;
        goto LABEL_12;
      }
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
    }
    while ( v17 != v19 );
    v7 = 0;
    if ( v16 )
    {
      if ( v68 > 7 || (v21 = 161, !_bittest(&v21, v68)) )
      {
        v22 = v72 - (_QWORD)Src;
        if ( v72 - (unsigned __int64)Src > 0x6000 )
          v22 = 24576LL;
        memmove(&KiPreBugcheckStackSaveArea, Src, v22);
        v7 = 0;
      }
    }
    v12 = 1LL;
LABEL_22:
    v55 = 1;
  }
  else
  {
    v13 = KiBugCheckActive;
    v14 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v13 & 3) != 3 )
    {
      v15 = v13;
      v13 = _InterlockedCompareExchange(&KiBugCheckActive, v14, v13);
      if ( v13 == v15 )
        goto LABEL_22;
    }
LABEL_12:
    v55 = 0;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v65 = CurrentPrcb;
  v69 = *(_DWORD *)(CurrentPrcb + 36);
  if ( !BugCheckParameter4 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(BugCheckParameter4 + 3) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
      "Due to verification temporarily enabled by Po during this time,\n"
      "regular bugcheck processing may not work.\n"
      "\n");
    if ( v61 == 10 )
      DbgPrintEx(
        0x65u,
        0,
        "Memory was accessed during this time that was not properly marked\n"
        "for the boot phase of hibernate! Check the callstack and parameters\n"
        "to find the pages that need to be marked.\n"
        "\n");
    CurrentPrcb = v65;
    v12 = 1LL;
    v7 = 0;
    v57 = 1;
    v71 = 0LL;
  }
  else
  {
LABEL_14:
    v57 = 0;
  }
  v23 = *(_OWORD **)(CurrentPrcb + 25280);
  v24 = v76;
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
  v27 = v55;
  *v24 = *v23;
  v24[1] = v23[1];
  v24[2] = v23[2];
  v24[3] = v23[3];
  v24[4] = v23[4];
  if ( !v55 )
  {
    v31 = (__int64)CurrentThread;
    goto LABEL_140;
  }
  off_140353608[0]();
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(0x60u);
  v28 = (unsigned int)KeIsEmptyAffinityEx(KiNmiInProgress) == 0;
  ((void (__fastcall *)(_BOOL8))off_1403533D8[0])(v28);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v57 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((int)&KseEngine, 96);
  v29 = v61;
  if ( v61 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_1403535E8[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_140370C68 = a2;
  qword_140370C70 = a3;
  if ( v61 == -1073741103 )
    v29 = 195;
  qword_140370C78 = a4;
  KiBugCheckData = v29;
  v61 = v29;
  qword_140370C80 = a5;
  if ( v29 > 0xCB )
  {
    switch ( v29 )
    {
      case 0xD8u:
        KiBugCheckDriver = a2 + 88;
        goto LABEL_113;
      case 0xEAu:
        KiBugCheckDriver = a4;
        goto LABEL_113;
      case 0xEFu:
        LOBYTE(v64) = 1;
        goto LABEL_113;
    }
    if ( v29 != 252 )
    {
      if ( v29 == 317 )
      {
        v67 = 8;
      }
      else if ( v29 == 335 )
      {
        if ( a3 < 0x100 && a5 )
        {
          v38 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v38 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v38;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        v40 = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]) >> 12;
        LOBYTE(v40) = (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
        v64 = v40;
        v27 = v55;
      }
      goto LABEL_113;
    }
    goto LABEL_48;
  }
  switch ( v29 )
  {
    case 0xCBu:
      v66 = a2;
      goto LABEL_113;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v70, 0LL, &v56);
        if ( v56 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v70, 1LL, &v56) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v70 + 88;
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
      v66 = 0LL;
      goto LABEL_113;
    case 0x4Cu:
      v36 = &qword_140370C68;
      LOBYTE(v64) = 1;
      v32 = 1;
      v37 = a3 - (_QWORD)&qword_140370C68;
      KiBugCheckData = (unsigned int)a2;
      do
      {
        *v36 = *(__int64 *)((char *)v36 + v37);
        ++v36;
      }
      while ( (__int64)v36 < (__int64)&KiHardwareTrigger );
      goto LABEL_114;
  }
  if ( v29 != 80 )
  {
    if ( v29 == 123 )
    {
      v58 = (a4 & 1) == 0;
      v59 = (a4 & 2) == 0;
      goto LABEL_113;
    }
    if ( v29 != 142 && v29 != 190 )
      goto LABEL_113;
LABEL_48:
    if ( a6 )
    {
LABEL_52:
      if ( v29 != 142 )
      {
        v66 = *(_QWORD *)(v8 + 360);
        if ( KeGetCurrentThread()->ApcStateIndex == 1
          && MmIsSessionAddress(v66)
          && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          LOBYTE(v64) = 1;
        }
      }
      goto LABEL_113;
    }
    if ( a4 && (a4 & 3) == 0 )
    {
      v8 = a4;
      goto LABEL_52;
    }
LABEL_113:
    a4 = (__int64)v63;
    v32 = (char)v63;
    v6 = v63;
LABEL_114:
    v31 = (__int64)CurrentThread;
    goto LABEL_115;
  }
  v6 = 0LL;
  v30 = 0LL;
  if ( !a6 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v56 = 1;
      goto LABEL_66;
    }
    v8 = a4;
  }
  v66 = *(_QWORD *)(v8 + 360);
  qword_140370C78 = v66;
  v30 = KiPcToFileHeader(v66, &v70, 0LL, &v56);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    && MmIsSessionAddress(v66)
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    LOBYTE(v64) = 1;
  }
LABEL_66:
  if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
  {
    v27 = v55;
    v31 = (__int64)CurrentThread;
    a4 = 0LL;
    v32 = 0;
    if ( ((a2 >> 9) & 8) != 0 )
    {
      v33 = 214LL;
      v34 = 205LL;
    }
    else
    {
      v33 = 213LL;
      v34 = 204LL;
    }
    if ( v56 == 1 )
      v33 = v34;
    KiBugCheckData = v33;
    goto LABEL_115;
  }
  if ( v66 != a2 )
  {
    v31 = (__int64)CurrentThread;
    goto LABEL_80;
  }
  IsSessionAddress = MmIsSessionAddress(a2);
  v31 = (__int64)CurrentThread;
  if ( !IsSessionAddress || (unsigned __int64)CurrentThread->Teb - 1 <= 0xFFFF7FFFFFFFFFFEuLL )
  {
LABEL_80:
    if ( !v30 )
    {
      v27 = v55;
      a4 = 0LL;
      KiBugCheckDriver = MmLocateUnloadedDriver(a2);
      v32 = 0;
      if ( KiBugCheckDriver )
        KiBugCheckData = 206LL;
      goto LABEL_115;
    }
    goto LABEL_78;
  }
  KiBugCheckData = 207LL;
LABEL_78:
  v27 = v55;
  a4 = 0LL;
  v32 = 0;
LABEL_115:
  KiFilterBugCheckInfo(&v61, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140370C68, qword_140370C70, qword_140370C78, qword_140370C80);
  v24 = (_OWORD *)KiBugCheckDriver;
  v7 = 0;
  if ( KiBugCheckDriver )
  {
    KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v66 )
  {
    KiDumpParameterImages(pszDest);
    v7 = 0;
  }
  if ( KdPitchDebugger == v7 )
    qword_140353968 = (__int64)v76;
  if ( v61 == 226
    || (_BYTE)KdDebuggerEnabled == v7 && KdEventLoggingEnabled == v7
    || KiHypervisorInitiatedCrashDump != v7
    || (refreshed = KdRefreshDebuggerNotPresent(), v7 = 0, refreshed) && !KdEventLoggingPresent )
  {
    CurrentPrcb = v65;
  }
  else
  {
    CurrentPrcb = v65;
    if ( !*(_WORD *)(v65 + 22758) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140370C68,
        (const void *)qword_140370C70,
        (const void *)qword_140370C78,
        (const void *)qword_140370C80);
      v7 = 0;
      if ( KiBugCheckDriver )
      {
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
        v7 = 0;
      }
      if ( v32 )
      {
        if ( a4 )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)a4);
          v7 = 0;
        }
        if ( v6 )
        {
          DbgPrintEx(0x65u, 0, v6);
          v7 = 0;
        }
      }
      CurrentPrcb = v65;
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      KiBugCheckDebugBreak(3u);
      CurrentPrcb = v65;
      v7 = 0;
    }
  }
  v12 = 1LL;
LABEL_140:
  _disable();
  KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( v27 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && KiHypervisorInitiatedCrashDump == v7 )
    {
      KiSetDebuggerOwner(CurrentPrcb);
      KeCopyAffinityEx((__int64)v75, (unsigned __int16 *)KeActiveProcessors);
      v42 = v65;
      KeRemoveProcessorAffinityEx(v75, *(_DWORD *)(v65 + 36));
      KiSendFreeze(v75, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    else
    {
      v42 = v65;
    }
    IoInitializeBugCheckProgress(v61, a2);
    IoSaveBugCheckProgress(1u);
    v43 = v57;
    v44 = v59;
    if ( v57 )
    {
      v49 = v58;
      v46 = v60;
    }
    else
    {
      if ( CrashdmpDumpBlock && v59 )
        v45 = v67;
      else
        v45 = v67 | 4;
      v46 = v60;
      v47 = v45 | 2;
      if ( v60 )
        v47 = v45;
      v48 = v47 | 1;
      v49 = v58;
      if ( v58 )
        v48 = v47;
      KiDisplayBlueScreen(v48, 0LL);
    }
    HvlPrepareForRootCrashdump();
    v7 = 0;
    if ( !v43 )
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
    v50 = *(_OWORD **)(v42 + 25280);
    v24 = v76;
    v25 = 9LL;
    CurrentPrcb = 128LL;
    do
    {
      *v50 = *v24;
      v50[1] = v24[1];
      v50[2] = v24[2];
      v50[3] = v24[3];
      v50[4] = v24[4];
      v50[5] = v24[5];
      v50[6] = v24[6];
      v50 += 8;
      v51 = v24[7];
      v24 += 8;
      *(v50 - 1) = v51;
      --v25;
    }
    while ( v25 );
    *v50 = *v24;
    v50[1] = v24[1];
    v50[2] = v24[2];
    v50[3] = v24[3];
    v50[4] = v24[4];
    if ( v44 )
    {
      if ( v61 == 265 )
        KiMarkBugCheckRegions(qword_140370C68, qword_140370C70, qword_140370C78, qword_140370C80);
      KdDecodeDataBlock();
      v52 = v61;
      if ( v61 == 395 )
      {
        if ( qword_140370C68 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_176:
          IoWriteCrashDump(
            (unsigned int)KiBugCheckData,
            qword_140370C68,
            qword_140370C70,
            qword_140370C78,
            qword_140370C80,
            v76,
            v31,
            (__int64)v71,
            v64);
          IoSaveBugCheckProgress(3u);
          v7 = 0;
          goto LABEL_186;
        }
        IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
        v52 = v61;
      }
      if ( v52 == 239 )
      {
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
        if ( (_DWORD)CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((int)&CriticalProcessExceptionData, 48);
          if ( (_WORD)xmmword_14035E650 )
            IoAddTriageDumpDataBlock(SDWORD2(xmmword_14035E650), (unsigned __int16)xmmword_14035E650);
        }
      }
      goto LABEL_176;
    }
  }
  else
  {
    if ( v69 != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump != v7 || (v53 = ((unsigned int)KiBugCheckActive >> 2) & 3, v53 >= 2) )
    {
      while ( 1 )
        ((void (__fastcall *)(_OWORD *, __int64, __int64, __int64))off_140353318)(v24, v25, CurrentPrcb, v12);
    }
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x20000u;
      IoUpdateBugCheckProgressEnvVariable();
      v7 = 0;
    }
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v53 )
    {
      KiBugCheckDebugBreak(4u);
      v7 = 0;
    }
    v46 = v60;
    v49 = v58;
    v43 = v57;
  }
LABEL_186:
  if ( VslVsmEnabled == v7 )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    ((void (__fastcall *)(_OWORD *, __int64, __int64))off_1403534E8[0])(v24, v25, CurrentPrcb);
  }
  IoSaveBugCheckProgress(0x63u);
  if ( !v43 )
    KiScanBugCheckCallbackList();
  off_1403535F8[0]();
  IoSaveBugCheckProgress(4u);
  if ( v46 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v74[0] = -1LL;
      v74[1] = 0LL;
      v74[2] = 0LL;
      DebugService2(0LL, (__int64)v74, 4u);
    }
    ((void (__fastcall *)(_QWORD))off_1403535E8[0])(0LL);
    if ( PoPowerDownActionInProgress || (v54 = 3LL, !v49) )
      v54 = 1LL;
    HalReturnToFirmware(v54);
  }
  KiBugCheckDebugBreak(4u);
}
