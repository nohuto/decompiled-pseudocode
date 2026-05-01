/*
 * XREFs of ?GetViewDataOld@CAppLayoutOperationItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180096E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutOperationItem::GetViewDataOld(
        CAppLayoutOperationItem *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 14);
}
