/*
 * XREFs of ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180039040
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180039054 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 */

bool __fastcall MPCGamepadProcessor::IsEndOfCapture(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  return !MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32));
}
