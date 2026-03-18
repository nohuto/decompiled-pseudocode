/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C009BC10
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7042);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = 0;
  v7[3] = this;
  v7[4] = a2;
  v7[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( !this || (v12 = this, *((_DWORD *)this + 16) != 1833172997) )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)v12 + 6) + 368LL);
      v14 = (char *)v12 + 289;
      v15 = (__int64)v12 + 96;
      *(_QWORD *)a2 = v15 & -(__int64)(v14 != 0LL);
      *a3 = v13;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(0LL, v8);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v11 = -1071774973;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    v11 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v10, 7042);
  return v11;
}
