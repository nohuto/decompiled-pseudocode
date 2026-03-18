/*
 * XREFs of MiWsSwapPageFileNumber @ 0x14007D3A8
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x14007D30C (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402239A0 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x1404C90EC (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8

  v1 = *(_DWORD *)(a1 + 5592);
  v2 = 0;
  if ( !v1 )
    return 16LL;
  for ( i = a1 + 5600; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x10) == 0; i += 8LL )
  {
    if ( ++v2 >= v1 )
      return 16LL;
  }
  return v2;
}
