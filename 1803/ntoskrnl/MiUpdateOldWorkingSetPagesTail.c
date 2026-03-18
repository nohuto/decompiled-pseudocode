/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x14025A900
 * Callers:
 *     MiUpdateOldPte @ 0x14025A740 (MiUpdateOldPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx
  __int64 v4; // rbp

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          v4,
          *(_DWORD **)(i + 208),
          (__int64 (__fastcall *)(_QWORD *, __int64))MiUpdateOldPagesEPTCallback) )
  {
    if ( *(_DWORD *)(i + 36) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), i + 24, 0);
    v3 = *(_DWORD **)(i + 208);
    if ( !v3 )
      break;
    if ( !*v3 )
      break;
    v4 = *(_QWORD *)(a1 + 24);
    if ( !(unsigned int)MiQueryEPTAccessedState(a1, v3, 0LL) )
      break;
  }
  return 0LL;
}
