/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C01DB630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DMMVIDPNTOPOLOGY *v16; // rbp
  __int64 v17; // rax
  int NumPathsFromSource; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rax
  unsigned __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7032);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = v5;
  v7[4] = v6;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v16 = v13;
    if ( v13 )
    {
      v23 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v13, (unsigned int)v5, &v23);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource >= 0 )
      {
        LODWORD(v6) = 0;
        *a3 = v23;
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v19, v12, v20);
        v21[3] = v5;
        v21[4] = v16;
        v21[5] = v6;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v10[3] = 0LL;
    v10[4] = v5;
    v10[5] = v6;
    WdLogEvent5_WdError(v10);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 7032);
  return (unsigned int)v6;
}
