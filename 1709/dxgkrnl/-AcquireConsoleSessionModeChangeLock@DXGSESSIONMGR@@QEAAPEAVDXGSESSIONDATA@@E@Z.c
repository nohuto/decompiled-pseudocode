/*
 * XREFs of ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00902B4
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00B6A20 (DxgkGetDisplayModeList.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0174900 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v3 + 18520));
    v4 = *((_QWORD *)this + 15);
  }
  else
  {
    v4 = 0LL;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v2) + 24) = 3820LL;
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return (struct DXGSESSIONDATA *)v4;
}
