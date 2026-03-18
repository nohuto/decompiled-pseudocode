/*
 * XREFs of DmmGetEmergentSimulatedTarget @ 0x1C00F83E4
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8220 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115BE4 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdi
  int *NextTarget; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  int *v16; // rdi
  int v17; // eax
  unsigned int v18; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v21 + 24) = 0LL;
LABEL_24:
    WdLogEvent5_WdError(v21);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = *((_QWORD *)a1 + 285);
  if ( !v8 )
  {
    v21 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v21 + 24) = a1;
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v24, v9, v6, v7);
    v13 = *(_DWORD *)(v9 + 484);
    if ( v13 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
      v14 = *(_QWORD **)(v9 + 80);
      v15 = (_QWORD *)v14[3];
      if ( v15 == v14 + 3 )
        v16 = 0LL;
      else
        v16 = (int *)(v15 - 1);
      NextTarget = v16;
      if ( !v16 )
        goto LABEL_20;
      while ( !IsInternalVideoOutput(NextTarget[20]) )
      {
        NextTarget = (int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                              (DMMVIDEOPRESENTTARGETSET *)v14,
                              (const struct DMMVIDEOPRESENTTARGET *const)NextTarget,
                              v11,
                              v12);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v16 = NextTarget;
LABEL_13:
      if ( v16 )
      {
        v17 = v16[6];
        v18 = 0;
        *a2 = v17;
      }
      else
      {
LABEL_20:
        v18 = -1073741275;
      }
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 8), (__int64)NextTarget);
    }
    else
    {
      *a2 = v13;
      v18 = 0;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40), (__int64)NextTarget, v11, v12);
    return v18;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223192373LL;
  }
}
