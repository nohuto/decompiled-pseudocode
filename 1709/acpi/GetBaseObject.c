/*
 * XREFs of GetBaseObject @ 0x1C001AA00
 * Callers:
 *     AMLIFindNameSpaceObject @ 0x1C0016084 (AMLIFindNameSpaceObject.c)
 *     DerefOf @ 0x1C00191C0 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
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
