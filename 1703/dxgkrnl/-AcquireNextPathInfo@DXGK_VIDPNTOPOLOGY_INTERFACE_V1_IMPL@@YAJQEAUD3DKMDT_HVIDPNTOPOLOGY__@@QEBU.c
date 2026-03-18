/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00E0320
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E0A98 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  volatile signed __int32 *v4; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v14; // rbp
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // [rsp+20h] [rbp-58h]
  __int128 v37; // [rsp+40h] [rbp-38h] BYREF
  __int64 v38; // [rsp+50h] [rbp-28h]
  __int64 v39; // [rsp+80h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  v6 = a2;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v25 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v25);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 19);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7037);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = v6;
  v8[4] = this;
  v8[5] = a3;
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v26[3] = 0LL;
    v26[4] = v6;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    LODWORD(v6) = -1073741811;
LABEL_19:
    v13 = (unsigned int)v6;
    goto LABEL_20;
  }
  v13 = 0;
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v35 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v6) = -1071774976;
    goto LABEL_19;
  }
  if ( !v6 )
  {
    v14 = 0LL;
LABEL_37:
    v34 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v34 + 24) = v14;
    WdLogEvent5_WdError(v34);
    LODWORD(v6) = -1071774951;
    goto LABEL_19;
  }
  v14 = v6 - 4;
  if ( v6 == (struct D3DKMDT_HVIDPNTOPOLOGY__ *)16 || *(_DWORD *)v14 != 305419896 )
    goto LABEL_37;
  v15 = *((_QWORD *)v14 + 1);
  if ( !v15 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v27);
LABEL_26:
    v28 = WdLogNewEntry5_WdError(v10, v16);
    *(_QWORD *)(v28 + 24) = v14;
    *(_QWORD *)(v28 + 32) = this;
    WdLogEvent5_WdError(v28);
    LODWORD(v6) = -1071774928;
    goto LABEL_19;
  }
  v16 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v16 == v16 )
    goto LABEL_26;
  v10 = *v16 - 8LL;
  if ( *v16 == 8LL )
    goto LABEL_26;
  do
  {
    if ( v10 == v15 )
      break;
    v29 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v29 - 1);
    if ( v29 == v16 )
      v10 = 0LL;
  }
  while ( v10 );
  if ( !v10 )
    goto LABEL_26;
  DWORD2(v36) = 0;
  *(_QWORD *)&v36 = DMMVIDPNTOPOLOGY::GetNextPath;
  v39 = 0LL;
  v37 = v36;
  v38 = v15;
  v17 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          this,
          &v37,
          &v39,
          1LL,
          DMMVIDPNTOPOLOGY::GetNextPath,
          0,
          v15);
  v6 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v17;
  if ( v17 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = this;
    if ( v39 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v19, v22, v20, v23);
      WdLogEvent5_WdAssertion(v30);
    }
    LODWORD(v6) = 1075708748;
    goto LABEL_19;
  }
  if ( v17 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v31[3] = v14;
    v31[4] = this;
    v31[5] = v6;
    WdLogEvent5_WdError(v31);
    goto LABEL_19;
  }
  v32 = v39;
  if ( !v39 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v33);
  }
  *(_QWORD *)&a3->VidPnSourceId = v32;
LABEL_20:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7037);
  return v13;
}
