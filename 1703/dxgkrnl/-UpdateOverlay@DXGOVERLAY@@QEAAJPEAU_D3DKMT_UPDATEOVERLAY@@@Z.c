/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C019A600
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C0179CBC (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  ULONG_PTR Count; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v26; // rdx
  PVOID v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 hAllocation; // rcx
  size_t v32; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v34; // r9
  __int64 v35; // rdx
  int updated; // edi
  __int64 v37; // r8
  __int64 v38; // r9
  struct _EX_RUNDOWN_REF *v39[2]; // [rsp+30h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v40; // [rsp+40h] [rbp-68h] BYREF

  v3 = (__int64)this;
  v39[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 274LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v10[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 275LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v40, 0, sizeof(v40));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL),
    (DXGALLOCATIONREFERENCE *)v39,
    a2->OverlayInfo.hAllocation);
  if ( !v39[0] )
    goto LABEL_30;
  v18 = *(_QWORD *)(v3 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(v39[0][1].Count + 16) + 16LL);
  v19 = *(_QWORD *)(v18 + 16);
  v20 = *(_QWORD *)(v19 + 16);
  if ( v17 != v20 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v20);
    *(_QWORD *)(v21 + 24) = *(_QWORD *)(v3 + 16);
    *(struct _EX_RUNDOWN_REF **)(v21 + 32) = v39[0];
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v21 + 40) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_32:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v39, v22, v23, v24);
    return (unsigned int)v3;
  }
  Count = v39[0][6].Count;
  v16 = *(unsigned int *)(Count + 4);
  if ( (v16 & 8) == 0 || (v39[0][9].Count & 0x800) == 0 )
  {
LABEL_30:
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, Count, v17, v18);
    v30[3] = *(_QWORD *)(v3 + 16);
    hAllocation = a2->OverlayInfo.hAllocation;
    v3 = -1073741811LL;
    goto LABEL_31;
  }
  v40.OverlayInfo.hAllocation = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  v40.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v40.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
  {
    v40.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
    v27 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v40.OverlayInfo.pPrivateDriverData = v27;
    if ( !v27 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v26, v28, v29);
      v30[3] = v3;
      hAllocation = v40.OverlayInfo.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_31:
      v30[4] = hAllocation;
      v30[5] = v3;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_32;
    }
    v32 = v40.OverlayInfo.PrivateDriverDataSize;
    pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
    v34 = (ULONG64)pPrivateDriverData + v40.OverlayInfo.PrivateDriverDataSize;
    if ( v34 < (unsigned __int64)pPrivateDriverData || v34 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, pPrivateDriverData, v32);
  }
  else
  {
    a2->OverlayInfo.PrivateDriverDataSize = 0;
    a2->OverlayInfo.pPrivateDriverData = 0LL;
  }
  updated = ADAPTER_RENDER::DdiUpdateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2288LL),
              *(void **)(v3 + 40),
              &v40);
  if ( updated >= 0 )
    *(struct _EX_RUNDOWN_REF **)(v3 + 48) = v39[0];
  if ( v40.OverlayInfo.pPrivateDriverData )
    ExFreePoolWithTag(v40.OverlayInfo.pPrivateDriverData, 0);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v39, v35, v37, v38);
  return (unsigned int)updated;
}
