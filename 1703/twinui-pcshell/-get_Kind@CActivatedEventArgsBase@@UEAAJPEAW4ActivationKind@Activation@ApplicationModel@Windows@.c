/*
 * XREFs of ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x18008D490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsBase::get_Kind(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ActivationKind *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
