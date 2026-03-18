/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x1401F5E28
 * Callers:
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 && *(_DWORD *)(a1 + 4) )
    return 1;
  if ( a2 )
    return *(_DWORD *)(a2 + 4) != 0;
  return v2;
}
