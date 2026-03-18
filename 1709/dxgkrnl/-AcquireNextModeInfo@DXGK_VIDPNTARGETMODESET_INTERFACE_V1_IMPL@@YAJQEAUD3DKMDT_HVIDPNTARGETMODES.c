/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00050C4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A3300 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        unsigned __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r14
  _DWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+80h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 17);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerEnter, v9, 7010);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v12 = 0;
  v10[3] = a2;
  v10[4] = this;
  v10[5] = a3;
  if ( !a3 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v24[3] = 0LL;
    v24[4] = a2;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    LODWORD(a2) = -1073741811;
LABEL_19:
    v12 = a2;
    goto LABEL_14;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v14 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v14 )
  {
    v25 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(a2) = -1071774967;
    goto LABEL_19;
  }
  v15 = (_DWORD *)((a2 - 16) & ((unsigned __int128)-(__int128)a2 >> 64));
  if ( !v15 || *v15 != 305419896 )
  {
    v31 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v31 + 24) = v15;
    WdLogEvent5_WdError(v31);
    LODWORD(a2) = -1071774959;
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(((a2 - 16) & ((unsigned __int128)-(__int128)a2 >> 64)) + 8);
  if ( !v16 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          v14 + 32,
          v16) )
  {
    v27 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v27 + 24) = v15;
    *(_QWORD *)(v27 + 32) = v14;
    WdLogEvent5_WdError(v27);
    LODWORD(a2) = -1071774928;
    goto LABEL_19;
  }
  DWORD2(v32) = 0;
  *(_QWORD *)&v32 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v35 = 0LL;
  v33 = v32;
  v34 = v16;
  v18 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v14,
          (__int64)&v33,
          &v35);
  a2 = v18;
  if ( v18 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = v14;
    if ( v35 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v28);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_19;
  }
  if ( v18 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v29[3] = v15;
    v29[4] = v14;
    v29[5] = a2;
    WdLogEvent5_WdError(v29);
    goto LABEL_19;
  }
  v22 = v35;
  if ( !v35 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v30);
  }
  *(_QWORD *)&a3->Id = v22;
LABEL_14:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, 7010);
  return v12;
}
