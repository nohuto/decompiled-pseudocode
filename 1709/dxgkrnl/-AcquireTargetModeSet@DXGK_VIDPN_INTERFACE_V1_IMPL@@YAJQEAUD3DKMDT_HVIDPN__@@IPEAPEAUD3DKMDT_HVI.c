/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v29; // [rsp+40h] [rbp+8h]

  v7 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v8[3] = this;
  v8[4] = v7;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v23[3] = 0LL;
    v23[4] = v7;
    v23[5] = this;
    WdLogEvent5_WdError(v23);
    v24 = -1073741811;
LABEL_37:
    v11 = v24;
    goto LABEL_22;
  }
  v11 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v24 = -1071774973;
    goto LABEL_37;
  }
  v12 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v12 == v12 || (v13 = *v12 - 8LL, *v12 == 8LL) )
  {
LABEL_32:
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = v7;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    while ( *(_DWORD *)(*(_QWORD *)(v13 + 96) + 24LL) != (_DWORD)v7 )
    {
      v9 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v13 + 8);
      v13 = (__int64)v9 - 8;
      if ( v9 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 120) )
        v13 = 0LL;
      if ( !v13 )
        goto LABEL_32;
    }
  }
  v14 = *((_QWORD *)this + 39);
  v15 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)this + 6) + 392LL);
  v16 = (_QWORD *)(v14 + 24);
  v29 = v15;
  if ( (_QWORD *)*v16 == v16 )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = *v16 - 8LL;
    if ( !v17 )
    {
LABEL_35:
      v27 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v27 + 24) = v7;
      WdLogEvent5_WdError(v27);
      v24 = -1071774971;
      goto LABEL_37;
    }
    while ( *(_DWORD *)(v17 + 24) != (_DWORD)v7 )
    {
      v15 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v17 + 8);
      if ( v15 == (struct D3DKMDT_HVIDPNTARGETMODESET__ *)(v14 + 24) )
        v17 = 0LL;
      else
        v17 = (__int64)(v15 - 2);
      if ( !v17 )
        goto LABEL_35;
    }
  }
  if ( !v17 )
    goto LABEL_35;
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
    goto LABEL_34;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v17 + 104);
  if ( !v19 )
  {
LABEL_34:
    v26 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v26);
  }
  v20 = v19 + 137;
  v21 = 0LL;
  if ( v19 != -137 )
    v21 = v19;
  *a3 = v21;
  *a4 = v29;
LABEL_22:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v10, 7048);
  return v11;
}
