/*
 * XREFs of MiWsSwapPageFileNumber @ 0x14007FCA0
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x14007FC04 (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x14026BA30 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8

  v1 = *(_DWORD *)(a1 + 6872);
  v2 = 0;
  if ( !v1 )
    return 16LL;
  for ( i = a1 + 6880; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x10) == 0; i += 8LL )
  {
    if ( ++v2 >= v1 )
      return 16LL;
  }
  return v2;
}
