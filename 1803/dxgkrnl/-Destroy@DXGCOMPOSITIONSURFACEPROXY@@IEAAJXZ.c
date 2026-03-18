/*
 * XREFs of ?Destroy@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C01BDEF4
 * Callers:
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BE664 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E8938 (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Destroy(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2);
    if ( !Current )
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v6);
      return 3221225485LL;
    }
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      if ( *((_BYTE *)Current + 448) )
      {
        v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 74);
        if ( v13 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v13,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v2 = DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
        }
        else
        {
          v2 = -1073741811;
          v16 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
          *(_QWORD *)(v16 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v16);
        }
      }
      else
      {
        v2 = -2147483611;
        v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v11 + 24) = -2147483611LL;
        WdLogEvent5_WdWarning(v11);
      }
    }
    KeLeaveCriticalRegion();
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
  operator delete(this);
  return v2;
}
