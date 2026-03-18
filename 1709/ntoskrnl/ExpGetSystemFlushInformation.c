/*
 * XREFs of ExpGetSystemFlushInformation @ 0x1405878F8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetSystemFlushInformation(__int64 a1)
{
  int v1; // eax

  v1 = (KeFeatureBits >> 34) & 4 | 3;
  if ( (KeFeatureBits & 0x800000000LL) == 0 )
    v1 = (KeFeatureBits >> 34) & 4 | 1;
  *(_DWORD *)a1 = v1;
  *(_DWORD *)(a1 + 4) = KeGetCurrentPrcb()->CFlushSize;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
