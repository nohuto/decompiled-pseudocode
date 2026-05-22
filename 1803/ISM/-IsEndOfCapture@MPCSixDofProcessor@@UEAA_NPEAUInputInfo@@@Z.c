/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18003E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsEndOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  bool result; // al

  if ( (*((_BYTE *)a2 + 1168) & 0x3F) == 0 )
    return 1;
  result = 0;
  if ( *((_BYTE *)this + 3217) )
    return 1;
  return result;
}
