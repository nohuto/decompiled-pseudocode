/*
 * XREFs of ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C00130D4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E808 (-AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  DMMVIDEOPRESENTSOURCESET *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v17; // [rsp+30h] [rbp+8h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = a2;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)a2 = 0LL;
  v7 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( v7 )
  {
    v17 = 0LL;
    v9 = DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(v7, &v17);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741801 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdError(v16);
      return (unsigned int)v11;
    }
    else
    {
      *(_QWORD *)a2 = v17;
      return 0LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3223192341LL;
  }
}
