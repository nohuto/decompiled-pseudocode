/*
 * XREFs of ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0036400
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01D0264 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01D0F50 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C01CE3C0 (--1SESSION_ADAPTER@@QEAA@XZ.c)
 */

SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *P)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
