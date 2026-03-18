/*
 * XREFs of ExpGetSystemFlushInformation @ 0x14044ABD8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetSystemFlushInformation(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx

  v2 = 0;
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    v2 = 4;
  v3 = v2 | 1;
  if ( (KeFeatureBits & 0x800000000LL) != 0 )
    v3 |= 2u;
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 4) = KeGetCurrentPrcb()->CFlushSize;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
