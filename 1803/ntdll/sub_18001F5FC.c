/*
 * XREFs of sub_18001F5FC @ 0x18001F5FC
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllFullName @ 0x18001F910 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandleByMapping @ 0x18002E040 (LdrGetDllHandleByMapping.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     LdrFindEntryForAddress @ 0x180054400 (LdrFindEntryForAddress.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     LdrGetDllHandleByName @ 0x1800772B0 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x180079BF0 (LdrDisableThreadCalloutsForDll.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 *     LdrQueryModuleServiceTags @ 0x1800CA9A0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CAE20 (LdrSetImplicitPathOptions.c)
 *     sub_1800CB310 @ 0x1800CB310 (sub_1800CB310.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_180071914 @ 0x180071914 (sub_180071914.c)
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 */

int __fastcall sub_18001F5FC(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015D070);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v3[1] != BaseAddress + 160 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v4 != BaseAddress + 160) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&stru_18015D070);
        if ( *((_WORD *)BaseAddress + 55) )
          sub_18007D794(BaseAddress, 0LL);
        sub_180074114(BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          sub_180042420(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(HeapHandle, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = sub_180071914(v5);
      }
    }
  }
  return (int)v1;
}
