/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D8E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A322C (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v23)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 16);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7009);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v11 )
    {
      v24 = 0;
      v25 = 0LL;
      v23 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v12 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
              v11,
              (__int64)&v23,
              &v25);
      v4 = v12;
      if ( v12 == -1071774902 )
      {
        v19 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v19 + 24) = v11;
        WdLogEvent5_WdWarning(v19);
        if ( v25 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v20);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v12 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v21 + 24) = v11;
        *(_QWORD *)(v21 + 32) = v4;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        v4 = v25;
        if ( !v25 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v22);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v18 + 24) = v4;
      WdLogEvent5_WdError(v18);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = v4;
    WdLogEvent5_WdError(v17);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 7009);
  return (unsigned int)v4;
}
