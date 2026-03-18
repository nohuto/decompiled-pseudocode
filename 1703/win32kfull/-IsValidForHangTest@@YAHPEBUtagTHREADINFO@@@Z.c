/*
 * XREFs of ?IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0006FEC
 * Callers:
 *     DoExplorerHangDetection @ 0x1C0006F5C (DoExplorerHangDetection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidForHangTest(const struct tagTHREADINFO *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 50) )
      return *((_QWORD *)a1 + 47) != 0LL;
  }
  return result;
}
