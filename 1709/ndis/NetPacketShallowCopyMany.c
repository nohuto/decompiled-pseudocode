/*
 * XREFs of NetPacketShallowCopyMany @ 0x1C007C720
 * Callers:
 *     <none>
 * Callees:
 *     NetPacketReuseMany @ 0x1C007C610 (NetPacketReuseMany.c)
 *     NetPacketShallowCopyOne @ 0x1C007C7B0 (NetPacketShallowCopyOne.c)
 */

__int64 __fastcall NetPacketShallowCopyMany(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // ebx
  int v10; // esi

  v5 = 0;
  if ( !a5 )
    return 0LL;
  while ( 1 )
  {
    v10 = NetPacketShallowCopyOne((void *)(a1 + (unsigned int)(a2 * v5)), (void *)(a3 + (unsigned int)(a4 * v5)));
    if ( v10 < 0 )
      break;
    if ( ++v5 >= a5 )
      return 0LL;
  }
  if ( v5 )
    NetPacketReuseMany(a1, a2, v5 - 1);
  return (unsigned int)v10;
}
