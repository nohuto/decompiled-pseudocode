/*
 * XREFs of LdrpDereferenceModule @ 0x180029804
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x180002930 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrFindEntryForAddress @ 0x180019140 (LdrFindEntryForAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrGetDllFullName @ 0x180079D70 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByMapping @ 0x18007A390 (LdrGetDllHandleByMapping.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007C930 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByName @ 0x18007D190 (LdrGetDllHandleByName.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 *     LdrQueryModuleServiceTags @ 0x1800D1160 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D1590 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9A3C (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x180074BE8 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18008129C (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || (v4 = *(_QWORD **)(a1 + 168), *v4 != a1 + 160) )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        v7 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v6 == v5 )
          return LdrpDestroyNode(v5);
      }
    }
  }
  return result;
}
