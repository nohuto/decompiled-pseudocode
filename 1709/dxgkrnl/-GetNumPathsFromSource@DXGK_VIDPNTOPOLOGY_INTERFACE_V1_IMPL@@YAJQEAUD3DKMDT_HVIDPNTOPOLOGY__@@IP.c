/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00D37C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rbp
  int NumPathsFromSource; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7032);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v7[3] = v5;
  v7[4] = v6;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v11 = v9;
    if ( v9 )
    {
      v20 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v9, v5, &v20);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
        v19[3] = v5;
        v19[4] = v11;
        v19[5] = v6;
      }
      else
      {
        LODWORD(v6) = 0;
        *a3 = v20;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v18 + 24) = v6;
      WdLogEvent5_WdError(v18);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v17[3] = 0LL;
    v17[4] = v5;
    v17[5] = v6;
    WdLogEvent5_WdError(v17);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 7032);
  return (unsigned int)v6;
}
