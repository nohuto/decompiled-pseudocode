/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01EE49C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0005C58 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00A5868 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01F6144 (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DMMVIDPNTOPOLOGY *v18; // rbp
  __int64 i; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v25; // rax
  int updated; // eax
  _QWORD *v27; // rax
  _QWORD v28[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)v6 + 288);
  if ( !v11 )
  {
    v7 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v7 + 24) = v6;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v28, v12);
    v14 = *(_QWORD *)(v12 + 88);
    v30 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v30, v15);
    if ( v30 )
    {
      v18 = (DMMVIDPNTOPOLOGY *)(v30 + 96);
      for ( i = 0LL; ; ++i )
      {
        v29 = -1;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, (_QWORD *)(unsigned int)v4, i, &v29);
        v6 = (DXGADAPTER *)v20;
        if ( v20 < 0 )
          break;
        if ( v29 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
          goto LABEL_28;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v4, v29);
        if ( !Path )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v25);
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_27;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
      v27[3] = i;
      v27[4] = v4;
      v27[5] = v18;
      v27[6] = v6;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      LODWORD(v6) = -1071774884;
    }
LABEL_27:
    auto_rc<DMMVIDPN const>::reset(&v30, 0LL);
    v3 = (unsigned int)v6;
LABEL_28:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28[0] + 40LL));
    return v3;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = v6;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
