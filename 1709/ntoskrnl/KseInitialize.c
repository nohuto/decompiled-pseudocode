/*
 * XREFs of KseInitialize @ 0x1408404D4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     KseShimDatabaseOpen @ 0x140546A34 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x140546C0C (KseShimDatabaseClose.c)
 *     KseRegisterShim @ 0x1405C58F0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1406DB940 (KsepCacheUninitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140827180 (KseClearPCIDBitsInitialize.c)
 *     KseKasperskyInitialize @ 0x1408271F4 (KseKasperskyInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x14083EFA4 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x14083F0A4 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x14083F164 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x14083F6E8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x14083F758 (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // ebx
  signed __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  PVOID v14; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v14 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v14);
      if ( matched >= 0 && v14 )
      {
        KseShimDatabaseClose(v14);
      }
      else
      {
        dword_140387F88 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v9 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v9 < 0 )
        {
          v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14036A2C4[2 * v10] = v9;
          v11 = KsepDebugFlag;
          KsepHistoryErrors[2 * v10] = 852115;
          if ( (v11 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        KseClearPCIDBitsInitialize();
        KseKasperskyInitialize();
      }
    }
LABEL_33:
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 327914;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_38;
  }
  v5 = _InterlockedCompareExchange(&dword_140387F84, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL)) < 0 )
    return 3221225473LL;
  if ( !InitSafeBootMode && (v7 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v7 + 64)) && *(_DWORD *)(v7 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo();
      if ( matched >= 0 )
      {
        dword_140387F84 = 2;
        KseDriverScopeInitialize();
        goto LABEL_33;
      }
    }
  }
  else
  {
    if ( ViVerifierEnabled )
      dword_140387F88 |= 0x40u;
    if ( InitSafeBootMode )
      dword_140387F88 |= 0x100u;
    v8 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v8 + 64) || !*(_DWORD *)(v8 + 72) )
      dword_140387F88 |= 0x80u;
    matched = -1073741637;
  }
LABEL_38:
  dword_140387F84 = 0;
  if ( qword_140387FC8 )
  {
    KsepCacheUninitialize(qword_140387FC8);
    qword_140387FC8 = 0LL;
  }
  KseEngine |= 3u;
  dword_140387F88 |= 0x400u;
  v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_14036A2C4[2 * v13] = -1073741637;
    KsepHistoryErrors[2 * v13] = 327942;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        1LL,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1,
      "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    dword_14036A2C4[2 * v13] = matched;
    KsepHistoryErrors[2 * v13] = 327946;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
    KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
