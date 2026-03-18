/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F3F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F2EF4 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  DMMVIDPNTOPOLOGY *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = v4;
  *(_QWORD *)(v5 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4) )
    {
      v12 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v10, &v16);
      v4 = v12;
      if ( v12 >= 0 )
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v16;
      }
      else
      {
        if ( v12 != -1073741801 )
        {
          v13 = WdLogNewEntry5_WdAssertion(v8);
          WdLogEvent5_WdAssertion(v13);
        }
        v14 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v14 + 24) = v4;
        WdLogEvent5_WdError(v14);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdError(v11);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = v4;
    WdLogEvent5_WdError(v7);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 7040);
  return (unsigned int)v4;
}
