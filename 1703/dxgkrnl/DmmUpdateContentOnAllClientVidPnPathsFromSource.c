/*
 * XREFs of DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000971C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00DFA90 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD74C (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  DMMVIDPNTOPOLOGY *v22; // rbp
  __int64 i; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int updated; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  _QWORD v43[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v44; // [rsp+60h] [rbp+8h] BYREF
  __int64 v45; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)v6 + 285);
  if ( !v14 )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v7 + 24) = v6;
    goto LABEL_3;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v43, v15, v11, v12);
    v17 = *(_QWORD *)(v15 + 88);
    v45 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, v18);
    if ( v45 )
    {
      v22 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      for ( i = 0LL; ; ++i )
      {
        v44 = -1;
        v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v22, (unsigned int)v4, i, &v44);
        v6 = (DXGADAPTER *)v24;
        if ( v24 < 0 )
          break;
        if ( v44 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
          goto LABEL_28;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v22, v4, v44);
        if ( !Path )
        {
          v34 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
          WdLogEvent5_WdAssertion(v34);
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, v35, v36, v37);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_27;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      v42[3] = i;
      v42[4] = v4;
      v42[5] = v22;
      v42[6] = v6;
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdError(v21);
      LODWORD(v6) = -1071774884;
    }
LABEL_27:
    auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
    v3 = (unsigned int)v6;
LABEL_28:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40LL), v39, v40, v41);
    return v3;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v16 + 24) = v6;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
