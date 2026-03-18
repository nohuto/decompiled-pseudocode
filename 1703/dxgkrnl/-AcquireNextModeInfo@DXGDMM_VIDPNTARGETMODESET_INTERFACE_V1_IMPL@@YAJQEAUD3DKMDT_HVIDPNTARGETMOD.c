/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00FA220
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00085A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE3B8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edi
  __int64 v24; // rdi
  __int64 v26; // rdx
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v36)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const, __int64, __int64); // [rsp+20h] [rbp-40h] BYREF
  int v37; // [rsp+28h] [rbp-38h]
  __int64 v38; // [rsp+30h] [rbp-30h]
  __int64 v39; // [rsp+50h] [rbp-10h]
  __int64 v40; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  v7 = 0;
  if ( !a3 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v28[3] = 0LL;
    v28[4] = a2;
    v28[5] = this;
    WdLogEvent5_WdError(v28);
    v23 = -1073741811;
LABEL_19:
    v7 = v23;
    goto LABEL_14;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v12 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v29 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    v23 = -1071774967;
    goto LABEL_19;
  }
  v13 = (_DWORD *)((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  if ( !v13 || *v13 != 305419896 )
  {
    v35 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v35 + 24) = v13;
    WdLogEvent5_WdError(v35);
    v23 = -1071774959;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)) + 8);
  if ( !v14 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v12 + 32, v14) )
  {
    v31 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v31 + 24) = v13;
    *(_QWORD *)(v31 + 32) = v12;
    WdLogEvent5_WdError(v31);
    v23 = -1071774928;
    goto LABEL_19;
  }
  v37 = 0;
  v36 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v39 = v14;
  v40 = 0LL;
  v38 = v14;
  v18 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v12,
          (__int64)&v36,
          &v40,
          v17);
  v23 = v18;
  if ( v18 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = v12;
    if ( v40 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v20, v26, v21, v27);
      WdLogEvent5_WdAssertion(v32);
    }
    v23 = 1075708748;
    goto LABEL_19;
  }
  if ( v18 < 0 )
  {
    v33 = WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
    *(_QWORD *)(v33 + 24) = v13;
    *(_QWORD *)(v33 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v33);
    goto LABEL_19;
  }
  v24 = v40;
  if ( !v40 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    WdLogEvent5_WdAssertion(v34);
  }
  *(_QWORD *)&a3->Id = v24;
LABEL_14:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 6011);
  return v7;
}
