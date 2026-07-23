/*
 * XREFs of sub_1800D31B0 @ 0x1800D31B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlQueryCriticalSectionOwner @ 0x1800E1EC0 (RtlQueryCriticalSectionOwner.c)
 */

__int64 __fastcall sub_1800D31B0(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx

  v1 = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  v3 = *(void **)(a1 + 160);
  if ( v3 )
    *(_QWORD *)(a1 + 168) = RtlQueryCriticalSectionOwner(v3);
  else
    return (unsigned int)-1073741811;
  return v1;
}
