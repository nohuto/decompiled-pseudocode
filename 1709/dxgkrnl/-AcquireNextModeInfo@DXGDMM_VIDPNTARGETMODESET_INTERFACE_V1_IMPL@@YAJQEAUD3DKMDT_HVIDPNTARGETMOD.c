/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D8590
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00050C4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A3300 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r14
  _DWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edi
  __int64 v18; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v28)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-40h] BYREF
  int v29; // [rsp+28h] [rbp-38h]
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  v7 = 0;
  if ( !a3 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v20[3] = 0LL;
    v20[4] = a2;
    v20[5] = this;
    WdLogEvent5_WdError(v20);
    v17 = -1073741811;
LABEL_19:
    v7 = v17;
    goto LABEL_14;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v9 )
  {
    v21 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    v17 = -1071774967;
    goto LABEL_19;
  }
  v10 = (_DWORD *)((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  if ( !v10 || *v10 != 305419896 )
  {
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = v10;
    WdLogEvent5_WdError(v27);
    v17 = -1071774959;
    goto LABEL_19;
  }
  v11 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)) + 8);
  if ( !v11 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          v9 + 32,
          v11) )
  {
    v23 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v23 + 24) = v10;
    *(_QWORD *)(v23 + 32) = v9;
    WdLogEvent5_WdError(v23);
    v17 = -1071774928;
    goto LABEL_19;
  }
  v29 = 0;
  v28 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v31 = v11;
  v32 = 0LL;
  v30 = v11;
  v13 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v9,
          (__int64)&v28,
          &v32);
  v17 = v13;
  if ( v13 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = v9;
    if ( v32 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v24);
    }
    v17 = 1075708748;
    goto LABEL_19;
  }
  if ( v13 < 0 )
  {
    v25 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v25 + 24) = v10;
    *(_QWORD *)(v25 + 32) = v9;
    WdLogEvent5_WdDmmEvent(v25);
    goto LABEL_19;
  }
  v18 = v32;
  if ( !v32 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v26);
  }
  *(_QWORD *)&a3->Id = v18;
LABEL_14:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, 6011);
  return v7;
}
