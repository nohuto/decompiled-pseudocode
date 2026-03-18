/*
 * XREFs of IopDiskIoAttributionTreeCompare @ 0x1400079B0
 * Callers:
 *     IopFindDiskIoAttribution @ 0x1400078F0 (IopFindDiskIoAttribution.c)
 *     IoStartDiskIoAttributionForContext @ 0x140007CD0 (IoStartDiskIoAttributionForContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDiskIoAttributionTreeCompare(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *a1;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
