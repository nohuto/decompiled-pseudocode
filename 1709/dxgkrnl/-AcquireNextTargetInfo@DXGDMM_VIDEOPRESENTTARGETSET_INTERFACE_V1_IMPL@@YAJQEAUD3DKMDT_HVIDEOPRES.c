/*
 * XREFs of ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C01F07C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00050C4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0012CF8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01F4480 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
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
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v28)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-40h] BYREF
  int v29; // [rsp+28h] [rbp-38h]
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6046);
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
  *(_QWORD *)&a3->Id = 0LL;
  v13 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    v11 = -1071774954;
    goto LABEL_24;
  }
  v15 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v15 || *(_DWORD *)v15 != 305419896 )
  {
    v26 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v26 + 24) = v15;
    WdLogEvent5_WdError(v26);
    v11 = -1071774971;
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
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
  v21 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v13,
          &v28,
          &v32);
  if ( v21 == -1071774971 )
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
  if ( !v32 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v25);
  }
  *(_QWORD *)&a3->Id = v24;
LABEL_26:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6046);
  return v7;
}
