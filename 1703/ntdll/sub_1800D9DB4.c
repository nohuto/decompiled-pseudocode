/*
 * XREFs of sub_1800D9DB4 @ 0x1800D9DB4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlQueryCriticalSectionOwner @ 0x1800E71F0 (RtlQueryCriticalSectionOwner.c)
 */

__int64 __fastcall sub_1800D9DB4(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
    *(_QWORD *)(a1 + 168) = RtlQueryCriticalSectionOwner(v4, (a2 >> 11) & 1);
  else
    return (unsigned int)-1073741811;
  return v2;
}
