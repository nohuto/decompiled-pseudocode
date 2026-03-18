/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01F3940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00044C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D6F3C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v33; // [rsp+20h] [rbp-40h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+80h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 13);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerEnter, v9, 7002);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v12 = 0;
  v10[3] = a2;
  v10[4] = this;
  v10[5] = a3;
  if ( !a3 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = 0LL;
    v13[4] = a2;
    v13[5] = this;
    WdLogEvent5_WdError(v13);
    LODWORD(a2) = -1073741811;
LABEL_24:
    v12 = (unsigned int)a2;
    goto LABEL_25;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v17 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    LODWORD(a2) = -1071774968;
    goto LABEL_24;
  }
  v19 = a2 - 4;
  v20 = (_DWORD *)((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL));
  if ( !v20 || *v20 != 305419896 )
  {
    v31 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v31 + 24) = a2;
    WdLogEvent5_WdError(v31);
    LODWORD(a2) = -1071774960;
    goto LABEL_24;
  }
  v21 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL)) + 8);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
          v17 + 32,
          v21) )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v24 + 24) = v20;
    *(_QWORD *)(v24 + 32) = v17;
    WdLogEvent5_WdError(v24);
    LODWORD(a2) = -1071774928;
    goto LABEL_24;
  }
  DWORD2(v33) = 0;
  *(_QWORD *)&v33 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v36 = 0LL;
  v34 = v33;
  v35 = v21;
  v25 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v17,
          (__int64)&v34,
          &v36);
  a2 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *const)v25;
  if ( v25 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v26) + 24) = v17;
    if ( v36 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v27);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_24;
  }
  if ( v25 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v28[3] = v20;
    v28[4] = v17;
    v28[5] = a2;
    WdLogEvent5_WdError(v28);
    goto LABEL_24;
  }
  v29 = v36;
  if ( !v36 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v30);
  }
  *(_QWORD *)&a3->Id = v29;
LABEL_25:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 7002);
  return v12;
}
