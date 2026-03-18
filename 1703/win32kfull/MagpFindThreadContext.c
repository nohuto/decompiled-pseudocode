/*
 * XREFs of MagpFindThreadContext @ 0x1C005D1E4
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01EBC20 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01EBE38 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01EBF34 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
