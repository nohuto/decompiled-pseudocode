/*
 * XREFs of KseInitialize @ 0x1408A392C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KseShimDatabaseClose @ 0x1405FC764 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x1405FDD48 (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     KseRegisterShim @ 0x140623280 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1407464DC (KsepCacheUninitialize.c)
 *     KseDriverScopeInitialize @ 0x1408A54DC (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1408A554C (KseVersionLieInitialize.c)
 *     KsepEngineInitialize @ 0x1408A55C0 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  signed __int32 v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  char v20; // al
  PVOID v21; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v21 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v21);
      if ( matched >= 0 && v21 )
      {
        KseShimDatabaseClose(v21);
      }
      else
      {
        dword_1403CDEE8 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v5 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1403AD3A4[2 * v15] = v5;
          v16 = KsepDebugFlag;
          KsepHistoryErrors[2 * v15] = 852115;
          if ( (v16 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v6 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v6 < 0 )
        {
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1403AD3A4[2 * v17] = v6;
          v18 = KsepDebugFlag;
          KsepHistoryErrors[2 * v17] = 917629;
          if ( (v18 & 2) != 0 )
            KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12, "ClearPCIDBits shim: failed to register.\n");
        }
        v7 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v7 < 0 )
        {
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1403AD3A4[2 * v19] = v7;
          v20 = KsepDebugFlag;
          KsepHistoryErrors[2 * v19] = 983165;
          if ( (v20 & 2) != 0 )
            KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
          KsepLogError(12, "Kaspersky shim: failed to register.\n");
        }
      }
    }
LABEL_10:
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v8]) = 0;
    LODWORD(KsepHistoryMessages[v8]) = 327914;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_36;
  }
  v10 = _InterlockedCompareExchange(&dword_1403CDEE4, 1, 0);
  if ( v10 == 2 )
    return 0LL;
  if ( v10 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL)) >= 0 )
  {
    if ( !InitSafeBootMode && (v11 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v11 + 64)) && *(_DWORD *)(v11 + 72) )
    {
      matched = KsepEngineInitialize(&KseEngine);
      if ( matched >= 0 )
      {
        matched = KsepMatchInitMachineInfo(a1);
        if ( matched >= 0 )
        {
          dword_1403CDEE4 = 2;
          KseDriverScopeInitialize();
          goto LABEL_10;
        }
      }
    }
    else
    {
      if ( ViVerifierEnabled )
        dword_1403CDEE8 |= 0x40u;
      if ( InitSafeBootMode )
        dword_1403CDEE8 |= 0x100u;
      v12 = *(_QWORD *)(a1 + 240);
      if ( !*(_QWORD *)(v12 + 64) || !*(_DWORD *)(v12 + 72) )
        dword_1403CDEE8 |= 0x80u;
      matched = -1073741637;
    }
LABEL_36:
    dword_1403CDEE4 = 0;
    if ( qword_1403CDF28 )
    {
      KsepCacheUninitialize(qword_1403CDF28);
      qword_1403CDF28 = 0LL;
    }
    KseEngine |= 3u;
    dword_1403CDEE8 |= 0x400u;
    v13 = KsepDebugFlag;
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    if ( matched == -1073741637 )
    {
      dword_1403AD3A4[2 * v14] = -1073741637;
      KsepHistoryErrors[2 * v14] = 327942;
      if ( (v13 & 2) != 0 )
        KsepDebugPrint(
          1LL,
          "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
      KsepLogError(
        1,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    }
    else
    {
      dword_1403AD3A4[2 * v14] = matched;
      KsepHistoryErrors[2 * v14] = 327946;
      if ( (v13 & 2) != 0 )
        KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
      KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
    }
    return (unsigned int)matched;
  }
  return 3221225473LL;
}
