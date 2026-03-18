/*
 * XREFs of KiFindFirstAvailableNode @ 0x1401764F0
 * Callers:
 *     KiQueryProcessorNode @ 0x140176410 (KiQueryProcessorNode.c)
 * Callees:
 *     KiIsNodeFull @ 0x140176550 (KiIsNodeFull.c)
 */

__int64 KiFindFirstAvailableNode()
{
  unsigned __int16 v0; // r10
  unsigned __int16 v1; // r9
  __int64 v2; // rcx
  unsigned __int16 *v3; // r11

  v0 = KeNumberNodes;
  v1 = 0;
  if ( !KeNumberNodes )
    return 3221226021LL;
  while ( 1 )
  {
    v2 = KeNodeBlock[v1];
    if ( (*(_BYTE *)(v2 + 173) & 2) != 0 && !(unsigned __int8)KiIsNodeFull(v2) )
      break;
    if ( ++v1 >= v0 )
      return 3221226021LL;
  }
  *v3 = v1;
  return 0LL;
}
