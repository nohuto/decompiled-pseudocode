/*
 * XREFs of ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180192860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_PreviousExecutionState(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ApplicationExecutionState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 17);
  return 0LL;
}
