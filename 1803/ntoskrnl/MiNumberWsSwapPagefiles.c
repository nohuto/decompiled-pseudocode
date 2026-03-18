/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x140080AFC
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 6872);
  v2 = 0;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 6880);
    v4 = v1;
    do
    {
      v5 = *v3;
      v6 = v2 + 1;
      ++v3;
      if ( (*(_BYTE *)(v5 + 204) & 0x10) == 0 )
        v6 = v2;
      v2 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
