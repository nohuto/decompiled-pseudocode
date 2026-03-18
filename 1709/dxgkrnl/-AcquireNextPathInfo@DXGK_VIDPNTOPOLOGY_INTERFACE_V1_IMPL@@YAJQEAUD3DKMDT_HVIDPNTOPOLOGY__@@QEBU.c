/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00A4870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A3E50 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rbp
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  char *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 v31; // [rsp+20h] [rbp-58h]
  __int128 v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-28h]
  char *v34; // [rsp+80h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 19);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerEnter, v9, 7037);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v10[3] = a2;
  v10[4] = this;
  v10[5] = a3;
  if ( !a3 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v21[3] = 0LL;
    v21[4] = a2;
    v21[5] = this;
    WdLogEvent5_WdError(v21);
    LODWORD(a2) = -1073741811;
LABEL_17:
    v12 = (unsigned int)a2;
    goto LABEL_18;
  }
  v12 = 0;
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v30 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    LODWORD(a2) = -1071774976;
    goto LABEL_17;
  }
  if ( !a2 )
  {
    v13 = 0LL;
LABEL_35:
    v29 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v29 + 24) = v13;
    WdLogEvent5_WdError(v29);
    LODWORD(a2) = -1071774951;
    goto LABEL_17;
  }
  v13 = a2 - 4;
  if ( a2 == (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)16 || *(_DWORD *)v13 != 305419896 )
    goto LABEL_35;
  v14 = *((_QWORD *)v13 + 1);
  if ( !v14 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v22);
LABEL_24:
    v23 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v23 + 24) = v13;
    *(_QWORD *)(v23 + 32) = this;
    WdLogEvent5_WdError(v23);
    LODWORD(a2) = -1071774928;
    goto LABEL_17;
  }
  v15 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v15 == v15 )
    goto LABEL_24;
  v11 = *v15 - 8LL;
  if ( *v15 == 8LL )
    goto LABEL_24;
  do
  {
    if ( v11 == v14 )
      break;
    v24 = *(_QWORD **)(v11 + 8);
    v11 = (__int64)(v24 - 1);
    if ( v24 == v15 )
      v11 = 0LL;
  }
  while ( v11 );
  if ( !v11 )
    goto LABEL_24;
  DWORD2(v31) = 0;
  *(_QWORD *)&v31 = DMMVIDPNTOPOLOGY::GetNextPath;
  v34 = 0LL;
  v32 = v31;
  v33 = v14;
  v16 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)this,
          (__int64)&v32,
          &v34,
          1);
  a2 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)v16;
  if ( v16 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = this;
    if ( v34 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v25);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_17;
  }
  if ( v16 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v26[3] = v13;
    v26[4] = this;
    v26[5] = a2;
    WdLogEvent5_WdError(v26);
    goto LABEL_17;
  }
  v27 = v34;
  if ( !v34 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v28);
  }
  *(_QWORD *)&a3->VidPnSourceId = v27;
LABEL_18:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, 7037);
  return v12;
}
