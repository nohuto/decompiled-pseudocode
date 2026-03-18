/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C01B105C
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C01B2750 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002850 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C017D67C (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v7; // rax
  ULONG_PTR Count; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v15; // rdx
  PVOID v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 hAllocation; // rcx
  size_t v20; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v22; // r9
  int updated; // edi
  struct _EX_RUNDOWN_REF *v24[2]; // [rsp+30h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v25; // [rsp+40h] [rbp-68h] BYREF

  v3 = (__int64)this;
  v24[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 274LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v6[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 275LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v25, 0, sizeof(v25));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL),
    (DXGALLOCATIONREFERENCE *)v24,
    a2->OverlayInfo.hAllocation);
  if ( !v24[0] )
    goto LABEL_30;
  v11 = *(_QWORD *)(v24[0][1].Count + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 16) != *(_QWORD *)(v12 + 16) )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v3 + 16);
    *(struct _EX_RUNDOWN_REF **)(v13 + 32) = v24[0];
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v13 + 40) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_32:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v24);
    return (unsigned int)v3;
  }
  Count = v24[0][6].Count;
  v10 = *(unsigned int *)(Count + 4);
  if ( (v10 & 8) == 0 || (v24[0][9].Count & 0x800) == 0 )
  {
LABEL_30:
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, Count, v11);
    v18[3] = *(_QWORD *)(v3 + 16);
    hAllocation = a2->OverlayInfo.hAllocation;
    v3 = -1073741811LL;
    goto LABEL_31;
  }
  v25.OverlayInfo.hAllocation = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  v25.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v25.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
  {
    v25.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
    v16 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v25.OverlayInfo.pPrivateDriverData = v16;
    if ( !v16 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v15, v17);
      v18[3] = v3;
      hAllocation = v25.OverlayInfo.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_31:
      v18[4] = hAllocation;
      v18[5] = v3;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_32;
    }
    v20 = v25.OverlayInfo.PrivateDriverDataSize;
    pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
    v22 = (ULONG64)pPrivateDriverData + v25.OverlayInfo.PrivateDriverDataSize;
    if ( v22 < (unsigned __int64)pPrivateDriverData || v22 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, pPrivateDriverData, v20);
  }
  else
  {
    a2->OverlayInfo.PrivateDriverDataSize = 0;
    a2->OverlayInfo.pPrivateDriverData = 0LL;
  }
  updated = ADAPTER_RENDER::DdiUpdateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2312LL),
              *(void **)(v3 + 40),
              &v25);
  if ( updated >= 0 )
    *(struct _EX_RUNDOWN_REF **)(v3 + 48) = v24[0];
  if ( v25.OverlayInfo.pPrivateDriverData )
    ExFreePoolWithTag(v25.OverlayInfo.pPrivateDriverData, 0);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v24);
  return (unsigned int)updated;
}
