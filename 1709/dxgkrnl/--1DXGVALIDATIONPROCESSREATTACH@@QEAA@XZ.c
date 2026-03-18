/*
 * XREFs of ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C001DC58
 * Callers:
 *     DxgEnumHandleChildrenCB @ 0x1C019E930 (DxgEnumHandleChildrenCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH(DXGVALIDATIONPROCESSREATTACH *this)
{
  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
}
