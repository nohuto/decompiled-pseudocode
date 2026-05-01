/*
 * XREFs of ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028C5D4
 * Callers:
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028C5A0 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18028D9BC (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_18028D9BC.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1802C3B74 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800F5FE8 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x1800F6098 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::StoredFailureInfo::~StoredFailureInfo((LPVOID *)(a1 + 80));
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((LPVOID *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(a1);
}
