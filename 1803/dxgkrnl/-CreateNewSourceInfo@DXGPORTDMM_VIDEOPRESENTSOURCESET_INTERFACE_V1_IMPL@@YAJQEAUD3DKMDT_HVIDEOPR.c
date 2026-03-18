/*
 * XREFs of ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0223F80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C022441C (-AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  DMMVIDEOPRESENTSOURCESET *v9; // rcx
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v17; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 26) == 1833172993 )
    v9 = this;
  else
    v9 = 0LL;
  if ( v9 )
  {
    v17 = 0LL;
    v12 = DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(v9, &v17);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *(_QWORD *)a2 = v17;
      return 0LL;
    }
    else
    {
      if ( v12 != -1073741801 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v16 + 24) = v14;
      WdLogEvent5_WdError(v16);
      return (unsigned int)v14;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3223192341LL;
  }
}
