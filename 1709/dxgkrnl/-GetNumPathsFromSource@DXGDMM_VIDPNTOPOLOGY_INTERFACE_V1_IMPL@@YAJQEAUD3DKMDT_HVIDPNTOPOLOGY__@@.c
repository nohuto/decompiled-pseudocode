/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00E34E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  DMMVIDPNTOPOLOGY *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rsi
  int NumPathsFromSource; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6018);
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v9 = v7;
    if ( v7 )
    {
      v18 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v7, v5, &v18);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        v17[3] = v5;
        v17[4] = v9;
        v17[5] = v6;
      }
      else
      {
        LODWORD(v6) = 0;
        *a3 = v18;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v16 + 24) = v6;
      WdLogEvent5_WdError(v16);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v15[3] = 0LL;
    v15[4] = v5;
    v15[5] = v6;
    WdLogEvent5_WdError(v15);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 6018);
  return (unsigned int)v6;
}
