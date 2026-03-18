/*
 * XREFs of ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C01BCA9C
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C01E7D48 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 */

__int64 __fastcall DxgkSendCreateBundleObject(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int BundleObject; // eax
  __int64 v21; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v6 = -2147483611LL;
LABEL_15:
      v21 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_16;
    }
    v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 74);
    if ( v15 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      BundleObject = DXGSESSIONDATA::VailSendCreateBundleObject(SessionDataForSpecifiedSession, v5, a2, a3);
      v6 = BundleObject;
      if ( BundleObject < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v6) = -1073741811;
      v18 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19);
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return (unsigned int)v6;
}
