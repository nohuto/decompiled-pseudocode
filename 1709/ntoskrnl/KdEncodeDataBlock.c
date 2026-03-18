/*
 * XREFs of KdEncodeDataBlock @ 0x14014337C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KdEncodeDataBlock()
{
  __int64 *v0; // r8
  int v1; // r9d
  __int64 result; // rax

  if ( KdpBootedNodebug )
  {
    KdpDataBlockEncoded = 1;
    v0 = (__int64 *)&KdDebuggerDataBlock;
    v1 = 109;
    do
    {
      result = KiWaitNever;
      *v0 = KiWaitNever ^ __ROR8__(
                            (unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v0),
                            KiWaitNever);
      ++v0;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
