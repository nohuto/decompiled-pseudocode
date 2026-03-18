/*
 * XREFs of HdevFromMonitor @ 0x1C0074360
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     DestroyMonitorDCs @ 0x1C0074180 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0074200 (SnapshotMonitorRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0LL;
  v2 = *((_QWORD *)gpDispInfo + 1);
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(v2 + 40 * v1 + 32) != *(_QWORD *)(a1 + 120) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v1;
}
