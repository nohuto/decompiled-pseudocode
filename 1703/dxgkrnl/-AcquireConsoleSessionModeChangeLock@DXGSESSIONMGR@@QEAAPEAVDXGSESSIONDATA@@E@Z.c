/*
 * XREFs of ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00DD8F8
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00993A0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 18512));
    v12 = *((_QWORD *)this + 15);
  }
  else
  {
    v12 = 0LL;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v5, v6, v7) + 24) = 3753LL;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v9, v10, v11);
  return (struct DXGSESSIONDATA *)v12;
}
