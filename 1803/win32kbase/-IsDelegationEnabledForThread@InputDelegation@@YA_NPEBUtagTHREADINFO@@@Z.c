/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C012DC00
 * Callers:
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0059370 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C0064A50 (IsSpatialDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
