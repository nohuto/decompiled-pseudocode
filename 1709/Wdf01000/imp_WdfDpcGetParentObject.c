/*
 * XREFs of imp_WdfDpcGetParentObject @ 0x1C006DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  FxObject *m_Object; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rcx
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Dpc,
    0x1015u,
    (void **)&pFxDpc);
  m_Object = pFxDpc->m_Object;
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v4 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v4;
}
