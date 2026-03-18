/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x1400F0408
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ecx

  v1 = *(_DWORD *)(a1 + 5784);
  result = 0LL;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 5792);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v6 = (*(_BYTE *)(v5 + 204) & 0x10) == 0;
      v7 = result + 1;
      if ( v6 )
        v7 = result;
      result = v7;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
