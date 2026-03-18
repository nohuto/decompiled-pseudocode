/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C007B228
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C00130F0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C007C440 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  ReferenceCounted *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // esi
  DMMVIDPNTOPOLOGY *v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int64 i; // r15
  __int64 v28; // rcx
  DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v30; // rax
  int updated; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+70h] [rbp+40h] BYREF
  __int64 v39; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a2;
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
  v11 = *((_QWORD *)a1 + 288);
  if ( !v11 )
  {
    v7 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v7 + 24) = a1;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v12);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 72) + 72LL));
    v14 = *(_QWORD *)(v12 + 72);
    v15 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v14, v4);
    v17 = v15;
    if ( v15 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v19 = *(ReferenceCounted **)(v15 + 128);
      if ( v19 )
        ReferenceCounted::Release(v19);
      *(_QWORD *)(v17 + 128) = a3;
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
      v20 = *(_QWORD *)(v12 + 88);
      v39 = 0LL;
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 32));
        v21 = *(_QWORD *)(v12 + 88);
      }
      else
      {
        v21 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v39, v21);
      if ( v39 )
      {
        v25 = (DMMVIDPNTOPOLOGY *)(v39 + 96);
        v26 = 0LL;
        for ( i = 0LL; ; v26 = i )
        {
          v38 = -1;
          v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, v4, v26, &v38);
          if ( v24 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34);
            v36[3] = i;
            v36[4] = v4;
            v36[5] = v25;
            v36[6] = v24;
            goto LABEL_34;
          }
          if ( v38 == -1 )
            break;
          Path = DMMVIDPNTOPOLOGY::FindPath(v25, v4, v38);
          if ( !Path )
          {
            v30 = WdLogNewEntry5_WdAssertion(v28);
            WdLogEvent5_WdAssertion(v30);
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          v24 = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32) + 24) = updated;
            goto LABEL_34;
          }
          v24 = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path);
          if ( v24 < 0 )
            goto LABEL_34;
          ++i;
        }
        auto_rc<DMMVIDPN const>::reset(&v39, 0LL);
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = a1;
        WdLogEvent5_WdError(v23);
        v24 = -1071774884;
LABEL_34:
        auto_rc<DMMVIDPN const>::reset(&v39, 0LL);
        v3 = v24;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = v4;
      WdLogEvent5_WdError(v18);
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
      v3 = -1071774972;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
    return v3;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
