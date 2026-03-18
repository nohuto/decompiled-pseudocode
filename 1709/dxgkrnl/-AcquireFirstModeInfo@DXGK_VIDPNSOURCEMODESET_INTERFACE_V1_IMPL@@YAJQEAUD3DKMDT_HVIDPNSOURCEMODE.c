/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01F37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D6E08 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v23)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 12);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7001);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v14 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v14 )
    {
      v24 = 0;
      v25 = 0LL;
      v23 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v16 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v14,
              (__int64)&v23,
              &v25);
      v4 = v16;
      if ( v16 == -1071774902 )
      {
        v18 = WdLogNewEntry5_WdWarning(v11, v17, v12);
        *(_QWORD *)(v18 + 24) = v14;
        WdLogEvent5_WdWarning(v18);
        if ( v25 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v19);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v16 >= 0 )
      {
        v4 = v25;
        if ( !v25 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v20 + 24) = v14;
        *(_QWORD *)(v20 + 32) = v4;
        WdLogEvent5_WdError(v20);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v4;
      WdLogEvent5_WdError(v15);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = v4;
    WdLogEvent5_WdError(v10);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 7001);
  return (unsigned int)v4;
}
