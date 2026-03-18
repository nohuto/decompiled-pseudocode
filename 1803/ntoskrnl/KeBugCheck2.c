/*
 * XREFs of KeBugCheck2 @ 0x1402429F0
 * Callers:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x1401872C0 (KdRefreshDebuggerNotPresent.c)
 *     KiFilterBugCheckInfo @ 0x14019283C (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x140193188 (KiMarkBugCheckRegions.c)
 *     DebugService2 @ 0x1401B2BA0 (DebugService2.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     HvlLogGuestCrashInformation @ 0x140226B58 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x14022A03C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x14022A0FC (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1402338B4 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x140233B00 (IoSaveBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140233D9C (IoUpdateBugCheckProgressEnvVariable.c)
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x14023E3E8 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x14023E74C (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x14024167C (KiCheckForFreezeExecution.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1402437D8 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x140243B30 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140244050 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402441DC (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140244378 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140244414 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402444E4 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x140244604 (KiScanBugCheckCallbackList.c)
 *     KeSaveSupervisorState @ 0x1402454FC (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x140247800 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402478BC (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140247A48 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x140255FF4 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
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
  __int64 v7; // r15
  signed __int32 v11; // eax
  unsigned int v12; // edx
  signed __int32 v13; // ecx
  bool v14; // r8
  signed __int32 v15; // eax
  unsigned int v16; // edx
  signed __int32 v17; // ecx
  int v18; // ecx
  size_t v19; // r8
  __int128 *v20; // rcx
  __int64 v21; // rdx
  _CONTEXT *Context; // rax
  __int128 v23; // xmm1
  char v24; // di
  _BOOL8 v25; // rcx
  unsigned int v26; // ecx
  const CHAR *v27; // r15
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  unsigned __int64 v35; // r12
  struct _KTHREAD *v36; // rcx
  _KPROCESS *Process; // rcx
  int v38; // edi
  int v39; // eax
  char v40; // r10
  BOOLEAN refreshed; // al
  struct _KPRCB *v42; // rbx
  char v43; // di
  bool v44; // si
  int v45; // ecx
  bool v46; // r13
  unsigned int v47; // eax
  __int64 v48; // rcx
  bool v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int128 *v52; // rax
  __int128 *v53; // rcx
  __int64 v54; // rdx
  __int128 v55; // xmm1
  __int64 v56; // rbx
  int v57; // r11d
  unsigned int v58; // ebx
  __int64 v59; // rcx
  char v60; // [rsp+50h] [rbp-B0h]
  char v61; // [rsp+51h] [rbp-AFh] BYREF
  char v62; // [rsp+52h] [rbp-AEh]
  bool v63; // [rsp+53h] [rbp-ADh]
  bool v64; // [rsp+54h] [rbp-ACh]
  bool v65; // [rsp+55h] [rbp-ABh]
  char v66; // [rsp+56h] [rbp-AAh]
  unsigned int v67; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  const CHAR *v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  int v72; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  unsigned int v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned int Number; // [rsp+9Ch] [rbp-64h]
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+A8h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v80[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v81[88]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v82[77]; // [rsp+190h] [rbp+90h] BYREF
  char pszDest[176]; // [rsp+660h] [rbp+560h] BYREF

  v6 = (const CHAR *)a5;
  v7 = a6;
  pszDest[0] = 0;
  v67 = a1;
  CurrentThread = KeGetCurrentThread();
  v77 = KiBugCheckProgress;
  v65 = IopAutoReboot != 0;
  LOBYTE(v70) = 0;
  v66 = 0;
  v69 = 0LL;
  v71 = 0LL;
  v63 = 1;
  v64 = 1;
  v72 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    v14 = KeQueryCurrentStackInformation(&v74, (char **)&Src, &v78);
    v15 = KiBugCheckActive;
    v16 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v15 & 3) != 3 )
    {
      v17 = v15;
      v15 = _InterlockedCompareExchange(&KiBugCheckActive, v16, v15);
      if ( v15 == v17 )
      {
        if ( v14 )
        {
          if ( v74 > 7 || (v18 = 161, !_bittest(&v18, v74)) )
          {
            v19 = v78 - (_QWORD)Src;
            if ( v78 - (unsigned __int64)Src > 0x6000 )
              v19 = 24576LL;
            memmove(&KiPreBugcheckStackSaveArea, Src, v19);
          }
        }
        v60 = 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v11 = KiBugCheckActive;
    v12 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v11 & 3) != 3 )
    {
      v13 = v11;
      v11 = _InterlockedCompareExchange(&KiBugCheckActive, v12, v11);
      if ( v11 == v13 )
      {
        v60 = 1;
        goto LABEL_8;
      }
    }
  }
  v60 = 0;
LABEL_8:
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0]);
  if ( !BugCheckParameter4 )
    goto LABEL_9;
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
    if ( v67 == 10 )
      DbgPrintEx(
        0x65u,
        0,
        "Memory was accessed during this time that was not properly marked\n"
        "for the boot phase of hibernate! Check the callstack and parameters\n"
        "to find the pages that need to be marked.\n"
        "\n");
    v62 = 1;
    v77 = 0LL;
  }
  else
  {
LABEL_9:
    v62 = 0;
  }
  v20 = v82;
  v21 = 9LL;
  Context = CurrentPrcb->Context;
  do
  {
    *v20 = *(_OWORD *)&Context->P1Home;
    v20[1] = *(_OWORD *)&Context->P3Home;
    v20[2] = *(_OWORD *)&Context->P5Home;
    v20[3] = *(_OWORD *)&Context->ContextFlags;
    v20[4] = *(_OWORD *)&Context->SegGs;
    v20[5] = *(_OWORD *)&Context->Dr1;
    v20[6] = *(_OWORD *)&Context->Dr3;
    v20 += 8;
    v23 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *(v20 - 1) = v23;
    --v21;
  }
  while ( v21 );
  v24 = v60;
  *v20 = *(_OWORD *)&Context->P1Home;
  v20[1] = *(_OWORD *)&Context->P3Home;
  v20[2] = *(_OWORD *)&Context->P5Home;
  v20[3] = *(_OWORD *)&Context->ContextFlags;
  v20[4] = *(_OWORD *)&Context->SegGs;
  if ( !v60 )
  {
    v30 = (__int64)CurrentThread;
LABEL_141:
    v42 = CurrentPrcb;
    goto LABEL_142;
  }
  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD, __int64))off_1403989A8[0])(v20, 0LL, 0LL, 128LL);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(0x60u);
  v25 = (unsigned int)KeIsEmptyAffinityEx(KiNmiInProgress) == 0;
  ((void (__fastcall *)(_BOOL8))off_140398778[0])(v25);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v62 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((int)&KseEngine, 96);
  v26 = v67;
  if ( v67 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_140398988[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_1403ADD08 = a2;
  qword_1403ADD10 = a3;
  if ( v67 == -1073741103 )
    v26 = 195;
  qword_1403ADD18 = a4;
  KiBugCheckData = v26;
  v67 = v26;
  qword_1403ADD20 = a5;
  if ( v26 > 0xCB )
  {
    if ( v26 == 216 )
    {
      KiBugCheckDriver = a2 + 88;
    }
    else if ( v26 == 234 )
    {
      KiBugCheckDriver = a4;
    }
    else
    {
      if ( v26 == 239 )
      {
        LOBYTE(v70) = 1;
        goto LABEL_49;
      }
      if ( v26 == 252 )
        goto LABEL_102;
      if ( v26 != 317 )
      {
        if ( v26 == 335 )
        {
          if ( a3 < 0x100 && a5 )
          {
            v36 = CurrentThread;
            if ( *(_QWORD *)(a5 + 8) )
              v36 = *(struct _KTHREAD **)(a5 + 8);
            CurrentThread = v36;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          v38 = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]) >> 12;
          LOBYTE(v38) = (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
          v70 = v38;
          v24 = v60;
        }
        goto LABEL_49;
      }
      v72 = 8;
    }
LABEL_47:
    v27 = v69;
    v6 = v69;
LABEL_112:
    v30 = (__int64)CurrentThread;
    goto LABEL_113;
  }
  switch ( v26 )
  {
    case 0xCBu:
      v71 = a2;
      goto LABEL_47;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v76, 0LL, &v61);
        if ( v61 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v76, 1LL, &v61) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v76 + 88;
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
      v71 = 0LL;
      goto LABEL_49;
    case 0x4Cu:
      v34 = &qword_1403ADD08;
      LOBYTE(v70) = 1;
      v27 = (const CHAR *)a4;
      v66 = 1;
      v35 = a3 - (_QWORD)&qword_1403ADD08;
      KiBugCheckData = (unsigned int)a2;
      do
      {
        *v34 = *(__int64 *)((char *)v34 + v35);
        ++v34;
      }
      while ( (__int64)v34 < (__int64)qword_1403ADD28 );
      goto LABEL_112;
  }
  if ( v26 != 80 )
  {
    if ( v26 == 123 )
    {
      v63 = (a4 & 1) == 0;
      v64 = (a4 & 2) == 0;
      goto LABEL_49;
    }
    if ( v26 != 142 && v26 != 190 )
      goto LABEL_47;
LABEL_102:
    v6 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || (a4 & 3) != 0 )
        goto LABEL_49;
      v7 = a4;
    }
    if ( v26 != 142 )
    {
      v71 = *(_QWORD *)(v7 + 360);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        LOBYTE(v39) = MmIsSessionAddress(v71);
        if ( !v39 )
        {
LABEL_111:
          v27 = 0LL;
          goto LABEL_112;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          LOBYTE(v70) = 1;
          goto LABEL_111;
        }
      }
    }
LABEL_49:
    v27 = v69;
    v6 = v69;
    goto LABEL_112;
  }
  v6 = 0LL;
  v28 = 0LL;
  if ( !a6 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v61 = 1;
      goto LABEL_58;
    }
    v7 = a4;
  }
  v71 = *(_QWORD *)(v7 + 360);
  qword_1403ADD18 = v71;
  v28 = KiPcToFileHeader(v71, &v76, 0LL, &v61);
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    LOBYTE(v29) = MmIsSessionAddress(v71);
    if ( v29 )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        LOBYTE(v70) = 1;
    }
  }
LABEL_58:
  if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
  {
    v24 = v60;
    v30 = (__int64)CurrentThread;
    v27 = 0LL;
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
    if ( v61 == 1 )
      v31 = v32;
    KiBugCheckData = v31;
    goto LABEL_113;
  }
  if ( v71 == a2 )
  {
    LOBYTE(v33) = MmIsSessionAddress(a2);
    v30 = (__int64)CurrentThread;
    if ( v33 == 1 && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      KiBugCheckData = 207LL;
LABEL_70:
      v24 = v60;
      v27 = 0LL;
      goto LABEL_113;
    }
  }
  else
  {
    v30 = (__int64)CurrentThread;
  }
  if ( v28 )
    goto LABEL_70;
  v24 = v60;
  v27 = 0LL;
  KiBugCheckDriver = MmLocateUnloadedDriver(a2);
  if ( KiBugCheckDriver )
    KiBugCheckData = 206LL;
LABEL_113:
  KiFilterBugCheckInfo(&v67, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(KiBugCheckData, qword_1403ADD08, qword_1403ADD10, qword_1403ADD18, qword_1403ADD20);
  v20 = (__int128 *)KiBugCheckDriver;
  v40 = 0;
  if ( KiBugCheckDriver )
  {
    KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v71 )
  {
    KiDumpParameterImages(pszDest);
    v40 = 0;
  }
  if ( KdPitchDebugger == v40 )
    qword_140396548 = (__int64)v82;
  if ( v67 == 226 || (_BYTE)KdDebuggerEnabled == v40 && KdEventLoggingEnabled == v40 )
    goto LABEL_141;
  if ( KiHypervisorInitiatedCrashDump != v40 )
    goto LABEL_141;
  refreshed = KdRefreshDebuggerNotPresent();
  v20 = 0LL;
  if ( refreshed )
  {
    if ( !KdEventLoggingPresent )
      goto LABEL_141;
  }
  v42 = CurrentPrcb;
  if ( !CurrentPrcb->NmiActive )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      (const void *)qword_1403ADD08,
      (const void *)qword_1403ADD10,
      (const void *)qword_1403ADD18,
      (const void *)qword_1403ADD20);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v66 )
    {
      if ( v27 )
        DbgPrintEx(0x65u, 0, v27);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    KiBugCheckDebugBreak(3u);
LABEL_142:
  _disable();
  KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( v24 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner(v42);
      KeCopyAffinityEx((__int64)v81, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v81, v42->Number);
      KiSendFreeze(v81, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(v67, a2);
    IoSaveBugCheckProgress(1u);
    v43 = v62;
    if ( v62 )
    {
      v44 = v64;
      v49 = v63;
      v46 = v65;
    }
    else
    {
      v44 = v64;
      if ( CrashdmpDumpBlock && v64 )
        v45 = v72;
      else
        v45 = v72 | 4;
      v46 = v65;
      v47 = v45 | 2;
      if ( v65 )
        v47 = v45;
      v48 = v47 | 1;
      v49 = v63;
      if ( v63 )
        v48 = v47;
      KiDisplayBlueScreen(v48);
    }
    HvlPrepareForRootCrashdump();
    if ( !v43 )
    {
      KiInvokeBugCheckEntryCallbacks(v51, v50, 0LL);
      IoSaveBugCheckProgress(2u);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
      IoSaveBugCheckProgress(5u);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v52 = (__int128 *)v42->Context;
    v53 = v82;
    v54 = 9LL;
    do
    {
      *v52 = *v53;
      v52[1] = v53[1];
      v52[2] = v53[2];
      v52[3] = v53[3];
      v52[4] = v53[4];
      v52[5] = v53[5];
      v52[6] = v53[6];
      v52 += 8;
      v55 = v53[7];
      v53 += 8;
      *(v52 - 1) = v55;
      --v54;
    }
    while ( v54 );
    *v52 = *v53;
    v52[1] = v53[1];
    v52[2] = v53[2];
    v52[3] = v53[3];
    v52[4] = v53[4];
    if ( v44 )
    {
      if ( v67 == 265 )
      {
        KiMarkBugCheckRegions(qword_1403ADD08, qword_1403ADD10, qword_1403ADD18, qword_1403ADD20);
        if ( qword_1403ADD20 == 47 )
        {
          v56 = qword_1403ADD18;
          if ( MiIsAddressValid(qword_1403ADD18 + 1544) )
            IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 1544), 4096);
        }
      }
      KdDecodeDataBlock();
      v57 = v67;
      if ( v67 == 395 )
      {
        if ( qword_1403ADD08 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_177:
          IoWriteCrashDump(
            KiBugCheckData,
            qword_1403ADD08,
            qword_1403ADD10,
            qword_1403ADD18,
            qword_1403ADD20,
            v82,
            v30,
            (__int64)v77,
            v70);
          IoSaveBugCheckProgress(3u);
          goto LABEL_187;
        }
        IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
        v57 = v67;
      }
      if ( v57 == 239 )
      {
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
        if ( (_DWORD)CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((int)&CriticalProcessExceptionData, 48);
          if ( (_WORD)xmmword_1403A1C90 )
            IoAddTriageDumpDataBlock(SDWORD2(xmmword_1403A1C90), (unsigned __int16)xmmword_1403A1C90);
        }
      }
      goto LABEL_177;
    }
  }
  else
  {
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (v58 = ((unsigned int)KiBugCheckActive >> 2) & 3, v58 >= 2) )
    {
      while ( 1 )
        ((void (__fastcall *)(__int128 *))off_1403986B8)(v20);
    }
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x20000u;
      IoUpdateBugCheckProgressEnvVariable();
    }
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( v58 )
      KiBugCheckDebugBreak(4u);
    v43 = v62;
    v49 = v63;
    v46 = v65;
  }
LABEL_187:
  if ( !VslVsmEnabled )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    off_140398888[0]();
  }
  IoSaveBugCheckProgress(0x63u);
  if ( !v43 )
    KiScanBugCheckCallbackList();
  off_140398998[0]();
  IoSaveBugCheckProgress(4u);
  if ( v46 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v80[0] = -1LL;
      v80[2] = 0LL;
      v80[1] = 0LL;
      DebugService2(0LL, (__int64)v80, 4u);
    }
    ((void (__fastcall *)(_QWORD))off_140398988[0])(0LL);
    if ( PoPowerDownActionInProgress || (v59 = 3LL, !v49) )
      v59 = 1LL;
    HalReturnToFirmware(v59);
  }
  KiBugCheckDebugBreak(4u);
}
