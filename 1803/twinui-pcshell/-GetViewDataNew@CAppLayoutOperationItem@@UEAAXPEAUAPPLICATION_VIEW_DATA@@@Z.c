/*
 * XREFs of ?GetViewDataNew@CAppLayoutOperationItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180096E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutOperationItem::GetViewDataNew(
        CAppLayoutOperationItem *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 60);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 76);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 23);
}
