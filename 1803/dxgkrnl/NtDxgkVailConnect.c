/*
 * XREFs of NtDxgkVailConnect @ 0x1C01E8CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E687C (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E6964 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E783C (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct DXGVAILOBJECT *v7; // rbx
  int VmBusHostSubscribers; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  DXGSESSIONMGR *v24; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rax
  _BYTE v37[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v38[24]; // [rsp+30h] [rbp-18h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    LODWORD(v5) = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v5;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_QWORD *)Current + 55) )
  {
    v7 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGVAILOBJECT *)((char *)v7 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers(v7);
    v5 = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        if ( *((struct _KTHREAD **)v7 + 5) != KeGetCurrentThread() )
        {
          v13 = WdLogNewEntry5_WdAssertion(v10);
          *(_QWORD *)(v13 + 24) = 255LL;
          WdLogEvent5_WdAssertion(v13);
        }
        v14 = EnableVmBusChannel(*((struct DXGVMBUSCHANNEL **)v7 + 12));
        v5 = v14;
        if ( v14 < 0 )
        {
          v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
          *(_QWORD *)(v18 + 24) = v5;
          WdLogEvent5_WdWarning(v18);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
        }
        else
        {
          *((_BYTE *)v7 + 104) = 1;
        }
        goto LABEL_14;
      }
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = v5;
    }
    WdLogEvent5_WdWarning(v12);
LABEL_14:
    if ( v38[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v7 + 9);
    DxgkCompositionObject::Release(v7);
    goto LABEL_33;
  }
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 76)
    && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( *((_BYTE *)Current + 448) )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = -1073740528LL;
      WdLogEvent5_WdWarning(v22);
      LODWORD(v5) = -1073740528;
    }
    else
    {
      v24 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20) + 74);
      if ( v24 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v24, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession )
      {
        v29 = DXGSESSIONDATA::VailGuestConnect(SessionDataForSpecifiedSession);
        v5 = v29;
        if ( v29 >= 0 )
        {
          v34 = 1;
        }
        else
        {
          v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          *(_QWORD *)(v33 + 24) = v5;
          WdLogEvent5_WdWarning(v33);
          v34 = 0;
        }
        *((_BYTE *)Current + 448) = v34;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v23);
        LODWORD(v5) = -1073741811;
        *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v28);
        *(_QWORD *)(v27 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v27);
      }
    }
  }
  else
  {
    LODWORD(v5) = -1073741790;
    v35 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v35 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v35);
  }
LABEL_33:
  KeLeaveCriticalRegion();
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  return (unsigned int)v5;
}
