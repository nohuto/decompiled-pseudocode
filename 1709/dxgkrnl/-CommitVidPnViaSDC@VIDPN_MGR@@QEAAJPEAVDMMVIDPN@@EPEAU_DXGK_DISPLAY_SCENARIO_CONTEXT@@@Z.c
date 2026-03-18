/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01EB388
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C01ECEB8 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000E448 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00A5664 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176394 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01C3780 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        DXGADAPTER ***this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v14; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rcx
  PVOID ModesArray; // rcx

  if ( this[5][1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 12), (__int64)a2) )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = this;
LABEL_5:
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    v10 = WdLogNewEntry5_WdError(v12);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    if ( !this[1] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = DispConfigConvertFromVidPn(v15, this[1][2], a2, a3);
    v23 = v21;
    if ( v21 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v30[3] = a2;
      v30[4] = v15;
      v30[5] = v23;
    }
    else
    {
      if ( !this[1] )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], v15, a4);
      v23 = v25;
      if ( v25 >= 0 )
        return (unsigned int)v23;
      v28 = WdLogNewEntry5_WdError(v26);
      if ( !this[1] )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = (_QWORD *)v28;
      *(_QWORD *)(v28 + 24) = this[1][2];
      *(_QWORD *)(v28 + 32) = v23;
    }
    WdLogEvent5_WdError(v30);
    ModesArray = v15->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v15->ModesArray = 0LL;
    }
    if ( v15->PathsArray )
    {
      ExFreePoolWithTag(v15->PathsArray, 0);
      v15->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v23;
  }
  v17 = WdLogNewEntry5_WdLowResource(v14);
  if ( !this[1] )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
  }
  *(_QWORD *)(v17 + 24) = this[1][2];
  *(_QWORD *)(v17 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v17);
  return 3221225495LL;
}
