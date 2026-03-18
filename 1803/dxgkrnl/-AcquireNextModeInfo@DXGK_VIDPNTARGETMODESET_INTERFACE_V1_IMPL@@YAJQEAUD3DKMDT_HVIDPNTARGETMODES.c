/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D8810
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004B78 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BDB94 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        unsigned __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r14
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-50h] BYREF
  __int64 v40; // [rsp+28h] [rbp-48h]
  __int128 v41; // [rsp+30h] [rbp-40h]
  __int64 v42; // [rsp+40h] [rbp-30h]
  __int128 v43; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+60h] [rbp-10h]
  __int64 v45; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 17);
  v9 = 0;
  v40 = 0LL;
  v39 = 7010;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerEnter, v8, 7010);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 7010);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v14[3] = a2;
  v14[4] = this;
  v14[5] = a3;
  if ( !a3 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v31[3] = 0LL;
    v31[4] = a2;
    v31[5] = this;
    WdLogEvent5_WdError(v31);
    LODWORD(a2) = -1073741811;
LABEL_19:
    v9 = a2;
    goto LABEL_14;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v17 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v17 )
  {
    v32 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    LODWORD(a2) = -1071774967;
    goto LABEL_19;
  }
  v18 = (_DWORD *)((a2 - 16) & ((unsigned __int128)-(__int128)a2 >> 64));
  if ( !v18 || *v18 != 305419896 )
  {
    v38 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v38 + 24) = v18;
    WdLogEvent5_WdError(v38);
    LODWORD(a2) = -1071774959;
    goto LABEL_19;
  }
  v19 = *(_QWORD *)(((a2 - 16) & ((unsigned __int128)-(__int128)a2 >> 64)) + 8);
  if ( !v19 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
          v17 + 32,
          v19) )
  {
    v34 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v34 + 24) = v18;
    *(_QWORD *)(v34 + 32) = v17;
    WdLogEvent5_WdError(v34);
    LODWORD(a2) = -1071774928;
    goto LABEL_19;
  }
  DWORD2(v41) = 0;
  *(_QWORD *)&v41 = DMMVIDPNTARGETMODESET::GetNextMode;
  v42 = v19;
  v45 = 0LL;
  v43 = v41;
  v44 = v19;
  v21 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v17,
          (__int64)&v43,
          &v45);
  a2 = v21;
  if ( v21 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v17;
    if ( v45 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v35);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_19;
  }
  if ( v21 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v36[3] = v18;
    v36[4] = v17;
    v36[5] = a2;
    WdLogEvent5_WdError(v36);
    goto LABEL_19;
  }
  v26 = v45;
  if ( !v45 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v23);
    WdLogEvent5_WdAssertion(v37);
  }
  *(_QWORD *)&a3->Id = v26;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v39);
  return v9;
}
