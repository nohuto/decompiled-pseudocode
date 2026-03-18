/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C01D7F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  int v16; // r9d
  _QWORD *v17; // rdx
  __int64 v18; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  v8 = 0;
  if ( !a4 || !a3 )
  {
    v18 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    v14 = -1073741811;
    goto LABEL_20;
  }
  *a4 = -1;
  *a3 = -1;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v12 = v9;
  if ( !v9 )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v14 = -1071774976;
LABEL_20:
    v8 = v14;
    goto LABEL_21;
  }
  v15 = (_QWORD *)(v9 + 24);
  v16 = 0;
  if ( (_QWORD *)*v15 == v15 )
    v17 = 0LL;
  else
    v17 = (_QWORD *)(*v15 - 8LL);
  if ( a2 )
  {
    while ( v17 )
    {
      v11 = v17[1];
      v17 = (_QWORD *)(v11 - 8);
      if ( v11 == v12 + 24 )
        v17 = 0LL;
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v16 == a2 )
        goto LABEL_16;
    }
    goto LABEL_17;
  }
LABEL_16:
  if ( !v17 )
  {
LABEL_17:
    v14 = 1075708748;
    goto LABEL_20;
  }
  *a4 = *(_DWORD *)(v17[12] + 24LL);
  v11 = *(unsigned int *)(v17[11] + 24LL);
  *a3 = v11;
LABEL_21:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 6061);
  return v8;
}
