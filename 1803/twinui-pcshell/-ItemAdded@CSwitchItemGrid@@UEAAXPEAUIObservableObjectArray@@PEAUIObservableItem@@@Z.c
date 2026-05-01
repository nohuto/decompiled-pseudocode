/*
 * XREFs of ?ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x18028ED90
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x18028FB54 (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::ItemAdded(
        CSwitchItemGrid *this,
        struct IObservableObjectArray *a2,
        struct IUnknown *a3)
{
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 552));
  CSwitchItemGrid::_AddElementForObject((CSwitchItemGrid *)((char *)this - 216), a3);
}
