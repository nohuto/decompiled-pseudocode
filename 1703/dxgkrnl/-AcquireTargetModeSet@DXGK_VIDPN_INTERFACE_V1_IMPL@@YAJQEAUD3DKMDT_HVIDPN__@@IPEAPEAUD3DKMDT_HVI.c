/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00963F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v31; // [rsp+40h] [rbp+8h]

  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = this;
  v8[4] = v7;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v25[3] = 0LL;
    v25[4] = v7;
    v25[5] = this;
    WdLogEvent5_WdError(v25);
    v26 = -1073741811;
LABEL_37:
    v13 = v26;
    goto LABEL_22;
  }
  v13 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    v30 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v26 = -1071774973;
    goto LABEL_37;
  }
  v14 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v14 == v14 || (v9 = *v14 - 8LL, *v14 == 8LL) )
  {
LABEL_31:
    v27 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v27 + 24) = v7;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    while ( *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL) != (_DWORD)v7 )
    {
      v10 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v9 + 8);
      v9 = (__int64)v10 - 8;
      if ( v10 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 120) )
        v9 = 0LL;
      if ( !v9 )
        goto LABEL_31;
    }
  }
  v15 = *((_QWORD *)this + 39);
  v16 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)this + 6) + 384LL);
  v17 = (_QWORD *)(v15 + 24);
  v31 = v16;
  if ( (_QWORD *)*v17 == v17 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = *v17 - 8LL;
    if ( !v18 )
    {
LABEL_35:
      v29 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v29 + 24) = v7;
      WdLogEvent5_WdError(v29);
      v26 = -1071774971;
      goto LABEL_37;
    }
    while ( *(_DWORD *)(v18 + 24) != (_DWORD)v7 )
    {
      v16 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v18 + 8);
      if ( v16 == (struct D3DKMDT_HVIDPNTARGETMODESET__ *)(v15 + 24) )
        v18 = 0LL;
      else
        v18 = (__int64)(v16 - 2);
      if ( !v18 )
        goto LABEL_35;
    }
  }
  if ( !v18 )
    goto LABEL_35;
  v19 = *(_QWORD *)(v18 + 104);
  if ( !v19 )
  {
    v20 = 0LL;
    v21 = 0LL;
    goto LABEL_34;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
  v20 = *(_QWORD *)(v18 + 104);
  v21 = v20;
  if ( !v20 )
  {
LABEL_34:
    v28 = WdLogNewEntry5_WdAssertion(v19, v15, v11, v12);
    WdLogEvent5_WdAssertion(v28);
  }
  v22 = v20 + 137;
  v23 = 0LL;
  if ( v20 != -137 )
    v23 = v21;
  *a3 = v23;
  *a4 = v31;
LABEL_22:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v11, 7048);
  return v13;
}
