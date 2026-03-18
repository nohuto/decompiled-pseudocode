/*
 * XREFs of ?GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C01F19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  DMMVIDPNTOPOLOGY *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6020);
  v7 = 0;
  if ( a3 )
  {
    *a3 = -1;
    v11 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      *a3 = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v11, (unsigned int)v5);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      v7 = -1071774976;
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = 0LL;
    v8[4] = this;
    v8[5] = v5;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6020);
  return v7;
}
