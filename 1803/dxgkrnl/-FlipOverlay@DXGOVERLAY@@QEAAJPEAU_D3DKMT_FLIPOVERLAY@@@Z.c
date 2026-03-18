/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C01AC5A8
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01ADB30 (DxgkFlipOverlay.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C015F6F0 (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v7; // rax
  ULONG_PTR Count; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v15; // rdx
  PVOID v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 hSource; // rcx
  size_t v20; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v22; // r9
  int v23; // edi
  _DXGKARG_FLIPOVERLAY v24; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 402LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v6[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 403LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v24, 0, sizeof(v24));
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), (DXGALLOCATIONREFERENCE *)&v25, a2->hSource);
  if ( !v25 )
    goto LABEL_28;
  v11 = *(_QWORD *)(v25[1].Count + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 16) != *(_QWORD *)(v12 + 16) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13[3] = *(_QWORD *)(v3 + 16);
    v13[4] = v25;
    LODWORD(v3) = -1073741811;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
    return (unsigned int)v3;
  }
  Count = v25[6].Count;
  v10 = *(unsigned int *)(Count + 4);
  if ( (v10 & 8) == 0 || (v25[9].Count & 0x800) == 0 )
  {
LABEL_28:
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, Count, v11);
    v18[3] = *(_QWORD *)(v3 + 16);
    hSource = a2->hSource;
    v3 = -1073741811LL;
    goto LABEL_29;
  }
  v24.hSource = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->pPrivateDriverData )
  {
    v24.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v16 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v24.pPrivateDriverData = v16;
    if ( !v16 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v15, v17);
      v18[3] = v3;
      hSource = v24.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_29:
      v18[4] = hSource;
      v18[5] = v3;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_30;
    }
    v20 = v24.PrivateDriverDataSize;
    pPrivateDriverData = a2->pPrivateDriverData;
    v22 = (ULONG64)pPrivateDriverData + v24.PrivateDriverDataSize;
    if ( v22 < (unsigned __int64)pPrivateDriverData || v22 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, pPrivateDriverData, v20);
  }
  else
  {
    a2->PrivateDriverDataSize = 0;
    a2->pPrivateDriverData = 0LL;
  }
  v23 = ADAPTER_RENDER::DdiFlipOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2464LL),
          *(void **)(v3 + 40),
          &v24);
  if ( v23 >= 0 )
    *(_QWORD *)(v3 + 48) = v25;
  operator delete[](v24.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
  return (unsigned int)v23;
}
