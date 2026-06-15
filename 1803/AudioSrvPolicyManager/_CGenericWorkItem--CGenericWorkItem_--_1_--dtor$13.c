/*
 * XREFs of _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$13 @ 0x18003798A
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180001710 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericWorkItem::CGenericWorkItem_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(
    *(CBackgroundSessionCallbacks **)(a2 + 120),
    (struct _GUID *)(*(_QWORD *)(a2 + 112) + 16LL));
}
