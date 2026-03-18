/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C01E8F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003446C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E687C (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E7970 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rax
  __int64 v6; // rcx
  struct DXGVAILOBJECT *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  char v23; // al
  _BYTE v24[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( *((_QWORD *)Current + 55) )
  {
    v7 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v7 + 9);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGVAILOBJECT *)((char *)v7 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v7);
    LODWORD(v8) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    DxgkCompositionObject::Release(v7);
    goto LABEL_24;
  }
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 76)
    && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( *((_BYTE *)Current + 448) )
    {
      v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 74);
      if ( v14 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession )
      {
        v18 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
        v8 = v18;
        if ( v18 >= 0 )
        {
          v23 = 0;
        }
        else
        {
          v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v22 + 24) = v8;
          WdLogEvent5_WdWarning(v22);
          v23 = 1;
        }
        *((_BYTE *)Current + 448) = v23;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
        *(_QWORD *)(v8 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v8);
        LODWORD(v8) = -1073741811;
      }
      goto LABEL_24;
    }
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    LODWORD(v8) = -2147483611;
    *(_QWORD *)(v12 + 24) = -2147483611LL;
  }
  else
  {
    LODWORD(v8) = -1073741790;
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = -1073741790LL;
  }
  WdLogEvent5_WdWarning(v12);
LABEL_24:
  KeLeaveCriticalRegion();
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)v8;
}
