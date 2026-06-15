/*
 * XREFs of _TSSession::Create_::_1_::dtor$27 @ 0x180037691
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001710 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_27(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 56),
    *(struct _GUID **)(a2 + 48));
}
