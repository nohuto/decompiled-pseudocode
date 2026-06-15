/*
 * XREFs of _CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor$1 @ 0x1800379C2
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001710 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 112),
    *(struct _GUID **)(a2 + 104));
}
