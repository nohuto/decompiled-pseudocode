/*
 * XREFs of DmmGetPathContentFromClientVidPnSource @ 0x1C01D5B38
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(DXGADAPTER *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rbx
  DMMVIDPNTOPOLOGY *v27; // r13
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v39; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD v48[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+78h] [rbp+10h]
  unsigned int v50; // [rsp+80h] [rbp+18h] BYREF
  __int64 v51; // [rsp+88h] [rbp+20h] BYREF

  v49 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)a1 + 285);
  if ( !v15 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    v18 = 0;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v48, v16, v12, v13);
    v19 = *(_QWORD *)(v16 + 88);
    v51 = 0LL;
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
      v20 = *(_QWORD *)(v16 + 88);
    }
    else
    {
      v20 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v51, v20);
    if ( v51 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
      v25 = 0LL;
      v26 = *(_QWORD *)(v16 + 80);
      v27 = (DMMVIDPNTOPOLOGY *)(v51 + 96);
      while ( 1 )
      {
        v50 = -1;
        v28 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v27, v5, v25, &v50);
        v24 = v28;
        if ( v28 < 0 )
          break;
        v33 = v50;
        if ( v50 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath(v27, v5, v50);
        if ( !Path )
        {
          v39 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          WdLogEvent5_WdAssertion(v39);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v26,
                       (unsigned int)v33,
                       v36,
                       v37);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            v18 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v26 )
              ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), v29);
            auto_rc<DMMVIDPN const>::reset(&v51, 0LL);
            *a3 = v18;
            goto LABEL_33;
          }
        }
        else
        {
          v45 = WdLogNewEntry5_WdError(v41, v29);
          *(_QWORD *)(v45 + 24) = v33;
          *(_QWORD *)(v45 + 32) = v26;
          WdLogEvent5_WdError(v45);
        }
        v5 = v49;
        ++v25;
      }
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
      v46[3] = v25;
      v46[4] = v5;
      v46[5] = v27;
      v46[6] = v24;
      if ( v26 )
        ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), v47);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdError(v23);
      LODWORD(v24) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v51, 0LL);
    v3 = v24;
LABEL_33:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48[0] + 40LL), v42, v43, v44);
    return v3;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
