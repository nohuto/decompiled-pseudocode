/*
 * XREFs of MiResetAccessBitsTail @ 0x140165B90
 * Callers:
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v8; // rsi

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(v8, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v5 = *(_QWORD *)(i + 8);
    if ( v5 )
      MiFlushTbList(v5, a2, a3);
    v6 = *(_DWORD **)(i + 16);
    if ( !v6 )
      break;
    if ( !*v6 )
      break;
    v8 = *(_QWORD *)(a1 + 24);
    if ( !(unsigned int)MiQueryEPTAccessedState(a1, v6, *(_QWORD *)(i + 8) != 0LL) )
      break;
  }
  return 0LL;
}
