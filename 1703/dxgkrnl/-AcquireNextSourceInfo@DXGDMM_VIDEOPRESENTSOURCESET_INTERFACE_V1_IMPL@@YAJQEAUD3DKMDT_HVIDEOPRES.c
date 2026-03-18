/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C01D72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0011FFC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00120AC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C01DDEB4 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a4)
{
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v35)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const, __int64, __int64); // [rsp+20h] [rbp-40h] BYREF
  int v36; // [rsp+28h] [rbp-38h]
  __int64 v37; // [rsp+30h] [rbp-30h]
  __int64 v38; // [rsp+50h] [rbp-10h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v39; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6042);
  v7 = 0;
  if ( !a3 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v8[3] = 0LL;
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
LABEL_24:
    v26 = v11;
    goto LABEL_25;
  }
  *a3 = 0LL;
  v14 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v14 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v11 = -1071774955;
    goto LABEL_24;
  }
  v18 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v18 || *(_DWORD *)v18 != 305419896 )
  {
    v33 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdError(v33);
    v11 = -1071774972;
    goto LABEL_24;
  }
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::ContainsByReference(v14 + 8, v19) )
  {
    v23 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v23 + 24) = v18;
    *(_QWORD *)(v23 + 32) = v14;
    WdLogEvent5_WdError(v23);
    v11 = -1071774928;
    goto LABEL_24;
  }
  v36 = 0;
  v35 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v38 = v19;
  v39 = 0LL;
  v37 = v19;
  v26 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
          v14,
          &v35,
          &v39);
  if ( v26 == -1071774972 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v24, v10, v25) + 24) = v14;
    if ( v39 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v9, v27, v10, v28);
      WdLogEvent5_WdAssertion(v29);
    }
    v11 = 1075708748;
    goto LABEL_24;
  }
  if ( v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v9, v24);
    *(_QWORD *)(v30 + 24) = v18;
    *(_QWORD *)(v30 + 32) = v14;
    WdLogEvent5_WdError(v30);
LABEL_25:
    v7 = v26;
    goto LABEL_26;
  }
  v31 = v39;
  if ( !*(_QWORD *)&v39 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v24, v10, v25);
    WdLogEvent5_WdAssertion(v32);
  }
  *a3 = v31;
LABEL_26:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6042);
  return v7;
}
