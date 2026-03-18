/*
 * XREFs of IcRemovePossibleReference @ 0x1C0094268
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C008FB74 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A5A60 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcRemovePossibleReference(unsigned int a1, char a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = IcListHead;
  result = (__int64)&IcListHead;
  while ( &IcListHead != (__int64 *)v2 )
  {
    if ( *(int *)(v2 + 28) >= 0 && *(_DWORD *)(v2 + 16) <= a1 && *(_DWORD *)(v2 + 20) >= a1 )
    {
      v4 = 200LL * (a1 - *(_DWORD *)(v2 + 16));
      result = 0xFFFFFFFFLL;
      --*(_DWORD *)(v4 + v2 + 36);
      if ( a2 )
        --*(_DWORD *)(v4 + v2 + 44);
      return result;
    }
    v2 = *(_QWORD *)v2;
  }
  return result;
}
