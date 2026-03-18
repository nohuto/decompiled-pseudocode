/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x14025A2B0
 * Callers:
 *     MiSimpleAgePte @ 0x14025A0C0 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  _DWORD *v5; // rdx
  __int64 v6; // rsi

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          v6,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(_QWORD *, __int64))MiSimpleAgeWorkingSetEPTCallback) )
  {
    MiFlushTbList(*(_QWORD *)(i + 56), a2, a3);
    v5 = *(_DWORD **)(i + 248);
    if ( !v5 )
      break;
    if ( !*v5 )
      break;
    v6 = *(_QWORD *)(a1 + 24);
    if ( !(unsigned int)MiQueryEPTAccessedState(a1, v5, 1LL) )
      break;
  }
  return 0LL;
}
