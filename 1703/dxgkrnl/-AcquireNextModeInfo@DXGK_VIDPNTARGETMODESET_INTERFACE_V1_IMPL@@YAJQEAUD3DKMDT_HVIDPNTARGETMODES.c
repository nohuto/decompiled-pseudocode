/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00F8E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00085A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE3B8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v32; // rdx
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 v42; // [rsp+20h] [rbp-40h]
  __int128 v43; // [rsp+40h] [rbp-20h] BYREF
  __int64 v44; // [rsp+50h] [rbp-10h]
  __int64 v45; // [rsp+80h] [rbp+20h] BYREF

  v5 = (unsigned __int64)a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     (__int64)this,
                                                     (__int64)a2,
                                                     (__int64)a3,
                                                     (__int64)a4) + 17);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7010);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v14 = 0;
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( !a3 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v34[3] = 0LL;
    v34[4] = v5;
    v34[5] = this;
    WdLogEvent5_WdError(v34);
    LODWORD(v5) = -1073741811;
LABEL_19:
    v14 = v5;
    goto LABEL_14;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v19 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v19 )
  {
    v35 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v5) = -1071774967;
    goto LABEL_19;
  }
  v20 = (_DWORD *)((v5 - 16) & ((unsigned __int128)-(__int128)v5 >> 64));
  if ( !v20 || *v20 != 305419896 )
  {
    v41 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v41 + 24) = v20;
    WdLogEvent5_WdError(v41);
    LODWORD(v5) = -1071774959;
    goto LABEL_19;
  }
  v21 = *(_QWORD *)(((v5 - 16) & ((unsigned __int128)-(__int128)v5 >> 64)) + 8);
  if ( !v21 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v19 + 32, v21) )
  {
    v37 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v37 + 24) = v20;
    *(_QWORD *)(v37 + 32) = v19;
    WdLogEvent5_WdError(v37);
    LODWORD(v5) = -1071774928;
    goto LABEL_19;
  }
  DWORD2(v42) = 0;
  *(_QWORD *)&v42 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v45 = 0LL;
  v43 = v42;
  v44 = v21;
  v25 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v19,
          (__int64)&v43,
          &v45,
          v24);
  v5 = v25;
  if ( v25 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = v19;
    if ( v45 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v27, v32, v28, v33);
      WdLogEvent5_WdAssertion(v38);
    }
    LODWORD(v5) = 1075708748;
    goto LABEL_19;
  }
  if ( v25 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v39[3] = v20;
    v39[4] = v19;
    v39[5] = v5;
    WdLogEvent5_WdError(v39);
    goto LABEL_19;
  }
  v30 = v45;
  if ( !v45 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    WdLogEvent5_WdAssertion(v40);
  }
  *(_QWORD *)&a3->Id = v30;
LABEL_14:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 7010);
  return v14;
}
