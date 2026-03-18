/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C009A890
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v30; // [rsp+40h] [rbp+8h]

  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = this;
  v8[4] = v7;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v24[3] = 0LL;
    v24[4] = v7;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    v25 = -1073741811;
LABEL_36:
    v12 = v25;
    goto LABEL_18;
  }
  v12 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    v29 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    v25 = -1071774973;
    goto LABEL_36;
  }
  v13 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v13 == v13 || (v9 = *v13 - 8LL, *v13 == 8LL) )
  {
LABEL_30:
    v26 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v26 + 24) = v7;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    while ( *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL) != (_DWORD)v7 )
    {
      v10 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v9 + 8);
      v9 = (__int64)v10 - 8;
      if ( v10 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 120) )
        v9 = 0LL;
      if ( !v9 )
        goto LABEL_30;
    }
  }
  v14 = *((_QWORD *)this + 38);
  v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)this + 6) + 376LL);
  v16 = (_QWORD *)(v14 + 24);
  v30 = v15;
  if ( (_QWORD *)*v16 == v16 )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = *v16 - 8LL;
    if ( !v17 )
    {
LABEL_34:
      v28 = WdLogNewEntry5_WdError(v15, v9);
      *(_QWORD *)(v28 + 24) = v7;
      WdLogEvent5_WdError(v28);
      v25 = -1071774972;
      goto LABEL_36;
    }
    while ( *(_DWORD *)(v17 + 24) != (_DWORD)v7 )
    {
      v9 = *(_QWORD *)(v17 + 8);
      v15 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v14 + 24);
      v17 = v9 - 8;
      if ( v9 == v14 + 24 )
        v17 = 0LL;
      if ( !v17 )
        goto LABEL_34;
    }
  }
  if ( !v17 )
    goto LABEL_34;
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
    v20 = 0LL;
    goto LABEL_33;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v17 + 104);
  v20 = v19;
  if ( !v19 )
  {
LABEL_33:
    v27 = WdLogNewEntry5_WdAssertion(v18, v9, v14, v11);
    WdLogEvent5_WdAssertion(v27);
  }
  v21 = v19 + 137;
  v22 = 0LL;
  if ( v19 != -137 )
    v22 = v20;
  *a3 = v22;
  *a4 = v30;
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v14, 7043);
  return v12;
}
