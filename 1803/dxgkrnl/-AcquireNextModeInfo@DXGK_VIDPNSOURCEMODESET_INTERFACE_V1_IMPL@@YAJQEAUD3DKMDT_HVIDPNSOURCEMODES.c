/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C021F920
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0005988 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0005EE4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C022375C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
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
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v20; // rcx
  _DWORD *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v40; // [rsp+20h] [rbp-50h] BYREF
  __int64 v41; // [rsp+28h] [rbp-48h]
  __int128 v42; // [rsp+30h] [rbp-40h]
  __int64 v43; // [rsp+40h] [rbp-30h]
  __int128 v44; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h]
  __int64 v46; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 13);
  v9 = 0;
  v41 = 0LL;
  v40 = 7002;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerEnter, v8, 7002);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 7002);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v14[3] = a2;
  v14[4] = this;
  v14[5] = a3;
  if ( !a3 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v16[3] = 0LL;
    v16[4] = a2;
    v16[5] = this;
    WdLogEvent5_WdError(v16);
    LODWORD(a2) = -1073741811;
LABEL_24:
    v9 = (unsigned int)a2;
    goto LABEL_25;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v18 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    LODWORD(a2) = -1071774968;
    goto LABEL_24;
  }
  v20 = a2 - 4;
  v21 = (_DWORD *)((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL));
  if ( !v21 || *v21 != 305419896 )
  {
    v36 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v36 + 24) = a2;
    WdLogEvent5_WdError(v36);
    LODWORD(a2) = -1071774960;
    goto LABEL_24;
  }
  v22 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL)) + 8);
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
          v18 + 32,
          v22) )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v25 + 24) = v21;
    *(_QWORD *)(v25 + 32) = v18;
    WdLogEvent5_WdError(v25);
    LODWORD(a2) = -1071774928;
    goto LABEL_24;
  }
  DWORD2(v42) = 0;
  *(_QWORD *)&v42 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v43 = v22;
  v46 = 0LL;
  v44 = v42;
  v45 = v22;
  v26 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v18,
          &v44,
          &v46);
  a2 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *const)v26;
  if ( v26 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = v18;
    if ( v46 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v32);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_24;
  }
  if ( v26 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v33[3] = v21;
    v33[4] = v18;
    v33[5] = a2;
    WdLogEvent5_WdError(v33);
    goto LABEL_24;
  }
  v34 = v46;
  if ( !v46 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v28);
    WdLogEvent5_WdAssertion(v35);
  }
  *(_QWORD *)&a3->Id = v34;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v40);
  return v9;
}
