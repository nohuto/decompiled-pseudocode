/*
 * XREFs of ?AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F3C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE2E4 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v25)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6003);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v26 = 0;
      v27 = 0LL;
      v25 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v9 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
             v7,
             (__int64)&v25,
             &v27,
             v8);
      v14 = v9;
      if ( v9 == -1071774902 )
      {
        v19 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
        *(_QWORD *)(v19 + 24) = v7;
        WdLogEvent5_WdWarning(v19);
        if ( v27 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v11, v20, v12, v21);
          WdLogEvent5_WdAssertion(v22);
        }
        v14 = 1075708747;
      }
      else if ( v9 < 0 )
      {
        v23 = WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
        *(_QWORD *)(v23 + 24) = v7;
        WdLogEvent5_WdDmmEvent(v23);
      }
      else
      {
        v15 = v27;
        if ( !v27 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
          WdLogEvent5_WdAssertion(v24);
        }
        *(_QWORD *)a2 = v15;
        v14 = 0;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v14 = -1071774967;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    v14 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 6003);
  return v14;
}
