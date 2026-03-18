/*
 * XREFs of ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C01DBA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rax
  char **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax

  v4 = (__int64)this;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7058);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = v6;
  v7[4] = v5;
  v7[5] = v4;
  v8 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
  v11 = v8;
  if ( v8 )
  {
    v15 = DMMVIDPNTOPOLOGY::RemovePath(v8, (char *)(unsigned int)v6, (unsigned int)v5, 0LL);
    v4 = v15;
    if ( v15 >= 0 )
    {
      LODWORD(v4) = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13, v16, v14, v17);
      v18[3] = v6;
      v18[4] = v5;
      v18[5] = v11;
      v18[6] = v4;
      WdLogEvent5_WdDmmEvent(v18);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v4;
    WdLogEvent5_WdError(v12);
    LODWORD(v4) = -1071774976;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7058);
  return (unsigned int)v4;
}
