/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0106540
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01065A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

__int64 __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  if ( !*(_QWORD *)(a4 + 80) )
    return PhysicalToLogicalDPIPointWithHitTest(a1, &v9, a3);
  result = DetermineInputTargetPrecedenceTransform(*(_QWORD *)(a4 + 80), &v10);
  if ( !(_DWORD)result )
    return PhysicalToLogicalDPIPointWithHitTest(a1, &v9, a3);
  v8 = v10;
  *a1 = a2;
  if ( v8 )
    return TransformVector(v8, (_DWORD)a1, (int)a1 + 4, a3, 1);
  return result;
}
