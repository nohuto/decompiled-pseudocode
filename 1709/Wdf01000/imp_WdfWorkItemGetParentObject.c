/*
 * XREFs of imp_WdfWorkItemGetParentObject @ 0x1C003B190
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  FxObject *m_Object; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rcx
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  m_Object = pFxWorkItem->m_Object;
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v4 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v4;
}
