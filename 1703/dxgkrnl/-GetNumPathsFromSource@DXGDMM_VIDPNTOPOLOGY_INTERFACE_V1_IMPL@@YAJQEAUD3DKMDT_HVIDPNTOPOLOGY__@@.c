/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00AD240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rsi
  int NumPathsFromSource; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6018);
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v10 = v7;
    if ( v7 )
    {
      v20 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v7, v5, &v20);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v19[3] = v5;
        v19[4] = v10;
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
      v18 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v18 + 24) = v6;
      WdLogEvent5_WdError(v18);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v17[3] = 0LL;
    v17[4] = v5;
    v17[5] = v6;
    WdLogEvent5_WdError(v17);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 6018);
  return (unsigned int)v6;
}
