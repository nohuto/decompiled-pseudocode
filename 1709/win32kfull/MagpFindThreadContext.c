/*
 * XREFs of MagpFindThreadContext @ 0x1C006037C
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01A8010 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01A8228 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01A8324 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
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
