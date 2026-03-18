/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C0219540
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004B78 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BDB94 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+20h] [rbp-50h] BYREF
  __int64 v34; // [rsp+28h] [rbp-48h]
  struct DMMVIDPNTARGETMODE *(__fastcall *v35)(DMMVIDPNTARGETMODESET *, const struct DMMVIDPNTARGETMODE *const); // [rsp+30h] [rbp-40h] BYREF
  int v36; // [rsp+38h] [rbp-38h]
  __int64 v37; // [rsp+40h] [rbp-30h]
  __int64 v38; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0;
  v34 = 0LL;
  v33 = 6011;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 6011);
  if ( !a3 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = a2;
    v9[5] = this;
    WdLogEvent5_WdError(v9);
    v10 = -1073741811;
LABEL_24:
    v4 = v10;
    goto LABEL_25;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v12 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v10 = -1071774967;
    goto LABEL_24;
  }
  v14 = (_DWORD *)((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  if ( !v14 || *v14 != 305419896 )
  {
    v29 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v29 + 24) = v14;
    WdLogEvent5_WdError(v29);
    v10 = -1071774959;
    goto LABEL_24;
  }
  v15 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)) + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
          v12 + 32,
          v15) )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v14;
    *(_QWORD *)(v18 + 32) = v12;
    WdLogEvent5_WdError(v18);
    v10 = -1071774928;
    goto LABEL_24;
  }
  v36 = 0;
  v35 = DMMVIDPNTARGETMODESET::GetNextMode;
  v38 = v15;
  v39 = 0LL;
  v37 = v15;
  v19 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v12,
          (__int64)&v35,
          &v39);
  v10 = v19;
  if ( v19 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v12;
    if ( v39 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v25);
    }
    v10 = 1075708748;
    goto LABEL_24;
  }
  if ( v19 < 0 )
  {
    v26 = WdLogNewEntry5_WdDmmEvent(v21);
    *(_QWORD *)(v26 + 24) = v14;
    *(_QWORD *)(v26 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v26);
    goto LABEL_24;
  }
  v27 = v39;
  if ( !v39 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v28);
  }
  *(_QWORD *)&a3->Id = v27;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return v4;
}
