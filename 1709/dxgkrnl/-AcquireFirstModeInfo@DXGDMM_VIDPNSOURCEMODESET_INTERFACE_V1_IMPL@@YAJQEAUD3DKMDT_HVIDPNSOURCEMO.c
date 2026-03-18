/*
 * XREFs of ?AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00F90E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D6E08 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v20)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6003);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v21 = 0;
      v22 = 0LL;
      v20 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v7 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
             v6,
             (__int64)&v20,
             &v22);
      v11 = v7;
      if ( v7 == -1071774902 )
      {
        v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v16 + 24) = v6;
        WdLogEvent5_WdWarning(v16);
        if ( v22 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v17);
        }
        v11 = 1075708747;
      }
      else if ( v7 < 0 )
      {
        v18 = WdLogNewEntry5_WdDmmEvent(v9);
        *(_QWORD *)(v18 + 24) = v6;
        WdLogEvent5_WdDmmEvent(v18);
      }
      else
      {
        v12 = v22;
        if ( !v22 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v19);
        }
        *(_QWORD *)a2 = v12;
        v11 = 0;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      v11 = -1071774968;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    v11 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6003);
  return v11;
}
