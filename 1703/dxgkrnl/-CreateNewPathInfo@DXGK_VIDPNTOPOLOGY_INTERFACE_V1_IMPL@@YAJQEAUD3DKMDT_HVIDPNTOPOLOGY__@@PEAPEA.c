/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DB2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01D9FA0 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  DMMVIDPNTOPOLOGY *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v23; // [rsp+30h] [rbp+8h] BYREF

  v5 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v5;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5) )
    {
      v17 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v13, &v23, v14, v15);
      v5 = v17;
      if ( v17 >= 0 )
      {
        LODWORD(v5) = 0;
        *(_QWORD *)a2 = v23;
      }
      else
      {
        if ( v17 != -1073741801 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v10, v18, v11, v19);
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = WdLogNewEntry5_WdError(v10, v18);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdError(v21);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v16 + 24) = v5;
      WdLogEvent5_WdError(v16);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = v5;
    WdLogEvent5_WdError(v9);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 7040);
  return (unsigned int)v5;
}
