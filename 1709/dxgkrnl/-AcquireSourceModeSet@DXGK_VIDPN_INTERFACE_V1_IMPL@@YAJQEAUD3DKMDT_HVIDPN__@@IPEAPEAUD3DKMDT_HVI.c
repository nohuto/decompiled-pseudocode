/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00EF740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  _QWORD *v8; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v9; // rcx
  unsigned int v10; // ebx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rsi
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rdx
  char *v13; // rdx
  __int64 v14; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // rcx
  __int64 v16; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v28; // [rsp+50h] [rbp+8h]

  v6 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v10 = 0;
  v8[3] = this;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v22[3] = 0LL;
    v22[4] = v6;
    v22[5] = this;
    WdLogEvent5_WdError(v22);
    v23 = -1073741811;
LABEL_38:
    v10 = v23;
    goto LABEL_18;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 16) != 1833172997) )
    v11 = 0LL;
  if ( !v11 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    v23 = -1071774973;
    goto LABEL_38;
  }
  v12 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v11 + 15);
  if ( v12 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v11 + 120) )
    goto LABEL_34;
  v13 = (char *)v12 - 8;
  if ( !v13 )
    goto LABEL_34;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) == (_DWORD)v6 )
      break;
    v9 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 1);
    v13 = (char *)v9 - 8;
    if ( v9 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v11 + 120) )
      v13 = 0LL;
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_34:
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = v6;
    *(_QWORD *)(v25 + 32) = v11;
    WdLogEvent5_WdError(v25);
  }
  v14 = *((_QWORD *)v11 + 38);
  v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v11 + 6) + 384LL);
  v28 = v15;
  v16 = *(_QWORD *)(v14 + 24);
  if ( v16 == v14 + 24 )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v16 - 8);
    if ( !v17 )
    {
LABEL_37:
      v27 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdError(v27);
      v23 = -1071774972;
      goto LABEL_38;
    }
    do
    {
      if ( *((_DWORD *)v17 + 6) == (_DWORD)v6 )
        break;
      v15 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)*((_QWORD *)v17 + 1);
      v17 = v15 - 2;
      if ( v15 == (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v14 + 24) )
        v17 = 0LL;
    }
    while ( v17 );
  }
  if ( !v17 )
    goto LABEL_37;
  v18 = *((_QWORD *)v17 + 13);
  if ( !v18 )
  {
    v19 = 0LL;
    goto LABEL_36;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *((_QWORD *)v17 + 13);
  if ( !v19 )
  {
LABEL_36:
    v26 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v26);
  }
  v20 = v19 & -(__int64)(v19 != -137);
  *a3 = v20;
  *a4 = v28;
LABEL_18:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v14, 7043);
  return v10;
}
