/*
 * XREFs of GetBaseObject @ 0x1C0002BAC
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0043800 (AMLIFindNameSpaceObject.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     DerefOf @ 0x1C0050670 (DerefOf.c)
 *     ParseNameObj @ 0x1C0055A68 (ParseNameObj.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
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
