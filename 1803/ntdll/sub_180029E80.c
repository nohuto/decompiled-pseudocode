/*
 * XREFs of sub_180029E80 @ 0x180029E80
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 *     sub_1800F6B90 @ 0x1800F6B90 (sub_1800F6B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029E80(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( qword_18015AA50 && v2 && v2 <= *(_DWORD *)(qword_18015AA50 + 180) )
    return *(_QWORD *)(*(_QWORD *)(qword_18015AA50 + 184) - 8LL * v2);
  else
    return 0LL;
}
