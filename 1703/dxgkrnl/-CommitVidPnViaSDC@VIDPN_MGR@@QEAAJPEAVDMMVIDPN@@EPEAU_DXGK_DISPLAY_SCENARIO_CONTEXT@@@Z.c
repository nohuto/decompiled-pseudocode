/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D1E60
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C01D5D98 (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0002060 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00DF1F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01A8D84 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        DXGADAPTER ***this,
        struct DMMVIDPN *a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v5; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v16; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbp
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rcx
  PVOID ModesArray; // rcx

  v5 = a3;
  if ( this[5][1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 12), (__int64)a2) )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 32) = this;
LABEL_5:
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdError(v11);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    if ( !this[1] )
    {
      v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v28);
    }
    LOBYTE(v27) = v5;
    v29 = DispConfigConvertFromVidPn(v17, this[1][2], a2, v27);
    v34 = v29;
    if ( v29 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v45[3] = a2;
      v45[4] = v17;
      v45[5] = v34;
    }
    else
    {
      if ( !this[1] )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], v17, a4);
      v34 = v36;
      if ( v36 >= 0 )
        return (unsigned int)v34;
      v41 = WdLogNewEntry5_WdError(v38, v37);
      if ( !this[1] )
      {
        v44 = WdLogNewEntry5_WdAssertion(v40, v39, v42, v43);
        WdLogEvent5_WdAssertion(v44);
      }
      v45 = (_QWORD *)v41;
      *(_QWORD *)(v41 + 24) = this[1][2];
      *(_QWORD *)(v41 + 32) = v34;
    }
    WdLogEvent5_WdError(v45);
    ModesArray = v17->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v17->ModesArray = 0LL;
    }
    if ( v17->PathsArray )
    {
      ExFreePoolWithTag(v17->PathsArray, 0);
      v17->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v34;
  }
  v20 = WdLogNewEntry5_WdLowResource(v16);
  if ( !this[1] )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
    WdLogEvent5_WdAssertion(v23);
  }
  *(_QWORD *)(v20 + 24) = this[1][2];
  *(_QWORD *)(v20 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v20);
  return 3221225495LL;
}
