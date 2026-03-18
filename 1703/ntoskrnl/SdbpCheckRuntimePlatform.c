/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x14072C450
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbpCheckRuntimePlatformV2 @ 0x14072C4B4 (SdbpCheckRuntimePlatformV2.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // ebx

  if ( (*(_DWORD *)(a3 + 1328) & 2) != 0 )
    return SdbpCheckRuntimePlatformV2((_DWORD)a1, a2, a3, a3, a5);
  v6 = *(_DWORD *)(a2 + 544);
  *a1 = ((unsigned int)SdbReadDWORDTag(a3, a5, 0x3Fu) & v6) != 0;
  return 1LL;
}
