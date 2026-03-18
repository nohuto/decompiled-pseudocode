/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00BB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006FD4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00BBC7C (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v16; // r14
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-50h] BYREF
  __int64 v39; // [rsp+28h] [rbp-48h]
  __int128 v40; // [rsp+30h] [rbp-40h]
  __int128 v41; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+60h] [rbp-10h]
  __int64 v43; // [rsp+90h] [rbp+20h] BYREF

  v6 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 19);
  v9 = 0;
  v39 = 0LL;
  v38 = 7037;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerEnter, v8, 7037);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 7037);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v14[3] = a2;
  v14[4] = v6;
  v14[5] = a3;
  if ( !a3 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v29[3] = 0LL;
    v29[4] = a2;
    v29[5] = v6;
    WdLogEvent5_WdError(v29);
    LODWORD(v6) = -1073741811;
LABEL_15:
    v9 = (unsigned int)v6;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !v6 || (v16 = v6, *((_DWORD *)v6 + 46) != 1833173002) )
    v16 = 0LL;
  if ( !v16 )
  {
    v30 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v30 + 24) = v6;
    WdLogEvent5_WdError(v30);
    LODWORD(v6) = -1071774976;
    goto LABEL_15;
  }
  v17 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v17 || *(_DWORD *)v17 != 305419896 )
  {
    v37 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v37 + 24) = v17;
    WdLogEvent5_WdError(v37);
    LODWORD(v6) = -1071774951;
    goto LABEL_15;
  }
  v18 = *(_QWORD *)(v17 + 8);
  if ( !v18 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
          (__int64)v16 + 8,
          v18) )
  {
    v32 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v32 + 24) = v17;
    *(_QWORD *)(v32 + 32) = v16;
    WdLogEvent5_WdError(v32);
    LODWORD(v6) = -1071774928;
    goto LABEL_15;
  }
  DWORD2(v40) = 0;
  *(_QWORD *)&v40 = DMMVIDPNTOPOLOGY::GetNextPath;
  v43 = 0LL;
  v41 = v40;
  v42 = v18;
  v20 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v16,
          &v41,
          &v43,
          1LL,
          v38,
          v39,
          DMMVIDPNTOPOLOGY::GetNextPath,
          0,
          v18);
  v6 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v20;
  if ( v20 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = v16;
    if ( v43 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v33);
    }
    LODWORD(v6) = 1075708748;
    goto LABEL_15;
  }
  if ( v20 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v34[3] = v17;
    v34[4] = v16;
    v34[5] = v6;
    WdLogEvent5_WdError(v34);
    goto LABEL_15;
  }
  v35 = v43;
  if ( !v43 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v36);
  }
  *(_QWORD *)&a3->VidPnSourceId = v35;
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v38);
  return v9;
}
