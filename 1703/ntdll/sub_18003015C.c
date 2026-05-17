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

__int64 __fastcall sub_18003015C(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&qword_18015C040);
        v3 = *(_QWORD *)(a1 + 160);
        v4 = *(_QWORD **)(a1 + 168);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || *v4 != a1 + 160 )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&qword_18015C040);
        if ( *(_WORD *)(a1 + 110) )
          sub_18006F890(a1, 0LL);
        sub_180079080(a1);
        v7 = *(volatile signed __int32 **)(a1 + 136);
        if ( (unsigned __int64)v7 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *(_QWORD *)(a1 + 80) )
          sub_18004C4D8(a1 + 72);
        result = RtlFreeHeap(qword_18015B328, 0, a1);
        if ( v6 == v5 )
          return sub_180081E98(v5);
      }
    }
  }
  return result;
}
