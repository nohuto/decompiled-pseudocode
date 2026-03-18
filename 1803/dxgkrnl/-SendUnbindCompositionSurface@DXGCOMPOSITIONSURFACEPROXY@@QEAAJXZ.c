/*
 * XREFs of ?SendUnbindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BF0D4
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z @ 0x1C01E8788 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendUnbindCompositionSurface(void **this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v3) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v3 = -2147483611LL;
LABEL_15:
      v18 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v18 + 24) = v3;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_16;
    }
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 74);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v17 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, this[2]);
      v3 = v17;
      if ( v17 < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v3) = -1073741811;
      v15 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16);
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return (unsigned int)v3;
}
