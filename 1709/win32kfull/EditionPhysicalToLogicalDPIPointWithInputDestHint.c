/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0111360
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0111504 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( !*(_QWORD *)(a4 + 80) || !(unsigned int)TransformVectorWithInputTargetPrecedence(*(_QWORD *)(a4 + 80), &v7) )
    PhysicalToLogicalDPIPointWithHitTest(&v7, &v7, a3);
  result = v7;
  *a1 = v7;
  return result;
}
