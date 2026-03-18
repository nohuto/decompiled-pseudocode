/*
 * XREFs of imp_WdfChildListEndScan @ 0x1C003A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0002420 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 */

void __fastcall imp_WdfChildListEndScan(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *DeviceList)
{
  unsigned int *v3; // rdx
  FxChildList *v4; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxChildList *pList; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v4 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x14u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v4 = pList;
  }
  FxChildList::EndScan(v4, v3);
}
