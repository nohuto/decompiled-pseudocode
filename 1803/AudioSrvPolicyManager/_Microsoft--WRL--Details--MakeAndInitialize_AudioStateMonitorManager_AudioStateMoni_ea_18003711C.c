/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$1 @ 0x18003711C
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001710 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_____ptr64_CProcess_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 136),
    *(struct _GUID **)(a2 + 112));
}
