/*
 * XREFs of ?SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE68C
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01E7B88 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendBindCompositionSurface(
        void **this,
        __int64 a2,
        struct _DXGK_REMOTE_CSM_BUFFER_INFO *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  DXGSESSIONMGR *v16; // rbx
  int v17; // r8d
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  _BYTE v24[24]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v7) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v7 = -2147483611LL;
LABEL_15:
      v23 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v23 + 24) = v7;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_16;
    }
    v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 74);
    if ( v16 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v22 = DXGSESSIONDATA::VailSendBindCompositionSurface(SessionDataForSpecifiedSession, this[2], v17, a3, a4);
      v7 = v22;
      if ( v22 < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v7) = -1073741811;
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v21);
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)v7;
}
