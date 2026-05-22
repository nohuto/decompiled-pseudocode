/*
 * XREFs of ?IsStartOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180053A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::IsStartOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)a2 + 174) == 2 )
  {
    result = 1;
    *((_DWORD *)this + 140) = *((_DWORD *)a2 + 331);
  }
  return result;
}
