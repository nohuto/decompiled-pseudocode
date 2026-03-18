/*
 * XREFs of MiGetSystemPteStatistics @ 0x1406BD864
 * Callers:
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400850EC (MiGetNumberOfCachedPtes.c)
 *     RtlFindLongestRunClearEx @ 0x14023CFAC (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall MiGetSystemPteStatistics(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  int NumberOfCachedPtes; // eax
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = (*(_DWORD *)(a1 + 24) & 4) != 0 ? 16 : 1;
  v7 = v6 * RtlFindLongestRunClearEx((unsigned __int64 *)a1, &v11);
  if ( 0x2000000 - v6 * *(_QWORD *)(a1 + 64) > v7 )
    v7 = 0x2000000 - v6 * *(_QWORD *)(a1 + 64);
  *a3 = v7;
  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = v9 + (unsigned int)(v6 * NumberOfCachedPtes);
  *a2 = result + v6 * *(_QWORD *)(a1 + 96);
  return result;
}
