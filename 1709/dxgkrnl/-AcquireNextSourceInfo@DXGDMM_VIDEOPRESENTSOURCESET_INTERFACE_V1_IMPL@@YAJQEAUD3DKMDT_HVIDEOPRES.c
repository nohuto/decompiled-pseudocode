/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C01F05A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C00130D4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00131CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C01F68D4 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
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
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v28)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-40h] BYREF
  int v29; // [rsp+28h] [rbp-38h]
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v32; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6042);
  v7 = 0;
  if ( !a3 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = 0LL;
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
LABEL_24:
    v21 = v11;
    goto LABEL_25;
  }
  *a3 = 0LL;
  v13 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    v11 = -1071774955;
    goto LABEL_24;
  }
  v15 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v15 || *(_DWORD *)v15 != 305419896 )
  {
    v26 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v26 + 24) = v15;
    WdLogEvent5_WdError(v26);
    v11 = -1071774972;
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
          v13 + 8,
          v16) )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = v15;
    *(_QWORD *)(v19 + 32) = v13;
    WdLogEvent5_WdError(v19);
    v11 = -1071774928;
    goto LABEL_24;
  }
  v29 = 0;
  v28 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v31 = v16;
  v32 = 0LL;
  v30 = v16;
  v21 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
          v13,
          &v28,
          &v32);
  if ( v21 == -1071774972 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v20) + 24) = v13;
    if ( v32 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v22);
    }
    v11 = 1075708748;
    goto LABEL_24;
  }
  if ( v21 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v23 + 24) = v15;
    *(_QWORD *)(v23 + 32) = v13;
    WdLogEvent5_WdError(v23);
LABEL_25:
    v7 = v21;
    goto LABEL_26;
  }
  v24 = v32;
  if ( !*(_QWORD *)&v32 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v25);
  }
  *a3 = v24;
LABEL_26:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6042);
  return v7;
}
