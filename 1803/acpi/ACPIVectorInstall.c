/*
 * XREFs of ACPIVectorInstall @ 0x1C003FE28
 * Callers:
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x1C0027A9C (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorGetEntry @ 0x1C003FCEC (ACPIVectorGetEntry.c)
 */

char __fastcall ACPIVectorInstall(unsigned int a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !ACPIVectorGetEntry(&v7) )
    return 0;
  v4 = ACPIGpeIndexToByteIndex(a1);
  v5 = v7;
  *(_BYTE *)(v4 + GpeMap) = v7;
  *((_QWORD *)GpeVectorTable + 2 * v5 + 1) = a2;
  return 1;
}
