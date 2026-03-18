/*
 * XREFs of KdEncodeDataBlock @ 0x140178E4C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140481F00 (IopLiveDumpEndMirroringCallback.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
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
