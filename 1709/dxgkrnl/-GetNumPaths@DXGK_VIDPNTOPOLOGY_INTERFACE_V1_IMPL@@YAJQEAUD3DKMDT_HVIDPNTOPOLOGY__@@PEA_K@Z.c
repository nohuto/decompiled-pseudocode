/*
 * XREFs of ?GetNumPaths@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA_K@Z @ 0x1C00FAB10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPaths(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7031);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v7 = 0;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v8 + 40);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      v7 = -1071774976;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdError(v12);
    v7 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 7031);
  return v7;
}
