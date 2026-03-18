/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00DD764
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000BA7C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF2FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00BF36C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  DXGADAPTER *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  ReferenceCounted *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DMMVIDPNTOPOLOGY *v18; // r14
  __int64 i; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  const struct DXGK_GAMMA_RAMP **Path; // rbp
  int updated; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+60h] [rbp+8h] BYREF
  __int64 v42; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !a1 )
  {
    v33 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v33 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v33);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v34);
  }
  v8 = *((_QWORD *)v6 + 307);
  if ( !v8 )
  {
    v33 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v33 + 24) = v6;
    goto LABEL_28;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v40, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 72) + 72LL));
    v10 = *(_QWORD *)(v9 + 72);
    v11 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v10, v4);
    v13 = v11;
    if ( v11 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v14 = *(ReferenceCounted **)(v11 + 128);
      if ( v14 )
        ReferenceCounted::Release(v14);
      *(_QWORD *)(v13 + 128) = a3;
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      v15 = *(_QWORD *)(v9 + 88);
      v42 = 0LL;
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
        v16 = *(_QWORD *)(v9 + 88);
      }
      else
      {
        v16 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v42, v16);
      if ( v42 )
      {
        v18 = (DMMVIDPNTOPOLOGY *)(v42 + 96);
        for ( i = 0LL; ; ++i )
        {
          v41 = -1;
          v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, v4, i, &v41);
          v6 = (DXGADAPTER *)v20;
          if ( v20 < 0 )
            break;
          if ( v41 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v42, 0LL);
            goto LABEL_25;
          }
          Path = (const struct DXGK_GAMMA_RAMP **)DMMVIDPNTOPOLOGY::FindPath(v18, v4, v41);
          if ( !Path )
          {
            v38 = WdLogNewEntry5_WdAssertion(v25);
            WdLogEvent5_WdAssertion(v38);
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = updated;
            goto LABEL_37;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp((DMMVIDPNPRESENTPATH *)Path);
          if ( (int)v6 < 0 )
            goto LABEL_37;
        }
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v39[3] = i;
        v39[4] = v4;
        v39[5] = v18;
        v39[6] = v6;
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v37 + 24) = v6;
        WdLogEvent5_WdError(v37);
        LODWORD(v6) = -1071774884;
      }
LABEL_37:
      auto_rc<DMMVIDPN const>::reset(&v42, 0LL);
      v3 = (unsigned int)v6;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v36 + 24) = v4;
      WdLogEvent5_WdError(v36);
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      v3 = -1071774972;
    }
LABEL_25:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40[0] + 40));
    return v3;
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v35 + 24) = v6;
    WdLogEvent5_WdError(v35);
    return 3223192373LL;
  }
}
