/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C0213DD0
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1C00DEEB0 (DxgkIsBootPrimarySource.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  DMMVIDPNTOPOLOGY *v22; // r15
  __int64 v23; // rbx
  __int64 i; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+70h] [rbp+18h] BYREF
  __int64 v37; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 307);
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v35, v13);
    v15 = *(_QWORD *)(v13 + 88);
    v37 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v37, v16);
    if ( v37 )
    {
      v22 = (DMMVIDPNTOPOLOGY *)(v37 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
      v23 = *(_QWORD *)(v13 + 80);
      for ( i = 0LL; ; ++i )
      {
        v36 = -1;
        v25 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v22, v4, i, &v36);
        v21 = v25;
        if ( v25 < 0 )
          break;
        v30 = v36;
        if ( v36 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v23, v36);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 408) )
          {
            *a3 = 1;
LABEL_23:
            if ( v23 )
              ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
            goto LABEL_30;
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v33 + 24) = v30;
          *(_QWORD *)(v33 + 32) = v23;
          WdLogEvent5_WdError(v33);
        }
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v34[3] = i;
      v34[4] = v4;
      v34[5] = v22;
      v34[6] = v21;
      if ( v23 )
        ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdWarning(v20);
      LODWORD(v21) = -1071774884;
    }
    v3 = v21;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v37, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35[0] + 40));
    return v3;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
