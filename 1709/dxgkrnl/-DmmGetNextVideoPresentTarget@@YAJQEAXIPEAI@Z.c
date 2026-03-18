/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C00F3AA8
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01047D0 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(DXGADAPTER *a1, int a2, unsigned int *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  __int64 v11; // rcx
  unsigned int v12; // edi
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF
  __int64 v23; // [rsp+58h] [rbp+20h]

  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v19);
  }
  v7 = *((_QWORD *)a1 + 288);
  if ( !v7 )
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, *(_QWORD *)(v7 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v9 = *(_QWORD *)(v8 + 80);
    v23 = v9;
    if ( a2 == -1 )
    {
      NextTarget = 0LL;
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 != v9 + 24 )
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 8);
    }
    else
    {
      TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, a2);
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v9, TargetById);
    }
    if ( NextTarget )
    {
      *a3 = *((_DWORD *)NextTarget + 6);
      v12 = 0;
    }
    else
    {
      v12 = -1073741275;
    }
    if ( v9 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 64);
      v14 = _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
      if ( v14 )
      {
        if ( v14 < 0 )
        {
          v21 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v21 + 24) = v14;
          WdLogEvent5_WdError(v21);
        }
      }
      else if ( v13 )
      {
        (**v13)(v13, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return v12;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
