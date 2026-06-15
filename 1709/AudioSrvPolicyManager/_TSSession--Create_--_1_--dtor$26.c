/*
 * XREFs of _TSSession::Create_::_1_::dtor$26 @ 0x180028B1F
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001550 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 56),
    *(struct _GUID **)(a2 + 48));
}
