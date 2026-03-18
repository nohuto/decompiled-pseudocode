/*
 * XREFs of KiComputePriorityFloor @ 0x140042E58
 * Callers:
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 * Callees:
 *     <none>
 */

char __fastcall KiComputePriorityFloor(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9
  int v5; // r8d

  v2 = *(_DWORD *)(a1 + 1408);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse((unsigned int *)&v5, v2);
    v3 = a2;
    if ( a2 < v5 )
      return v5;
  }
  return v3;
}
