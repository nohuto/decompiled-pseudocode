/*
 * XREFs of MiTrimWorkingSetTail @ 0x1400B5E10
 * Callers:
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 * Callees:
 *     MiTrimWorkingSetBuildup @ 0x1400B5E78 (MiTrimWorkingSetBuildup.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140259E90 (MiQueryEPTAccessedState.c)
 *     MiTrimmedEnough @ 0x14025A674 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // rdi
  _DWORD *v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 168);
  for ( i = *(_QWORD *)(a1 + 24); ; MiProcessVmAccessedInfo(i, *(_QWORD *)(v1 + 240), MiTrimWorkingSetEPTCallback, v1) )
  {
    MiTrimWorkingSetBuildup(i, v1);
    if ( (*(_DWORD *)v1 & 0x80u) != 0 )
    {
      v6 = *(_QWORD *)(v1 + 16) - *(_QWORD *)(v1 + 24);
      *(_QWORD *)(i + 8) += v6;
      *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 16);
      v7 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(i + 174)) + 6768LL);
      *(_QWORD *)(v7 + 8LL * (*(_DWORD *)v1 & 0xF) + 2592) += v6;
    }
    v4 = *(_DWORD **)(v1 + 240);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4, 0LL) )
      break;
  }
  if ( (*(_DWORD *)v1 & 0x800) != 0 && (unsigned int)MiTrimmedEnough(i, v1) )
    return 4LL;
  else
    return 0LL;
}
