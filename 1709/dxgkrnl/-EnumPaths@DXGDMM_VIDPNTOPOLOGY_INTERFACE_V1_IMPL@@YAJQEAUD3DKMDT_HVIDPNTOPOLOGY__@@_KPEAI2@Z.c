/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C01F1220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r8
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  v8 = 0;
  if ( !a4 || !a3 )
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    v14 = -1073741811;
    goto LABEL_19;
  }
  *a4 = -1;
  *a3 = -1;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v9 )
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    v14 = -1071774976;
LABEL_19:
    v8 = v14;
    goto LABEL_20;
  }
  v13 = 0LL;
  v12 = *(_QWORD *)(v9 + 24);
  v15 = 0;
  if ( v12 != v9 + 24 )
    v13 = (_QWORD *)(v12 - 8);
  if ( a2 )
  {
    while ( v13 )
    {
      v12 = v13[1];
      v13 = (_QWORD *)(v12 - 8);
      if ( v12 == v9 + 24 )
        v13 = 0LL;
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v15 == a2 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  if ( !v13 )
  {
LABEL_16:
    v14 = 1075708748;
    goto LABEL_19;
  }
  *a4 = *(_DWORD *)(v13[12] + 24LL);
  v12 = *(unsigned int *)(v13[11] + 24LL);
  *a3 = v12;
LABEL_20:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, (__int64)v13, 6061);
  return v8;
}
