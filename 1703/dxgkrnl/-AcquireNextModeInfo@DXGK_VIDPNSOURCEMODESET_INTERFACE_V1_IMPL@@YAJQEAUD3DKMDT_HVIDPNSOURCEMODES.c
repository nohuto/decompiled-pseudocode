/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01DA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0007780 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000C3B4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DFCE0 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v24; // rcx
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 v43; // [rsp+20h] [rbp-40h]
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h]
  __int64 v46; // [rsp+80h] [rbp+20h] BYREF

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     (__int64)this,
                                                     (__int64)a2,
                                                     (__int64)a3,
                                                     (__int64)a4) + 13);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7002);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v14 = 0;
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( !a3 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v15[3] = 0LL;
    v15[4] = v5;
    v15[5] = this;
    WdLogEvent5_WdError(v15);
    LODWORD(v5) = -1073741811;
LABEL_24:
    v14 = (unsigned int)v5;
    goto LABEL_25;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v22 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    LODWORD(v5) = -1071774968;
    goto LABEL_24;
  }
  v24 = v5 - 4;
  v25 = (_DWORD *)((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL));
  if ( !v25 || *v25 != 305419896 )
  {
    v41 = WdLogNewEntry5_WdError(v24, v18);
    *(_QWORD *)(v41 + 24) = v5;
    WdLogEvent5_WdError(v41);
    LODWORD(v5) = -1071774960;
    goto LABEL_24;
  }
  v26 = *(_QWORD *)(((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL)) + 8);
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v24, v18, v20, v21);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference(v22 + 32, v26) )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v31 + 24) = v25;
    *(_QWORD *)(v31 + 32) = v22;
    WdLogEvent5_WdError(v31);
    LODWORD(v5) = -1071774928;
    goto LABEL_24;
  }
  DWORD2(v43) = 0;
  *(_QWORD *)&v43 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v46 = 0LL;
  v44 = v43;
  v45 = v26;
  v32 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v22,
          (__int64)&v44,
          &v46,
          v30);
  v5 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v32;
  if ( v32 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v33, v17, v34) + 24) = v22;
    if ( v46 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v16, v35, v17, v36);
      WdLogEvent5_WdAssertion(v37);
    }
    LODWORD(v5) = 1075708748;
    goto LABEL_24;
  }
  if ( v32 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v16, v33);
    v38[3] = v25;
    v38[4] = v22;
    v38[5] = v5;
    WdLogEvent5_WdError(v38);
    goto LABEL_24;
  }
  v39 = v46;
  if ( !v46 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v16, v33, v17, v34);
    WdLogEvent5_WdAssertion(v40);
  }
  *(_QWORD *)&a3->Id = v39;
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7002);
  return v14;
}
