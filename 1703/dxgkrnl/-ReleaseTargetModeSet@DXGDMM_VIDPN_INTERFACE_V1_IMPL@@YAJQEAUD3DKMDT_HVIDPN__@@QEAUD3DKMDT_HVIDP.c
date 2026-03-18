/*
 * XREFs of ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00F3F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000848C (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DMMVIDPNTARGETMODESET *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r14
  __int64 v39; // rax
  __int64 v40; // [rsp+50h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6037);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 88LL) == v5 )
    {
      v30 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v30 + 24) = v9;
      WdLogEvent5_WdError(v30);
      v8 = -1071774909;
    }
    else
    {
      v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
      v15 = (struct DMMVIDPNTARGETMODESET *)v10;
      if ( v10 )
      {
        v16 = *(_QWORD *)(v10 + 112);
        if ( !v16 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v32);
        }
        if ( !*(_QWORD *)(v16 + 40) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL) == v9 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v40, *(_QWORD *)(v9 + 48), v19, v20);
          DMMVIDPNTARGET::ReleaseModeSet((struct DMMVIDPNTARGETMODESET **)v16, v15, v21, v22);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40 + 40), v23, v24, v25);
        }
        else
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
          if ( !*(_QWORD *)(v16 + 40) )
          {
            v39 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
            WdLogEvent5_WdAssertion(v39);
          }
          v38[3] = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL);
          v38[4] = v15;
          v38[5] = v9;
          WdLogEvent5_WdError(v38);
          v8 = -1071774928;
        }
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v31 + 24) = a2;
        WdLogEvent5_WdError(v31);
        v8 = -1071774967;
      }
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    v8 = -1071774973;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 6037);
  return v8;
}
