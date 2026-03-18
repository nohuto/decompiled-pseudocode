/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0011FFC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C00120FC (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C011EB08 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011EBB8 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTSOURCESET *v11; // rbx
  DMMVIDEOPRESENTSOURCE *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  DMMVIDEOPRESENTSOURCE *v26; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v11 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v12 = (DMMVIDEOPRESENTSOURCE *)operator new(0x80uLL, 0x4E506456u, PagedPool);
      if ( v12 )
        v12 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v12, v11, a2->Id, v14);
      if ( v12 )
      {
        v26 = v12;
        v15 = DMMVIDEOPRESENTSOURCESET::AddSource(v11, &v26);
        v20 = v15;
        if ( v15 >= 0 )
          return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v11, a2);
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
        v25[3] = 0LL;
        v25[4] = v11;
        v25[5] = v20;
      }
      else
      {
        v24 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v24 + 24) = v11;
        WdLogEvent5_WdLowResource(v24);
        LODWORD(v20) = -1073741801;
      }
      return (unsigned int)v20;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v23 + 24) = this;
      WdLogEvent5_WdError(v23);
      return 3223192341LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdError(v22);
    return 3223192324LL;
  }
}
