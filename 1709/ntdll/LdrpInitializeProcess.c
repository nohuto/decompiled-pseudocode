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

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
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
  PIMAGE_NT_HEADERS v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // ebx
  int result; // eax
  char v18; // cl
  BOOL v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  _DWORD *Config; // rax
  _DWORD *v23; // rbx
  ULONG v24; // r12d
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  _QWORD *v32; // rcx
  char v33; // al
  unsigned int v34; // eax
  int ImageFileExecutionOptions; // ecx
  unsigned __int64 v36; // rbx
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  PVOID Heap; // rax
  void *v40; // rbx
  char v41; // al
  PVOID v42; // rax
  void (__cdecl *v43)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v44; // r8
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v46; // r12
  wchar_t *v47; // rax
  SIZE_T v48; // r12
  int *v49; // rax
  int v50; // edx
  wchar_t *v51; // r13
  __m128i v52; // xmm0
  wchar_t *v53; // xmm0_8
  wchar_t *v54; // rbx
  PWSTR v55; // rax
  unsigned __int64 Length; // rbx
  SIZE_T v57; // r12
  __int64 v58; // rdx
  PVOID v59; // r12
  char *ModuleEntry; // rax
  char *v61; // rbx
  _UNICODE_STRING *v62; // rcx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  char *v66; // rax
  char *v67; // r10
  __int64 v68; // rdx
  __int64 v69; // rdx
  char v70; // r11
  int v71; // eax
  wchar_t *v72; // r9
  wchar_t *v73; // rax
  __int16 v74; // r8
  void *v75; // rcx
  PIMAGE_NT_HEADERS v76; // rbx
  int inited; // eax
  char v78; // cl
  char *v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r13
  PVOID v82; // rcx
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // rax
  __int64 v86; // rcx
  PVOID Parameters; // [rsp+28h] [rbp-410h]
  PVOID Parametersa; // [rsp+28h] [rbp-410h]
  __int64 v89; // [rsp+30h] [rbp-408h]
  __int64 v90; // [rsp+38h] [rbp-400h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3E8h] BYREF
  int v92; // [rsp+54h] [rbp-3E4h]
  char v93; // [rsp+58h] [rbp-3E0h] BYREF
  char v94; // [rsp+59h] [rbp-3DFh] BYREF
  _BYTE v95[6]; // [rsp+5Ah] [rbp-3DEh] BYREF
  _UNICODE_STRING v96; // [rsp+60h] [rbp-3D8h] BYREF
  int v97; // [rsp+70h] [rbp-3C8h] BYREF
  int v98; // [rsp+74h] [rbp-3C4h] BYREF
  int v99; // [rsp+78h] [rbp-3C0h]
  HANDLE v100; // [rsp+80h] [rbp-3B8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-3A8h] BYREF
  unsigned __int16 v102; // [rsp+A0h] [rbp-398h] BYREF
  __int16 v103; // [rsp+A2h] [rbp-396h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-390h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-388h] BYREF
  PVOID DllHandle; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v107; // [rsp+C0h] [rbp-378h]
  HANDLE Handle; // [rsp+C8h] [rbp-370h] BYREF
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-368h] BYREF
  _UNICODE_STRING ImagePathName; // [rsp+E0h] [rbp-358h] BYREF
  ULONG ReturnedLength; // [rsp+F0h] [rbp-348h] BYREF
  PIMAGE_NT_HEADERS v112; // [rsp+F8h] [rbp-340h] BYREF
  PVOID BaseOfImage; // [rsp+100h] [rbp-338h]
  struct _TEB *v114; // [rsp+108h] [rbp-330h]
  __int64 v115; // [rsp+110h] [rbp-328h]
  __int64 v116; // [rsp+118h] [rbp-320h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-318h] BYREF
  HANDLE LinkHandle; // [rsp+130h] [rbp-308h] BYREF
  _QWORD *v119; // [rsp+138h] [rbp-300h] BYREF
  PVOID ProcedureAddress; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 v121; // [rsp+148h] [rbp-2F0h] BYREF
  int v122; // [rsp+150h] [rbp-2E8h] BYREF
  const WCHAR *v123; // [rsp+158h] [rbp-2E0h]
  PIMAGE_NT_HEADERS v124; // [rsp+160h] [rbp-2D8h] BYREF
  __int64 v125; // [rsp+168h] [rbp-2D0h] BYREF
  char *v126; // [rsp+170h] [rbp-2C8h] BYREF
  PVOID v127; // [rsp+178h] [rbp-2C0h] BYREF
  unsigned int v128; // [rsp+180h] [rbp-2B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+188h] [rbp-2B0h] BYREF
  __int64 v130; // [rsp+1C0h] [rbp-278h] BYREF
  int v131; // [rsp+1C8h] [rbp-270h]
  _BYTE v132[56]; // [rsp+1D0h] [rbp-268h] BYREF
  _OWORD v133[15]; // [rsp+210h] [rbp-228h] BYREF
  _QWORD v134[12]; // [rsp+300h] [rbp-138h] BYREF
  _BYTE SystemInformation[4]; // [rsp+360h] [rbp-D8h] BYREF
  unsigned int v136; // [rsp+364h] [rbp-D4h]
  PWSTR Path[15]; // [rsp+380h] [rbp-B8h] BYREF
  char v138; // [rsp+3FCh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+438h] [rbp+0h]

  BaseOfImage = a2;
  v115 = a1;
  v122 = 1441812;
  v123 = L"\\KnownDlls";
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v114 = v3;
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
  LdrpInitializeNlsInfo((PUSHORT *)ProcessEnvironmentBlock);
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
  if ( NtQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0 )
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
    RtlpClFlushSize = v136;
  }
  v9 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v10 = *(_WORD **)(v9 + 104);
  if ( (*(_BYTE *)(v9 + 8) & 1) == 0 )
    v10 = (_WORD *)((char *)v10 + v9);
  v104 = (unsigned __int64)v10;
  v11 = *(_WORD *)(v9 + 96);
  v102 = v11;
  v103 = v11 + 2;
  if ( v11 >= 8u && *v10 == 92 && v10[1] == 63 && v10[2] == 63 && v10[3] == 92 )
  {
    v102 = v11 - 8;
    v103 = v11 - 6;
    v104 = (unsigned __int64)(v10 + 4);
    *(_WORD *)(v9 + 96) -= 8;
    *(_WORD *)(v9 + 98) -= 8;
    *(_QWORD *)(v9 + 104) += 8LL;
  }
  v99 = 1;
  UseCOR = 0;
  LOBYTE(v92) = 0;
  v98 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v12 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
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
  RtlImageNtHeaderEx(3u, a2, 0LL, &v124);
  RtlInsertInvertedFunctionTable((unsigned __int64)a2, v124->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() == 1 )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v133[12] = LdrSystemDllInitBlock.MitigationOptionsMap;
  v15 = (_mm_srli_si128((__m128i)LdrSystemDllInitBlock.MitigationOptionsMap, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v15 == 1 )
  {
    LdrpEnforceIntegrityContinuity = 1;
  }
  else
  {
    LdrpEnforceIntegrityContinuity = 0;
    v133[13] = LdrSystemDllInitBlock.MitigationOptionsMap;
    LdrpAuditIntegrityContinuity = 0;
    if ( (_BYTE)v15 != 3 )
      goto LABEL_29;
  }
  LdrpAuditIntegrityContinuity = 1;
LABEL_29:
  v16 = 0;
  result = LdrpInitializeExecutionOptions(&v102, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v100, (__int64)&v125);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_33;
    LODWORD(Parameters) = v3->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3724,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Parameters,
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
  v116 = 0LL;
  v19 = v114->WowTebOffset > 0;
  UseWOW64 = v19;
  if ( v12 && v12->OptionalHeader.Magic == 267 && !v19 )
  {
    UseCOR = 1;
    LOBYTE(v12) = 1;
    v92 = (int)v12;
    v16 = 1;
    result = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v12) = v92;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v128, &v121);
    v21 = v121;
    if ( v20 < 0 )
      v21 = 0LL;
    v121 = v21;
    if ( v21 )
    {
      UseCOR = 1;
      LODWORD(v12) = (unsigned __int8)v12;
      if ( (*(_BYTE *)(v21 + 16) & 1) != 0 )
        LODWORD(v12) = 1;
      v92 = (int)v12;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    v116 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  ImagePathName = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32))->ImagePathName;
  Config = 0LL;
  if ( !UseWOW64 && (!UseCOR || !v16) )
    Config = LdrImageDirectoryEntryToLoadConfig(*(void **)(ProcessEnvironmentBlock + 16));
  v23 = Config;
  memset(v134, 0, sizeof(v134));
  v24 = 2;
  LODWORD(v134[0]) = 96;
  if ( v23 )
  {
    if ( *v23 >= 0x10u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v23[3];
    if ( *v23 >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v23[4];
    if ( *v23 >= 0x18u && v23[5] )
      RtlpTimeout.QuadPart = -10000LL * (int)v23[5];
    if ( *v23 >= 0x4Cu )
    {
      v25 = v23[18];
      if ( v25 )
      {
        v26 = v25 & 0xFFFF0FFF;
        if ( v26 )
          v24 = v26;
      }
    }
    if ( *v23 >= 0x20u )
    {
      v27 = v134[3];
      if ( *((_QWORD *)v23 + 3) )
        v27 = *((_QWORD *)v23 + 3);
      v134[3] = v27;
    }
    if ( *v23 >= 0x28u )
    {
      v28 = v134[4];
      if ( *((_QWORD *)v23 + 4) )
        v28 = *((_QWORD *)v23 + 4);
      v134[4] = v28;
    }
    if ( *v23 >= 0x38u )
    {
      v29 = v134[5];
      if ( *((_QWORD *)v23 + 6) )
        v29 = *((_QWORD *)v23 + 6);
      v134[5] = v29;
    }
    if ( *v23 >= 0x40u )
    {
      v30 = v134[6];
      if ( *((_QWORD *)v23 + 7) )
        v30 = *((_QWORD *)v23 + 7);
      v134[6] = v30;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v31 = RtlpTimeoutDisable;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    v31 = 1;
  RtlpTimeoutDisable = v31;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v32 = &RtlpStaticDebugInfo;
  do
  {
    *v32 = v32 + 6;
    v32 += 6;
  }
  while ( v32 <= qword_18015DD40 );
  *v32 = 0LL;
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
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v33 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v34 = 24;
    v97 = 24;
    if ( LdrpIsSecureProcess )
    {
      ImageFileExecutionOptions = -1073741772;
      ApplicationKeyOption = -1073741772;
    }
    else
    {
      LOBYTE(v89) = 0;
      ImageFileExecutionOptions = RtlQueryImageFileExecutionOptions(
                                    (__int64)&v102,
                                    (__int64)L"StackTraceDatabaseSizeInMb",
                                    4LL,
                                    (__int64)&v97,
                                    4,
                                    0LL);
      ApplicationKeyOption = ImageFileExecutionOptions;
      v34 = v97;
    }
    if ( ImageFileExecutionOptions >= 0 && v34 >= 0x18 )
    {
      if ( v34 <= 0x80 )
        v36 = v34 << 20;
      else
        v36 = 0x8000000LL;
    }
    else
    {
      v36 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4060,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v36 >> 20);
    ApplicationKeyOption = RtlpInitializeStackTraceDatabase(0LL, 0LL, v36);
    v33 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v33 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager(&v102);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v133[14] = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( UseWOW64 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapCommit = 0LL;
    SizeOfHeapReserve = 0LL;
  }
  else
  {
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v24 |= 0x10000u;
    }
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
  }
  Heap = RtlCreateHeap(v24, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, v134);
  v40 = Heap;
  if ( !Heap )
  {
    v41 = LdrpDebugFlags;
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
  RtlInitializeCriticalSection(&LdrpEnclaveListLock);
  qword_18015FAB8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v42 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
    RtlpExceptionLog2 = (__int64)v42;
    if ( v42 )
      memset(v42, 0, 0x11620uLL);
  }
  RtlpInitializeThreadActivationContextStack((__int64)v114);
  LdrpHeap = v40;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0uLL;
  PrivateLoggerNotificationEntry = 0LL;
  NtdllBaseTag = RtlCreateTagHeap(v40, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180159580, v43, v44);
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v107 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  ImagePathName = *(_UNICODE_STRING *)(v107 + 96);
  v104 = _mm_srli_si128((__m128i)ImagePathName, 8).m128i_u64[0];
  if ( Handle || v100 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v100,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v98,
                             4,
                             v89,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801593E8 && v98 )
    {
      dword_1801593E8 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v46 = DestinationString.Length + 40;
  v47 = (wchar_t *)RtlAllocateHeap(v40, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !v47 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v46;
  Destination.Buffer = v47;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v48 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v122;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = result;
    if ( result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( result >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180113A88;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
        ApplicationKeyOption = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v51 = (wchar_t *)RtlAllocateHeap(v40, 0, v48);
            if ( !v51 )
              return -1073741801;
            LdrpKnownDllPath.Length = 0;
            LdrpKnownDllPath.MaximumLength = v48;
            LdrpKnownDllPath.Buffer = v51;
            result = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
            ApplicationKeyOption = result;
            if ( result >= 0 )
            {
              NtClose(LinkHandle);
              goto LABEL_169;
            }
            if ( result != -1073741789 )
            {
              v18 = LdrpDebugFlags;
              if ( (LdrpDebugFlags & 3) == 0 )
                goto LABEL_33;
              LODWORD(Parametersa) = result;
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4465,
                "LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                Parametersa);
              goto LABEL_32;
            }
            RtlFreeHeap(v40, 0, v51);
            v48 = ReturnedLength;
          }
        }
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_33;
        LODWORD(v89) = result;
        v49 = (int *)&unk_180113A88;
        v50 = 4430;
      }
      else
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_33;
        LODWORD(v89) = result;
        v49 = &v122;
        v50 = 4407;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v50,
        "LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v49,
        v89);
LABEL_32:
      result = ApplicationKeyOption;
      v18 = LdrpDebugFlags;
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
    UnicodeString = DestinationString;
  }
  else
  {
    v52 = *(__m128i *)(v107 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v107 + 56);
    v53 = (wchar_t *)_mm_srli_si128(v52, 8).m128i_u64[0];
    UnicodeString.Buffer = v53;
    if ( !v53 || !UnicodeString.Length || !*v53 )
    {
      v54 = (wchar_t *)RtlAllocateHeap(v40, 0, 8uLL);
      UnicodeString.Buffer = v54;
      if ( !v54 )
      {
        v41 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4513,
            "LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_128:
          v41 = LdrpDebugFlags;
          goto LABEL_129;
        }
        goto LABEL_129;
      }
      v99 = 0;
      v55 = RtlGetNtSystemRoot();
      *(_DWORD *)v54 = *(_DWORD *)v55;
      v54[2] = v55[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    Length = 2LL * Destination.Length + 22;
  v57 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v57 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v107 + 80) = 0;
  }
  v96.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v57);
  if ( !v96.Buffer )
  {
    v41 = LdrpDebugFlags;
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
    if ( (v41 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  v96.Length = 0;
  v96.MaximumLength = v57;
  RtlAppendUnicodeStringToString(&v96, &Destination);
  v58 = v96.Length;
  v96.Buffer[((unsigned __int64)v96.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v96;
  LdrpSystem32 = (__int128)v96;
  LOWORD(v58) = v58 - 2;
  LOWORD(LdrpSystem32) = v58;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v96, &Destination);
    RtlAppendUnicodeToString(&v96, L"forwarders;");
  }
  if ( v57 > Length )
  {
    RtlAppendUnicodeStringToString(&v96, &DestinationString);
    RtlAppendUnicodeToString(&v96, L"\\system;");
    RtlAppendUnicodeStringToString(&v96, &DestinationString);
    RtlAppendUnicodeToString(&v96, L";");
    RtlpSystemDirs = v96;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName, v58);
  v59 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v112);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v61 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v41 = LdrpDebugFlags;
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
  LdrpNtDllDataTableEntry = (__int64)ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v62 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  v62[15].Buffer = (wchar_t *)((char *)v62[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v62 = (_UNICODE_STRING *)((char *)v62 + 72);
  *v62 = Destination;
  RtlAppendUnicodeStringToString(v62, &NtDllName);
  v63 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)(LdrpNtDllDataTableEntry + 88) = NtDllName;
  *(_QWORD *)(v63 + 48) = v59;
  LdrpInsertDataTableEntry(v63);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, (__int64)v112);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v64 = v61 + 32;
  v65 = qword_18015F3D0;
  if ( *(__int64 **)(qword_18015F3D0 + 8) != &qword_18015F3D0 )
    __fastfail(3u);
  *v64 = qword_18015F3D0;
  *((_QWORD *)v61 + 5) = &qword_18015F3D0;
  *(_QWORD *)(v65 + 8) = v64;
  qword_18015F3D0 = (__int64)(v61 + 32);
  result = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(Parametersa) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4782,
        "LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        Parametersa);
      goto LABEL_32;
    }
LABEL_33:
    if ( (v18 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
  memset(v133, 0, 0xC0uLL);
  *(_QWORD *)&v133[1] = Path;
  LODWORD(v133[2]) = 512;
  v133[0] = ImagePathName;
  *((_QWORD *)&v133[2] + 1) = &ApplicationKeyOption;
  v66 = LdrpAllocateModuleEntry((__int64)v133);
  v67 = v66;
  if ( !v66 )
  {
    v41 = LdrpDebugFlags;
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
  LdrpImageEntry = (__int64)v66;
  v68 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v68;
  }
  while ( v68 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v69 = LdrpImageEntry;
  *(_UNICODE_STRING *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v69 + 104) |= 4u;
  v70 = v92;
  if ( UseCOR )
  {
    v71 = *(_DWORD *)(v69 + 104) | 0x400000;
    *(_DWORD *)(v69 + 104) = v71;
    if ( v70 )
      *(_DWORD *)(v69 + 104) = v71 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v69 + 248) = 0LL;
  v72 = 0LL;
  v73 = (wchar_t *)((char *)ImagePathName.Buffer + ImagePathName.Length);
  if ( v73 )
  {
    while ( v73 > ImagePathName.Buffer )
    {
      if ( *--v73 == 92 )
      {
        v72 = v73 + 1;
        break;
      }
    }
  }
  if ( v72 )
  {
    v74 = LOWORD(ImagePathName.Buffer) + ImagePathName.Length - (_WORD)v72;
    *(_WORD *)(v69 + 88) = v74;
    if ( ImagePathName.MaximumLength - (unsigned int)ImagePathName.Length >= 2 )
      v74 += 2;
    *(_WORD *)(v69 + 90) = v74;
    *(_QWORD *)(v69 + 96) = v72;
  }
  else
  {
    *(_OWORD *)(v69 + 88) = *(_OWORD *)(v67 + 72);
  }
  v75 = *(void **)(ProcessEnvironmentBlock + 16);
  v76 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v75 && !v70 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v75);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v69 = LdrpImageEntry;
  }
  *(_QWORD *)(v69 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v69);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)v76);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v78 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v89) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4960,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v89);
      v78 = LdrpDebugFlags;
    }
    if ( (v78 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v99 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v79 = LdrpAllocateModuleEntry(0LL);
    v80 = (__int64)v79;
    if ( !v79 )
    {
      v41 = LdrpDebugFlags;
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
    *(_DWORD *)(*((_QWORD *)v79 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v79 + 19) - 52LL) = -1;
    v81 = v125;
    *((_DWORD *)v79 + 26) |= *(_DWORD *)(v125 + 104);
    *((_QWORD *)v79 + 31) = *(_QWORD *)(v81 + 248);
    *((_WORD *)v79 + 55) = 0;
    *(_OWORD *)(v79 + 72) = *(_OWORD *)(v81 + 72);
    *(_OWORD *)(v79 + 88) = *(_OWORD *)(v81 + 88);
    *((_DWORD *)v79 + 32) = *(_DWORD *)(v81 + 128);
    *((_QWORD *)v79 + 6) = *(_QWORD *)(v81 + 48);
    LdrpInsertDataTableEntry((__int64)v79);
    LdrpLogDllState(*(_QWORD *)(v80 + 48), v80 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v80 + 48), 0LL, &v112);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v80, (__int64)v112);
    result = LdrpProcessMappedModule(v80, 0, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v80 + 56) = *(_QWORD *)(v81 + 56);
    LdrpLogDllState(*(_QWORD *)(v80 + 48), v80 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v80 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      if ( (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v80 + 152) + 56LL) = 9;
        result = ApplicationKeyOption;
      }
    }
    else
    {
      v93 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v80 + 152), 0LL, &v93);
      ApplicationKeyOption = result;
    }
    if ( result < 0 )
      return result;
    v76 = OutHeaders;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v100 )
    {
      NtClose(v100);
      v100 = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v115);
LABEL_335:
      if ( Handle )
        NtClose(Handle);
      if ( v100 )
        NtClose(v100);
      return 0;
    }
    return result;
  }
  v119 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize((PVOID *)&v119);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    if ( (_BYTE)v92 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v114->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v115 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(Parametersa) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5210,
        "LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        Parametersa);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( v119 )
  {
    v94 = 0;
    result = LdrpInitializeGraphRecurse(v119[19], 0LL, &v94);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(Parametersa) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5229,
          "LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          Parametersa);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(v76->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v89) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5388,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v89);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v89) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5361,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v89);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(Parametersa) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5377,
            "LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            Parametersa);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      ApplicationKeyOption = 0;
      v82 = DllHandle;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_180113A98,
                 0,
                 &Kernel32ThreadInitThunkFunction,
                 0,
                 retaddr);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v90) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5275,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180113A98,
            &LdrpKernel32DllName,
            v90);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_180113AA8, 0, &ProcedureAddress, 0, retaddr);
      result = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      result = LdrpFindLoadedDll(&LdrpKernelbaseDllName.Length, 0LL, &v126);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v89) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5343,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v89);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      v82 = (PVOID)*((_QWORD *)v126 + 6);
    }
    result = LdrGetProcedureAddressForCaller(v82, (PANSI_STRING)&stru_180113AC8, 0, &v127, 0, retaddr);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(Parametersa) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5406,
          "LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          Parametersa);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    result = _guard_dispatch_icall_fptr();
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(Parametersa) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5414,
          "LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          Parametersa);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v83 = v116;
  if ( v116 && *(_DWORD *)(v116 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v83);
  }
  v84 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v84 = 1;
  RtlpForceCSDebugInfoCreation = v84;
  v85 = v107;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v107 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v85 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **((_DWORD **)&v133[2] + 1) = 0;
  if ( (_BYTE)v92 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    LODWORD(v133[2]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v133);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_316;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v133[2] + 1));
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_316:
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(Parametersa) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5626,
        "LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        Parametersa);
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
    && (result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress),
        ApplicationKeyOption = result,
        result >= 0) )
  {
    LdrpProcessInitContextRecord = v115;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v95[0] = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(
                             *(_QWORD *)(LdrpImageEntry + 152),
                             *((__int64 *)&v133[2] + 1),
                             v95);
    LdrpReleaseLoaderLock(v86, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v133[2] + 1));
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    if ( v138 )
      RtlReleasePath(Path[0]);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(Parametersa) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5761,
          "LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          Parametersa);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v130 = 72LL;
      v131 = 1;
      memset(v132, 0, sizeof(v132));
      RtlActivateActivationContextUnsafeFast((__int64)&v130, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v130);
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
