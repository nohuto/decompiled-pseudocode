/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00B5648
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B5770 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DE84 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  const struct DMMVIDEOPRESENTTARGET *v9; // rsi
  __int64 v10; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v12; // rdx
  unsigned int v13; // edi
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp+10h] BYREF
  __int64 v23; // [rsp+40h] [rbp+18h]

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_25:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v19);
  }
  v5 = *((_QWORD *)a1 + 288);
  if ( !v5 )
  {
    v18 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_25;
  }
  v6 = *(_QWORD *)(v5 + 88);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, v6);
    v7 = *(_DWORD *)(v6 + 492);
    if ( v7 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 80) + 72LL));
      v8 = *(_QWORD *)(v6 + 80);
      v9 = 0LL;
      v23 = v8;
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 != v8 + 24 )
        v9 = (const struct DMMVIDEOPRESENTTARGET *)(v10 - 8);
      NextTarget = v9;
      if ( !v9 )
        goto LABEL_21;
      while ( !IsInternalVideoOutput(*((_DWORD *)NextTarget + 20)) )
      {
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v8, v12);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v9 = v12;
LABEL_13:
      if ( v9 )
      {
        *a2 = *((_DWORD *)v9 + 6);
        v13 = 0;
      }
      else
      {
LABEL_21:
        v13 = -1073741275;
      }
      if ( v8 )
      {
        v14 = (void (__fastcall ***)(_QWORD, __int64))(v8 + 64);
        v15 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 72));
        if ( v15 )
        {
          if ( v15 < 0 )
          {
            v21 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v21 + 24) = v15;
            WdLogEvent5_WdError(v21);
          }
        }
        else if ( v14 )
        {
          (**v14)(v14, 1LL);
        }
      }
    }
    else
    {
      *a2 = v7;
      v13 = 0;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return v13;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
