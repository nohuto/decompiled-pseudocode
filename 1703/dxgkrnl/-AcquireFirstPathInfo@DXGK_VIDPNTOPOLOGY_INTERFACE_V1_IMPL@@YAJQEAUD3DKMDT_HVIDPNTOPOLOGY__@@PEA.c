/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E04C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E06D0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DMMVIDPNPRESENTPATH *(__fastcall *v27)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-18h] BYREF
  int v28; // [rsp+28h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v29; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  v6 = this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v21);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 18);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7036);
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v6 && *((_DWORD *)v6 + 46) == 1833173002 )
      v10 = v6;
    else
      v10 = 0LL;
    if ( v10 )
    {
      v28 = 0;
      v29 = 0LL;
      v27 = DMMVIDPNTOPOLOGY::GetFirstPath;
      v11 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              v10,
              &v27,
              &v29);
      v6 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v11;
      if ( v11 == -1071774937 )
      {
        v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v20 = v29 == 0LL;
        *(_QWORD *)(v17 + 24) = v10;
        if ( !v20 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v13, v18, v14, v19);
          WdLogEvent5_WdAssertion(v24);
        }
        LODWORD(v6) = 1075708747;
      }
      else if ( v11 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v25 + 24) = v10;
        *(_QWORD *)(v25 + 32) = v6;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        v6 = v29;
        if ( !v29 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
          WdLogEvent5_WdAssertion(v26);
        }
        *(_QWORD *)a2 = v6;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v23 + 24) = v6;
      WdLogEvent5_WdError(v23);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v6;
    WdLogEvent5_WdError(v22);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7036);
  return (unsigned int)v6;
}
