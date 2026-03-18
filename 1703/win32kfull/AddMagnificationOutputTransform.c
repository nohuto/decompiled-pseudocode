/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C0103050
 * Callers:
 *     <none>
 * Callees:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C01030C0 (MagpInverseMagnificationTransformFromPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(__int64 a1, __int64 a2)
{
  MagpInverseMagnificationTransformFromPoint(grpdeskRitInput, a1);
  return MagpAddTransformOutputMagFac(grpdeskRitInput, a2);
}
