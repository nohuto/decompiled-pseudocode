/*
 * XREFs of ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180039030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCGamepadProcessor::IsStartOfCapture(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  return MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32));
}
