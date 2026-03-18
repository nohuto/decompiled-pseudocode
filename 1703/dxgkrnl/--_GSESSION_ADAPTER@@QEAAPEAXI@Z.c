/*
 * XREFs of ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D578
 * Callers:
 *     DxgkDestroyCsrssProcess @ 0x1C00A6DA8 (DxgkDestroyCsrssProcess.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00FA908 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00FA980 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C00FB8D4 (--1SESSION_ADAPTER@@QEAA@XZ.c)
 */

SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *this)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(this);
  operator delete(this);
  return this;
}
