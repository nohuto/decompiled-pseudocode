/*
 * XREFs of ?QueryInterface@CNullAnimationCoordinator@CMultitaskingViewElementBase@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028B160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CMultitaskingViewElementBase::CNullAnimationCoordinator::QueryInterface(
        CMultitaskingViewElementBase::CNullAnimationCoordinator *this,
        const struct _GUID *a2,
        void **a3)
{
  return QISearch(
           this,
           (LPCQITAB)&`CMultitaskingViewElementBase::CNullAnimationCoordinator::QueryInterface'::`2'::qit,
           a2,
           a3);
}
