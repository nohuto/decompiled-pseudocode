/*
 * XREFs of GetBaseObject @ 0x1C0012F98
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     DerefOf @ 0x1C0013AA0 (DerefOf.c)
 *     AMLIFindNameSpaceObject @ 0x1C001E344 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
