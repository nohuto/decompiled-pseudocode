/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x1401FBC70
 * Callers:
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1406BA9B4 (IopLiveDumpAllocateDumpBuffers.c)
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
