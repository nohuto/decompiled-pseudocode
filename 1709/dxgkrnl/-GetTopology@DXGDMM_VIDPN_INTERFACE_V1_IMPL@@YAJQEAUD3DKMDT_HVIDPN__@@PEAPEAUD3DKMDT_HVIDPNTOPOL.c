/*
 * XREFs of ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E3580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6033);
  v7 = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v11 = v8;
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 48);
      if ( *(_QWORD *)(v12 + 88) == v8 )
      {
        v19 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v19 + 24) = v11;
        WdLogEvent5_WdError(v19);
        v7 = -1071774909;
      }
      else
      {
        v13 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(v12 + 432);
        v14 = v8 + 289;
        v15 = v14 - 193;
        *(_QWORD *)a2 = (v14 - 193) & -(__int64)(v14 != 0);
        *a3 = v13;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v7 = -1071774973;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    v7 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v10, 6033);
  return v7;
}
