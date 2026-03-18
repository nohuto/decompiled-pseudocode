/*
 * XREFs of DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01D60F8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(DXGADAPTER *a1, __int64 a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rsi
  DMMVIDPNTOPOLOGY *v28; // r15
  __int64 v29; // rbx
  __int64 i; // rbp
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v46[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v47; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)a1 + 285);
  if ( !v17 )
  {
    v11 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v46, v18, v14, v15);
    v20 = *(_QWORD *)(v18 + 88);
    v45 = 0LL;
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 32));
      v21 = *(_QWORD *)(v18 + 88);
    }
    else
    {
      v21 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, v21);
    if ( v45 )
    {
      v28 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
      v29 = *(_QWORD *)(v18 + 80);
      for ( i = 0LL; ; ++i )
      {
        v47 = -1;
        v31 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v28, (unsigned int)v5, i, &v47);
        v27 = v31;
        if ( v31 < 0 )
          break;
        v36 = v47;
        if ( v47 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, v47, v34, v35);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            *a3 = 1;
            *a4 = v36;
LABEL_23:
            if ( v29 )
              ReferenceCounted::Release((ReferenceCounted *)(v29 + 64), v32);
            auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
            goto LABEL_31;
          }
        }
        else
        {
          v42 = WdLogNewEntry5_WdError(v38, v32);
          *(_QWORD *)(v42 + 24) = v36;
          *(_QWORD *)(v42 + 32) = v29;
          WdLogEvent5_WdError(v42);
        }
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      v43[3] = i;
      v43[4] = v5;
      v43[5] = v28;
      v43[6] = v27;
      if ( v29 )
        ReferenceCounted::Release((ReferenceCounted *)(v29 + 64), v44);
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = a1;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v27) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
    v4 = v27;
LABEL_31:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46[0] + 40LL), v39, v40, v41);
    return v4;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
