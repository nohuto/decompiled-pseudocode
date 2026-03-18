/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C00116D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0012038 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  FxObject *m_Object; // rbx
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v10; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxNonPagedObject::Lock(pIoResReqList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pIoResReqList->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v10 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return (WDFIORESLIST__ *)v10;
}
