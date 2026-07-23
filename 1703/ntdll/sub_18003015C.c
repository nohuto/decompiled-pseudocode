/*
 * XREFs of sub_18003015C @ 0x18003015C
 * Callers:
 *     sub_180004ED8 @ 0x180004ED8 (sub_180004ED8.c)
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandleByMapping @ 0x18001A750 (LdrGetDllHandleByMapping.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     LdrFindEntryForAddress @ 0x180076210 (LdrFindEntryForAddress.c)
 *     LdrGetDllFullName @ 0x18007AD40 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByName @ 0x18007B930 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007E0D0 (LdrDisableThreadCalloutsForDll.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     LdrQueryModuleServiceTags @ 0x1800D55C0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D59F0 (LdrSetImplicitPathOptions.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_180079080 @ 0x180079080 (sub_180079080.c)
 *     sub_180081E98 @ 0x180081E98 (sub_180081E98.c)
 */

int __fastcall sub_18003015C(char *BaseAddress)
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
        RtlAcquireSRWLockExclusive(&stru_18015C040);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        v4 = (PVOID *)*((_QWORD *)BaseAddress + 21);
        if ( v3[1] != BaseAddress + 160 || *v4 != BaseAddress + 160 )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&stru_18015C040);
        if ( *((_WORD *)BaseAddress + 55) )
          sub_18006F890(BaseAddress, 0LL);
        sub_180079080(BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          sub_18004C4D8(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(HeapHandle, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = sub_180081E98(v5);
      }
    }
  }
  return (int)v1;
}
