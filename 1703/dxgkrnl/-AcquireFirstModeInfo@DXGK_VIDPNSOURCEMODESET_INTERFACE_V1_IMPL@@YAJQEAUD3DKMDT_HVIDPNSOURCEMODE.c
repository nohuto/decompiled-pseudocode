/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01DA850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000C3B4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DFC10 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v31)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v32; // [rsp+28h] [rbp-10h]
  __int64 v33; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, a4) + 12);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerEnter, v8, 7001);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v18 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v5);
    if ( v18 )
    {
      v32 = 0;
      v33 = 0LL;
      v31 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v21 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v18,
              (__int64)&v31,
              &v33,
              v19);
      v5 = v21;
      if ( v21 == -1071774902 )
      {
        v24 = WdLogNewEntry5_WdWarning(v14, v22, v15, v23);
        *(_QWORD *)(v24 + 24) = v18;
        WdLogEvent5_WdWarning(v24);
        if ( v33 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v14, v25, v15, v26);
          WdLogEvent5_WdAssertion(v27);
        }
        LODWORD(v5) = 1075708747;
      }
      else if ( v21 >= 0 )
      {
        v5 = v33;
        if ( !v33 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v14, v22, v15, v23);
          WdLogEvent5_WdAssertion(v29);
        }
        *(_QWORD *)a2 = v5;
        LODWORD(v5) = 0;
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v14, v22);
        *(_QWORD *)(v28 + 24) = v18;
        *(_QWORD *)(v28 + 32) = v5;
        WdLogEvent5_WdError(v28);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
      LODWORD(v5) = -1071774968;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = v5;
    WdLogEvent5_WdError(v13);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7001);
  return (unsigned int)v5;
}
