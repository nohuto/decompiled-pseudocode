/*
 * XREFs of DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00DF978 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00DFA90 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD874 (-SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        const struct _D3DKMDT_GAMMA_RAMP *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  DXGADAPTER *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DMMVIDPNTOPOLOGY *v17; // r14
  unsigned __int64 i; // rbp
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int updated; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD v45[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v46; // [rsp+60h] [rbp+8h] BYREF
  __int64 v47; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v40 + 24) = 0LL;
LABEL_27:
    WdLogEvent5_WdError(v40);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v41);
  }
  v11 = *((_QWORD *)v6 + 285);
  if ( !v11 )
  {
    v40 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v40 + 24) = v6;
    goto LABEL_27;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v45, v12, v9, v10);
    v13 = *(_QWORD *)(v12 + 88);
    v47 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v47, v14);
    if ( v47 )
    {
      v17 = (DMMVIDPNTOPOLOGY *)(v47 + 96);
      for ( i = 0LL; ; ++i )
      {
        v46 = -1;
        v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, v4, i, &v46);
        v6 = (DXGADAPTER *)v19;
        if ( v19 < 0 )
          break;
        if ( v46 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
          goto LABEL_13;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v17, v4, v46);
        if ( !Path )
        {
          v43 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
          WdLogEvent5_WdAssertion(v43);
        }
        v33 = DMMVIDPNPRESENTPATH::SetGammaRamp(Path, a3);
        LODWORD(v6) = v33;
        if ( v33 < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v34, v36, v37) + 24) = v33;
          goto LABEL_23;
        }
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetGamma(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_23;
      }
      v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      v44[3] = i;
      v44[4] = v4;
      v44[5] = v17;
      v44[6] = v6;
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v39 + 24) = v6;
      WdLogEvent5_WdError(v39);
      LODWORD(v6) = -1071774884;
    }
LABEL_23:
    auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
    v3 = (unsigned int)v6;
LABEL_13:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v45[0] + 40LL), v24, v25, v26);
    return v3;
  }
  else
  {
    v42 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v42 + 24) = v6;
    WdLogEvent5_WdError(v42);
    return 3223192373LL;
  }
}
