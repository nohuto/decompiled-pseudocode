/*
 * XREFs of LdrpInitializeProcess @ 0x1800D404C
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     TpInitializePackage @ 0x1800032C0 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180003370 (RtlCreateTagHeap.c)
 *     LdrpInitParallelLoadingSupport @ 0x180006D5C (LdrpInitParallelLoadingSupport.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x18001D2C0 (RtlSetBits.c)
 *     LdrpAllocateModuleEntry @ 0x1800205E0 (LdrpAllocateModuleEntry.c)
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x180021864 (LdrpPrepareModuleForExecution.c)
 *     LdrpInsertDataTableEntry @ 0x180021DDC (LdrpInsertDataTableEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x180022828 (RtlInsertInvertedFunctionTable.c)
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlpInitEnvironmentBlock @ 0x18006B51C (RtlpInitEnvironmentBlock.c)
 *     RtlInitializeCriticalSection @ 0x18006C990 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006D510 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x180072BC0 (LdrpInitializeGraphRecurse.c)
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 *     RtlQueryApplicationKeyOption @ 0x180076B30 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180076C10 (RtlQueryImageFileExecutionOptions.c)
 *     RtlInitializeSListHead @ 0x180076DA0 (RtlInitializeSListHead.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800783E0 (RtlpInitializeThreadActivationContextStack.c)
 *     RtlpInitCurrentDir @ 0x18007AA10 (RtlpInitCurrentDir.c)
 *     RtlInitializeHistoryTable @ 0x18007C980 (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x18007FE88 (RtlpInitParameterBlock.c)
 *     SbObtainTraceHandle @ 0x1800818D8 (SbObtainTraceHandle.c)
 *     LdrpInsertModuleToIndex @ 0x180081A68 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializePolicy @ 0x180082224 (LdrpInitializePolicy.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorValidateImage @ 0x18008772C (LdrpCorValidateImage.c)
 *     LdrpCorProcessImports @ 0x1800877D4 (LdrpCorProcessImports.c)
 *     RtlNormalizeProcessParams @ 0x18008B360 (RtlNormalizeProcessParams.c)
 *     LdrpCorFixupImage @ 0x18008E810 (LdrpCorFixupImage.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A0BC0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A2530 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A2B30 (NtQuerySymbolicLinkObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A3BC0 (InterlockedPushListSList.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpCheckAppDirType @ 0x1800D2988 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2B9C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D4014 (LdrpInitializeNlsInfo.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D6844 (LdrpCaptureCriticalThunks.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0090 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800FA4C8 (RtlpInitializeStackTraceDatabase.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r15
  __int64 ProcessEnvironmentBlock; // rsi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  _WORD *v10; // rdx
  unsigned __int16 v11; // r8
  __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // ebx
  int result; // eax
  char v19; // cl
  BOOL v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rcx
  _DWORD *Config; // rax
  _DWORD *v24; // rbx
  unsigned int v25; // r12d
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // al
  _QWORD *v33; // rcx
  char v34; // al
  unsigned int v35; // eax
  int ImageFileExecutionOptions; // ecx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r9
  __int64 v39; // r8
  __int64 Heap; // rax
  _DWORD *v41; // rbx
  char v42; // al
  void *v43; // rax
  void (__stdcall *v44)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v45; // r8
  __int64 v46; // rcx
  HANDLE v47; // rdx
  __int64 NtSystemRoot; // rax
  __int16 v49; // r12
  __int64 v50; // rax
  __int64 v51; // r12
  int *v52; // rax
  int v53; // edx
  unsigned __int64 v54; // r13
  __m128i v55; // xmm0
  wchar_t *v56; // xmm0_8
  __int64 v57; // rdx
  __int64 v58; // rcx
  wchar_t *v59; // rbx
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // r12
  __int64 v63; // rdx
  __int64 v64; // r12
  __int64 ModuleEntry; // rax
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int64 *v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r10
  __int64 v75; // rdx
  __int64 v76; // rdx
  char v77; // r11
  int v78; // eax
  _WORD *v79; // r9
  _WORD *v80; // rax
  __int16 v81; // r8
  const void *v82; // rcx
  unsigned __int64 v83; // rbx
  unsigned __int64 *v84; // r8
  __int64 v85; // r9
  int inited; // eax
  char v87; // cl
  __int64 v88; // rax
  __int64 *v89; // rbx
  __int64 v90; // r13
  unsigned __int64 *v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // rax
  char v95; // al
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // [rsp+28h] [rbp-410h]
  __int64 v99; // [rsp+28h] [rbp-410h]
  __int64 v100; // [rsp+30h] [rbp-408h]
  __int64 v101; // [rsp+38h] [rbp-400h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3E8h] BYREF
  int v103; // [rsp+54h] [rbp-3E4h]
  char v104; // [rsp+58h] [rbp-3E0h] BYREF
  char v105; // [rsp+59h] [rbp-3DFh] BYREF
  _BYTE v106[6]; // [rsp+5Ah] [rbp-3DEh] BYREF
  __int128 v107; // [rsp+60h] [rbp-3D8h] BYREF
  int v108; // [rsp+70h] [rbp-3C8h] BYREF
  int v109; // [rsp+74h] [rbp-3C4h] BYREF
  int v110; // [rsp+78h] [rbp-3C0h]
  HANDLE v111; // [rsp+80h] [rbp-3B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-3A8h] BYREF
  unsigned __int16 v113; // [rsp+A0h] [rbp-398h] BYREF
  __int16 v114; // [rsp+A2h] [rbp-396h]
  unsigned __int64 v115; // [rsp+A8h] [rbp-390h]
  __int64 v116; // [rsp+B0h] [rbp-388h] BYREF
  __int64 v117; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v118; // [rsp+C0h] [rbp-378h]
  HANDLE v119; // [rsp+C8h] [rbp-370h] BYREF
  __int128 v120; // [rsp+D0h] [rbp-368h] BYREF
  __m128i v121; // [rsp+E0h] [rbp-358h] BYREF
  unsigned int v122; // [rsp+F0h] [rbp-348h]
  unsigned __int64 v123; // [rsp+F8h] [rbp-340h] BYREF
  __int64 v124; // [rsp+100h] [rbp-338h]
  struct _TEB *v125; // [rsp+108h] [rbp-330h]
  __int64 v126; // [rsp+110h] [rbp-328h]
  __int64 v127; // [rsp+118h] [rbp-320h]
  UNICODE_STRING v128; // [rsp+120h] [rbp-318h] BYREF
  HANDLE Handle; // [rsp+130h] [rbp-308h]
  __int64 v130; // [rsp+138h] [rbp-300h] BYREF
  __int64 (__fastcall *v131)(_BYTE *, __int64); // [rsp+140h] [rbp-2F8h] BYREF
  unsigned __int64 v132; // [rsp+148h] [rbp-2F0h] BYREF
  int v133; // [rsp+150h] [rbp-2E8h] BYREF
  const WCHAR *v134; // [rsp+158h] [rbp-2E0h]
  __int64 v135; // [rsp+160h] [rbp-2D8h] BYREF
  __int64 v136; // [rsp+168h] [rbp-2D0h] BYREF
  __int64 v137; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v138; // [rsp+178h] [rbp-2C0h] BYREF
  int v139; // [rsp+180h] [rbp-2B8h] BYREF
  int v140; // [rsp+188h] [rbp-2B0h]
  __int64 v141; // [rsp+190h] [rbp-2A8h]
  int *v142; // [rsp+198h] [rbp-2A0h]
  int v143; // [rsp+1A0h] [rbp-298h]
  __int128 v144; // [rsp+1A8h] [rbp-290h]
  __int64 v145; // [rsp+1C0h] [rbp-278h] BYREF
  int v146; // [rsp+1C8h] [rbp-270h]
  _BYTE v147[56]; // [rsp+1D0h] [rbp-268h] BYREF
  _OWORD v148[15]; // [rsp+210h] [rbp-228h] BYREF
  _QWORD v149[12]; // [rsp+300h] [rbp-138h] BYREF
  _BYTE SystemInformation[4]; // [rsp+360h] [rbp-D8h] BYREF
  unsigned int v151; // [rsp+364h] [rbp-D4h]
  __int64 v152[15]; // [rsp+380h] [rbp-B8h] BYREF
  char v153; // [rsp+3FCh] [rbp-3Ch]
  __int64 retaddr; // [rsp+438h] [rbp+0h]

  v124 = a2;
  v126 = a1;
  v133 = 1441812;
  v134 = L"\\KnownDlls";
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v125 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_18015F3A4 = 1;
  qword_18015F3B8 = (__int64)&qword_18015F3B0;
  qword_18015F3B0 = (__int64)&qword_18015F3B0;
  qword_18015F3C8 = (__int64)&qword_18015F3C0;
  qword_18015F3C0 = (__int64)&qword_18015F3C0;
  qword_18015F3D8 = (__int64)&qword_18015F3D0;
  qword_18015F3D0 = (__int64)&qword_18015F3D0;
  byte_18015F3E8 = 0;
  qword_18015F3F0 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  LdrpInitializeNlsInfo((_QWORD *)ProcessEnvironmentBlock);
  v5 = *(_DWORD *)(ProcessEnvironmentBlock + 184);
  v6 = 0;
  if ( v5 > 1 )
    v6 = 1024;
  SRWLockSpinCount = v6;
  v7 = 0;
  if ( v5 > 1 )
    v7 = 1024;
  ConditionVariableSpinCount = v7;
  v8 = RtlpWaitOnAddressSpinCount;
  if ( v5 == 1 )
    v8 = 0;
  RtlpWaitOnAddressSpinCount = v8;
  if ( NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)192, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
      RtlpIsDrainRequired = 1;
    }
    else if ( (SystemInformation[0] & 2) != 0 )
    {
      RtlpOptimalFlushMethod = 3;
      RtlpIsDrainRequired = 1;
    }
    RtlpClFlushSize = v151;
  }
  v9 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v10 = *(_WORD **)(v9 + 104);
  if ( (*(_BYTE *)(v9 + 8) & 1) == 0 )
    v10 = (_WORD *)((char *)v10 + v9);
  v115 = (unsigned __int64)v10;
  v11 = *(_WORD *)(v9 + 96);
  v113 = v11;
  v114 = v11 + 2;
  if ( v11 >= 8u && *v10 == 92 && v10[1] == 63 && v10[2] == 63 && v10[3] == 92 )
  {
    v113 = v11 - 8;
    v114 = v11 - 6;
    v115 = (unsigned __int64)(v10 + 4);
    *(_WORD *)(v9 + 96) -= 8;
    *(_WORD *)(v9 + 98) -= 8;
    *(_QWORD *)(v9 + 104) += 8LL;
  }
  v110 = 1;
  UseCOR = 0;
  LOBYTE(v103) = 0;
  v109 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v116);
  v12 = v116;
  LdrpAppHeaders = v116;
  v13 = &LdrpHashTable;
  v14 = 32LL;
  do
  {
    v13[1] = v13;
    *v13 = v13;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  RtlImageNtHeaderEx(3, a2, 0LL, &v135);
  v15 = *(_DWORD *)(v135 + 80);
  RtlInsertInvertedFunctionTable(a2, v15);
  RtlCreateInvertedFunctionTableCacheEntry(a2, v15);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() == 1 )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v148[12] = xmmword_18016F360;
  v16 = (_mm_srli_si128((__m128i)xmmword_18016F360, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v16 == 1 )
  {
    LdrpEnforceIntegrityContinuity = 1;
  }
  else
  {
    LdrpEnforceIntegrityContinuity = 0;
    v148[13] = xmmword_18016F360;
    LdrpAuditIntegrityContinuity = 0;
    if ( (_BYTE)v16 != 3 )
      goto LABEL_29;
  }
  LdrpAuditIntegrityContinuity = 1;
LABEL_29:
  v17 = 0;
  result = LdrpInitializeExecutionOptions(&v113, ProcessEnvironmentBlock, a2, &v119, &v111, (__int64)&v136);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_33;
    LODWORD(v98) = v3->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3724,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v98,
      result);
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3771,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  v127 = 0LL;
  v20 = v125->WowTebOffset > 0;
  UseWOW64 = v20;
  if ( v12 && *(_WORD *)(v12 + 24) == 267 && !v20 )
  {
    UseCOR = 1;
    LOBYTE(v12) = 1;
    v103 = v12;
    v17 = 1;
    result = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v12) = v103;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v21 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v139, &v132);
    v22 = v132;
    if ( v21 < 0 )
      v22 = 0LL;
    v132 = v22;
    if ( v22 )
    {
      UseCOR = 1;
      LODWORD(v12) = (unsigned __int8)v12;
      if ( (*(_BYTE *)(v22 + 16) & 1) != 0 )
        LODWORD(v12) = 1;
      v103 = v12;
    }
  }
  LdrpSystemDllBase = v124;
  if ( !UseWOW64 )
    v127 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  v121 = *(__m128i *)(RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32)) + 96);
  Config = 0LL;
  if ( !UseWOW64 && (!UseCOR || !v17) )
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v24 = Config;
  memset(v149, 0, sizeof(v149));
  v25 = 2;
  LODWORD(v149[0]) = 96;
  if ( v24 )
  {
    if ( *v24 >= 0x10u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v24[3];
    if ( *v24 >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v24[4];
    if ( *v24 >= 0x18u && v24[5] )
      RtlpTimeout.QuadPart = -10000LL * (int)v24[5];
    if ( *v24 >= 0x4Cu )
    {
      v26 = v24[18];
      if ( v26 )
      {
        v27 = v26 & 0xFFFF0FFF;
        if ( v27 )
          v25 = v27;
      }
    }
    if ( *v24 >= 0x20u )
    {
      v28 = v149[3];
      if ( *((_QWORD *)v24 + 3) )
        v28 = *((_QWORD *)v24 + 3);
      v149[3] = v28;
    }
    if ( *v24 >= 0x28u )
    {
      v29 = v149[4];
      if ( *((_QWORD *)v24 + 4) )
        v29 = *((_QWORD *)v24 + 4);
      v149[4] = v29;
    }
    if ( *v24 >= 0x38u )
    {
      v30 = v149[5];
      if ( *((_QWORD *)v24 + 6) )
        v30 = *((_QWORD *)v24 + 6);
      v149[5] = v30;
    }
    if ( *v24 >= 0x40u )
    {
      v31 = v149[6];
      if ( *((_QWORD *)v24 + 7) )
        v31 = *((_QWORD *)v24 + 7);
      v149[6] = v31;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v32 = RtlpTimeoutDisable;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    v32 = 1;
  RtlpTimeoutDisable = v32;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v33 = &RtlpStaticDebugInfo;
  do
  {
    *v33 = v33 + 6;
    v33 += 6;
  }
  while ( v33 <= qword_18015DD40 );
  *v33 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_18015DD70, 8);
  ApplicationKeyOption = 0;
  *(_QWORD *)(ProcessEnvironmentBlock + 824) = &FlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  FlsBitMap = 128;
  qword_18015F378 = ProcessEnvironmentBlock + 832;
  *(_DWORD *)(ProcessEnvironmentBlock + 832) |= 1u;
  *(_QWORD *)(ProcessEnvironmentBlock + 816) = ProcessEnvironmentBlock + 808;
  *(_QWORD *)(ProcessEnvironmentBlock + 808) = ProcessEnvironmentBlock + 808;
  TlsBitMap = 64;
  qword_18015F328 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_18015F308 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v34 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v35 = 24;
    v108 = 24;
    if ( LdrpIsSecureProcess )
    {
      ImageFileExecutionOptions = -1073741772;
      ApplicationKeyOption = -1073741772;
    }
    else
    {
      LOBYTE(v100) = 0;
      ImageFileExecutionOptions = RtlQueryImageFileExecutionOptions(
                                    (__int64)&v113,
                                    (__int64)L"StackTraceDatabaseSizeInMb",
                                    4u,
                                    (__int64)&v108,
                                    4,
                                    0LL);
      ApplicationKeyOption = ImageFileExecutionOptions;
      v35 = v108;
    }
    if ( ImageFileExecutionOptions >= 0 && v35 >= 0x18 )
    {
      if ( v35 <= 0x80 )
        v37 = v35 << 20;
      else
        v37 = 0x8000000LL;
    }
    else
    {
      v37 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4060,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v37 >> 20);
    ApplicationKeyOption = RtlpInitializeStackTraceDatabase(0LL, 0LL, v37);
    v34 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v34 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0LL, 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager(&v113);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v148[14] = xmmword_18016F360;
  if ( (((unsigned __int64)xmmword_18016F360 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *(_WORD *)(v116 + 24) == 267 )
  {
    v38 = 0LL;
    v39 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v116 + 72) <= 3u && *(_WORD *)(v116 + 74) < 0x33u )
      v25 |= 0x10000u;
    v38 = *(_QWORD *)(v116 + 120);
    v39 = *(_QWORD *)(v116 + 112);
  }
  Heap = RtlCreateHeap(v25, 0LL, v39, v38, 0LL, (__int64)v149);
  v41 = (_DWORD *)Heap;
  if ( !Heap )
  {
    v42 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_129;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4162,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_128;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  RtlInitializeCriticalSection((__int64)&LdrpEnclaveListLock);
  qword_18015FAB8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v43 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 71200LL);
    RtlpExceptionLog2 = (__int64)v43;
    if ( v43 )
      memset(v43, 0, 0x11620uLL);
  }
  RtlpInitializeThreadActivationContextStack((__int64)v125);
  LdrpHeap = (__int64)v41;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0uLL;
  PrivateLoggerNotificationEntry = 0LL;
  NtdllBaseTag = RtlCreateTagHeap(v41, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (unsigned __int64 *)&g_hUserDiagnosticProvider);
  EtwEventRegister(
    WindowsHeapSnapshotProvider,
    (__int64)RtlpHpStackTraceEtwCallback,
    0LL,
    (unsigned __int64 *)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180159580, v44, v45);
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v118 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v121 = *(__m128i *)(v118 + 96);
  v115 = _mm_srli_si128(v121, 8).m128i_u64[0];
  v47 = v119;
  if ( v119 || v111 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v111,
                             (__int64)v119,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v109,
                             4,
                             v100,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801593E8 && v109 )
    {
      dword_1801593E8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot(v46, (__int64)v47);
  RtlInitUnicodeStringEx((__int64)&v128, NtSystemRoot);
  v49 = v128.Length + 40;
  v50 = RtlAllocateHeap((__int64)v41, 0, (unsigned int)v128.Length + 38 + 2LL);
  if ( !v50 )
    return -1073741801;
  LOWORD(v120) = 0;
  WORD1(v120) = v49;
  *((_QWORD *)&v120 + 1) = v50;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v120, (__int16 *)&v128);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v120, SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v51 = 48LL;
    v140 = 48;
    v141 = 0LL;
    v143 = 64;
    v142 = &v133;
    v144 = 0LL;
    result = ZwOpenDirectoryObject();
    ApplicationKeyOption = result;
    if ( result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( result >= 0 )
      {
        v140 = 48;
        v141 = LdrpKnownDllDirectoryHandle;
        v143 = 64;
        v142 = (int *)&unk_180113A88;
        v144 = 0LL;
        result = ZwOpenSymbolicLinkObject();
        ApplicationKeyOption = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v54 = RtlAllocateHeap((__int64)v41, 0, v51);
            if ( !v54 )
              return -1073741801;
            LdrpKnownDllPath = 0;
            word_18015EF12 = v51;
            qword_18015EF18 = v54;
            result = NtQuerySymbolicLinkObject();
            ApplicationKeyOption = result;
            if ( result >= 0 )
            {
              NtClose(Handle);
              goto LABEL_169;
            }
            if ( result != -1073741789 )
            {
              v19 = LdrpDebugFlags;
              if ( (LdrpDebugFlags & 3) == 0 )
                goto LABEL_33;
              LODWORD(v99) = result;
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4465,
                "LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                v99);
              goto LABEL_32;
            }
            RtlFreeHeap((__int64)v41, 0, v54);
            v51 = v122;
          }
        }
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_33;
        LODWORD(v100) = result;
        v52 = (int *)&unk_180113A88;
        v53 = 4430;
      }
      else
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_33;
        LODWORD(v100) = result;
        v52 = &v133;
        v53 = 4407;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v53,
        "LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v52,
        v100);
LABEL_32:
      result = ApplicationKeyOption;
      v19 = LdrpDebugFlags;
      goto LABEL_33;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4397,
        "LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
    ApplicationKeyOption = 0;
  }
LABEL_169:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v128;
  }
  else
  {
    v55 = *(__m128i *)(v118 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v118 + 56);
    v56 = (wchar_t *)_mm_srli_si128(v55, 8).m128i_u64[0];
    UnicodeString.Buffer = v56;
    if ( !v56 || !UnicodeString.Length || !*v56 )
    {
      v59 = (wchar_t *)RtlAllocateHeap((__int64)v41, 0, 8LL);
      UnicodeString.Buffer = v59;
      if ( !v59 )
      {
        v42 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4513,
            "LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_128:
          v42 = LdrpDebugFlags;
          goto LABEL_129;
        }
        goto LABEL_129;
      }
      v110 = 0;
      v60 = RtlGetNtSystemRoot(v58, v57);
      *(_DWORD *)v59 = *(_DWORD *)v60;
      v59[2] = *(_WORD *)(v60 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v61 = (unsigned __int16)v120;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v61 = 2LL * (unsigned __int16)v120 + 22;
  v62 = v61;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v62 = v61 + 2 * (v128.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v118 + 80) = 0;
  }
  *((_QWORD *)&v107 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v62);
  if ( !*((_QWORD *)&v107 + 1) )
  {
    v42 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4596,
        "LdrpInitializeProcess",
        0,
        "Failed to allocate the system dirs string!\n");
      goto LABEL_128;
    }
LABEL_129:
    if ( (v42 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  LOWORD(v107) = 0;
  WORD1(v107) = v62;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v120);
  v63 = (unsigned __int16)v107;
  *(_WORD *)(*((_QWORD *)&v107 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v107 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v107;
  LdrpSystem32 = v107;
  LOWORD(v63) = v63 - 2;
  LOWORD(LdrpSystem32) = v63;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v107, L"forwarders;");
  }
  if ( v62 > v61 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v128);
    RtlAppendUnicodeToString((unsigned __int16 *)&v107, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v128);
    RtlAppendUnicodeToString((unsigned __int16 *)&v107, L";");
    RtlpSystemDirs = v107;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((__int128 *)v121.m128i_i8, v63);
  v64 = v124;
  RtlImageNtHeaderEx(3, v124, 0LL, &v123);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v66 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v42 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4703,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the system DLL failed\n");
      goto LABEL_128;
    }
    goto LABEL_129;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v67 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v67 + 248) -= qword_18016F2D0;
  v67 += 72LL;
  *(_OWORD *)v67 = v120;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v67, NtDllName);
  v68 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v68 + 48) = v64;
  LdrpInsertDataTableEntry(v68);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v123, v69, v70);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v71 = (_QWORD *)(v66 + 32);
  v72 = qword_18015F3D0;
  if ( *(__int64 **)(qword_18015F3D0 + 8) != &qword_18015F3D0 )
    __fastfail(3u);
  *v71 = qword_18015F3D0;
  *(_QWORD *)(v66 + 40) = &qword_18015F3D0;
  *(_QWORD *)(v72 + 8) = v71;
  qword_18015F3D0 = v66 + 32;
  result = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v99) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4782,
        "LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v99);
      goto LABEL_32;
    }
LABEL_33:
    if ( (v19 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v152);
  memset(v148, 0, 0xC0uLL);
  *(_QWORD *)&v148[1] = v152;
  LODWORD(v148[2]) = 512;
  v148[0] = v121;
  *((_QWORD *)&v148[2] + 1) = &ApplicationKeyOption;
  v73 = LdrpAllocateModuleEntry((__int64)v148);
  v74 = v73;
  if ( !v73 )
  {
    v42 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4803,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the executable failed\n");
      goto LABEL_128;
    }
    goto LABEL_129;
  }
  LdrpImageEntry = v73;
  v75 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v75;
  }
  while ( v75 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v76 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v121;
  *(_DWORD *)(v76 + 104) |= 4u;
  v77 = v103;
  if ( UseCOR )
  {
    v78 = *(_DWORD *)(v76 + 104) | 0x400000;
    *(_DWORD *)(v76 + 104) = v78;
    if ( v77 )
      *(_DWORD *)(v76 + 104) = v78 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v76 + 248) = 0LL;
  v79 = 0LL;
  v80 = (_WORD *)(v121.m128i_i64[1] + v121.m128i_u16[0]);
  if ( v80 )
  {
    while ( (unsigned __int64)v80 > v121.m128i_i64[1] )
    {
      if ( *--v80 == 92 )
      {
        v79 = v80 + 1;
        break;
      }
    }
  }
  if ( v79 )
  {
    v81 = v121.m128i_i16[4] + v121.m128i_i16[0] - (_WORD)v79;
    *(_WORD *)(v76 + 88) = v81;
    if ( v121.m128i_u16[1] - (unsigned int)v121.m128i_u16[0] >= 2 )
      v81 += 2;
    *(_WORD *)(v76 + 90) = v81;
    *(_QWORD *)(v76 + 96) = v79;
  }
  else
  {
    *(_OWORD *)(v76 + 88) = *(_OWORD *)(v74 + 72);
  }
  v82 = *(const void **)(ProcessEnvironmentBlock + 16);
  v83 = v116;
  if ( *(const void **)(v116 + 48) != v82 && !v77 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v82);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v76 = LdrpImageEntry;
  }
  *(_QWORD *)(v76 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v76);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4923,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v83, v84, v85);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v87 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v100) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4960,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v100);
      v87 = LdrpDebugFlags;
    }
    if ( (v87 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v110 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v88 = LdrpAllocateModuleEntry(0LL);
    v89 = (__int64 *)v88;
    if ( !v88 )
    {
      v42 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4983,
          "LdrpInitializeProcess",
          0,
          "Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_128;
      }
      goto LABEL_129;
    }
    *(_DWORD *)(*(_QWORD *)(v88 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v88 + 152) - 52LL) = -1;
    v90 = v136;
    *(_DWORD *)(v88 + 104) |= *(_DWORD *)(v136 + 104);
    *(_QWORD *)(v88 + 248) = *(_QWORD *)(v90 + 248);
    *(_WORD *)(v88 + 110) = 0;
    *(_OWORD *)(v88 + 72) = *(_OWORD *)(v90 + 72);
    *(_OWORD *)(v88 + 88) = *(_OWORD *)(v90 + 88);
    *(_DWORD *)(v88 + 128) = *(_DWORD *)(v90 + 128);
    *(_QWORD *)(v88 + 48) = *(_QWORD *)(v90 + 48);
    LdrpInsertDataTableEntry(v88);
    LdrpLogDllState(v89[6], (__int64)(v89 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v89[6], 0LL, &v123);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex((__int64)v89, v123, v91, v92);
    result = LdrpProcessMappedModule((__int64)v89, 0, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v89[7] = *(_QWORD *)(v90 + 56);
    LdrpLogDllState(v89[6], (__int64)(v89 + 9), 0x14ADu);
    *(_DWORD *)(v89[19] + 56) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v124, 0LL);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      if ( (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(v89[19] + 56) = 9;
        result = ApplicationKeyOption;
      }
    }
    else
    {
      v104 = 0;
      result = LdrpInitializeGraphRecurse(v89[19], 0LL, &v104);
      ApplicationKeyOption = result;
    }
    if ( result < 0 )
      return result;
    v83 = v116;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v119 )
    {
      NtClose(v119);
      v119 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v111 )
    {
      NtClose(v111);
      v111 = 0LL;
    }
    result = LdrpLoadWow64((__int16 *)&v120);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v126);
LABEL_335:
      if ( v119 )
        NtClose(v119);
      if ( v111 )
        NtClose(v111);
      return 0;
    }
    return result;
  }
  v130 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize(&v130);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    if ( (_BYTE)v103 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v125->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v126 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v99) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5210,
        "LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v99);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( v130 )
  {
    v105 = 0;
    result = LdrpInitializeGraphRecurse(*(_QWORD *)(v130 + 152), 0LL, &v105);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v99) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5229,
          "LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v99);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  v131 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v83 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernel32DllName, &v117);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v100) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5388,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v100);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernelbaseDllName, &v117);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v100) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5361,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v100);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v99) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5377,
            "LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v99);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      ApplicationKeyOption = 0;
      v93 = v117;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(
                 v117,
                 word_180113A98,
                 0,
                 (__int64 *)&Kernel32ThreadInitThunkFunction,
                 0,
                 retaddr);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v101) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5275,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            word_180113A98,
            &LdrpKernel32DllName,
            v101);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      LdrGetProcedureAddressForCaller(v117, word_180113AA8, 0, (__int64 *)&v131, 0, retaddr);
      result = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      result = LdrpFindLoadedDll(LdrpKernelbaseDllName, 0, &v137);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v19 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v100) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5343,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v100);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      v93 = *(_QWORD *)(v137 + 48);
    }
    result = LdrGetProcedureAddressForCaller(v93, word_180113AC8, 0, &v138, 0, retaddr);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v99) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5406,
          "LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          v99);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    result = _guard_dispatch_icall_fptr();
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v99) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5414,
          "LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          v99);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v94 = v127;
  if ( v127 && *(_DWORD *)(v127 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v94);
  }
  v95 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v95 = 1;
  RtlpForceCSDebugInfoCreation = v95;
  v96 = v118;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v118 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v96 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **((_DWORD **)&v148[2] + 1) = 0;
  if ( (_BYTE)v103 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    LODWORD(v148[2]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v148);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_316;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v148[2] + 1));
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_316:
    v19 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v99) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5626,
        "LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v99);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  LdrInitState = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  if ( !Kernel32ThreadInitThunkFunction
    || (result = _guard_dispatch_icall_fptr(), ApplicationKeyOption = result, result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory(v131), ApplicationKeyOption = result, result >= 0) )
  {
    LdrpProcessInitContextRecord = v126;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v106[0] = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(
                             *(_QWORD *)(LdrpImageEntry + 152),
                             *((__int64 *)&v148[2] + 1),
                             v106);
    LdrpReleaseLoaderLock(v97, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v148[2] + 1));
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    if ( v153 )
      RtlReleasePath(v152[0]);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v99) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5761,
          "LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v99);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v145 = 72LL;
      v146 = 1;
      memset(v147, 0, sizeof(v147));
      RtlActivateActivationContextUnsafeFast((__int64)&v145, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v145);
    }
    if ( g_ShimsEnabled && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      g_ShimsEnabled = 0;
      LdrUnloadDll(g_pShimEngineModule);
      g_pShimEngineModule = 0LL;
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_335;
  }
  return result;
}
