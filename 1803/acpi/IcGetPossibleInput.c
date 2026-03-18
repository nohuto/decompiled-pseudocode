/*
 * XREFs of IcGetPossibleInput @ 0x1C0092504
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetPossibleInput(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v6; // rcx
  int v7; // eax
  char v8; // al
  int v9; // eax

  v3 = IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
    return 3221226021LL;
  while ( 1 )
  {
    if ( *(int *)(v3 + 28) >= 0 )
    {
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 <= a1 && *(_DWORD *)(v3 + 20) >= a1 )
        break;
    }
    v3 = *(_QWORD *)v3;
    if ( &IcListHead == (__int64 *)v3 )
      return 3221226021LL;
  }
  v6 = 200LL * (a1 - v4);
  if ( !*(_DWORD *)(v6 + v3 + 36) )
    return 3221226021LL;
  if ( a3 )
  {
    v7 = *(_DWORD *)(v6 + v3 + 148);
    if ( v7 == 3 )
    {
      v8 = 10;
    }
    else if ( v7 == 4 )
    {
      v8 = 8;
    }
    else
    {
      v8 = v7 != 2 ? 0 : 2;
    }
    *a3 = (*(_DWORD *)(v6 + v3 + 152) == 0) | v8;
  }
  v9 = *(_DWORD *)(v6 + v3 + 40);
  if ( v9 && v9 == *(_DWORD *)(v6 + v3 + 32) && *(_DWORD *)(v6 + v3 + 44) == *(_DWORD *)(v6 + v3 + 36)
    || *(_BYTE *)(v6 + v3 + 224) )
  {
    return 263LL;
  }
  else
  {
    return 0LL;
  }
}
