/*
 * XREFs of MagInputTransform @ 0x1C00FD404
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00FD3A0 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01AA340 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01AA650 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AECA0 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 MagInputTransform()
{
  __int64 result; // rax

  result = 0LL;
  if ( grpdeskRitInput )
    return *(_QWORD *)(grpdeskRitInput + 216LL);
  return result;
}
