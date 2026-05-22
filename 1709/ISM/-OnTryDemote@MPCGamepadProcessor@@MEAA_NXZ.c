/*
 * XREFs of ?OnTryDemote@MPCGamepadProcessor@@MEAA_NXZ @ 0x180038FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCGamepadProcessor::OnTryDemote(MPCGamepadProcessor *this)
{
  return *((_QWORD *)this + 66) == 0LL;
}
