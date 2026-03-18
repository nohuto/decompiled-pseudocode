/*
 * XREFs of KdEncodeDataBlock @ 0x14015D65C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1404163C0 (IopLiveDumpEndMirroringCallback.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KdEncodeDataBlock()
{
  __int64 v0; // r10
  __int64 *v1; // rdx
  __int64 v2; // r9
  int v3; // r8d
  __int64 result; // rax

  if ( KdpBootedNodebug )
  {
    v0 = KiWaitAlways;
    v1 = (__int64 *)&KdDebuggerDataBlock;
    v2 = KiWaitNever;
    v3 = 109;
    KdpDataBlockEncoded = 1;
    do
    {
      result = v2 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(v0 ^ *v1), v2);
      *v1++ = result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
