/*
 * XREFs of ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C02199C0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0220DE8 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  _DWORD *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v34; // [rsp+20h] [rbp-50h] BYREF
  __int64 v35; // [rsp+28h] [rbp-48h]
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v36)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+30h] [rbp-40h] BYREF
  int v37; // [rsp+38h] [rbp-38h]
  __int64 v38; // [rsp+40h] [rbp-30h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  __int64 v40; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0;
  v35 = 0LL;
  v34 = 6046;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6046);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 6046);
  if ( !a3 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = a2;
    v9[5] = this;
    WdLogEvent5_WdError(v9);
    v10 = -1073741811;
LABEL_27:
    v24 = v10;
    goto LABEL_28;
  }
  *(_QWORD *)&a3->Id = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 26) != 1833172994) )
    v11 = 0LL;
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    v10 = -1071774954;
    goto LABEL_27;
  }
  v13 = a2 - 16;
  v14 = -a2;
  v15 = (_DWORD *)(v13 & -(__int64)(v14 != 0));
  if ( !v15 || *v15 != 305419896 )
  {
    v30 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v30 + 24) = v15;
    WdLogEvent5_WdError(v30);
    v10 = -1071774971;
    goto LABEL_27;
  }
  v16 = *(_QWORD *)((v13 & -(__int64)(v14 != 0)) + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
          (__int64)v11 + 8,
          v16) )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = v15;
    *(_QWORD *)(v19 + 32) = v11;
    WdLogEvent5_WdError(v19);
    v10 = -1071774928;
    goto LABEL_27;
  }
  v37 = 0;
  v36 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v39 = v16;
  v40 = 0LL;
  v38 = v16;
  v24 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v11,
          &v36,
          &v40);
  if ( v24 == -1071774971 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v11;
    if ( v40 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v26);
    }
    v10 = 1075708748;
    goto LABEL_27;
  }
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v27 + 24) = v15;
    *(_QWORD *)(v27 + 32) = v11;
    WdLogEvent5_WdError(v27);
LABEL_28:
    v4 = v24;
    goto LABEL_29;
  }
  v28 = v40;
  if ( !v40 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v29);
  }
  *(_QWORD *)&a3->Id = v28;
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return v4;
}
