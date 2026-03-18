/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0223CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C00467AC (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02244A8 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C022459C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DMMVIDEOPRESENTSOURCESET *v10; // rdi
  __int64 v11; // rax
  DMMVIDEOPRESENTSOURCE *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  DMMVIDEOPRESENTSOURCE *v22; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v23; // [rsp+38h] [rbp+10h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192324LL;
  }
  if ( this && *((_DWORD *)this + 26) == 1833172993 )
    v10 = this;
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return 3223192341LL;
  }
  v12 = (DMMVIDEOPRESENTSOURCE *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v12 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v12, v10, a2->Id);
  v22 = v12;
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v14 + 24) = v10;
    WdLogEvent5_WdLowResource(v14);
    LODWORD(v15) = -1073741801;
LABEL_15:
    auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))&v22);
    return (unsigned int)v15;
  }
  v22 = 0LL;
  v23 = v12;
  v16 = DMMVIDEOPRESENTSOURCESET::AddSource(v10, &v23);
  v15 = v16;
  if ( v16 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v21[3] = 0LL;
    v21[4] = v10;
    v21[5] = v15;
    goto LABEL_15;
  }
  auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))&v22);
  return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v10, a2);
}
