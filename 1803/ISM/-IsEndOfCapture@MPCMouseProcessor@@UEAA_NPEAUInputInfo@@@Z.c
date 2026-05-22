/*
 * XREFs of ?IsEndOfCapture@MPCMouseProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180099390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsEndOfCapture(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*((_BYTE *)this + 3328) & 0x70) == 0;
}
