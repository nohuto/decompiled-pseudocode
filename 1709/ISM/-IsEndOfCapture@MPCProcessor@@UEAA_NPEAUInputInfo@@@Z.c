/*
 * XREFs of ?IsEndOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180053A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::IsEndOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  char v2; // r8

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 174) - 3) <= 1 )
    return *((_DWORD *)a2 + 331) == *((_DWORD *)this + 140);
  return v2;
}
