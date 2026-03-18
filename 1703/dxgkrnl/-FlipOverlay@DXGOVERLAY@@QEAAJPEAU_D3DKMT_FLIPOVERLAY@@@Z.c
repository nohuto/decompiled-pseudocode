/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0199E98
 * Callers:
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C0176568 (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
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
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v26; // rdx
  PVOID v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 hSource; // rcx
  size_t v32; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v34; // r9
  __int64 v35; // rdx
  int v36; // edi
  __int64 v37; // r8
  __int64 v38; // r9
  _DXGKARG_FLIPOVERLAY v39; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 402LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v10[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 403LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v39, 0, sizeof(v39));
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), (DXGALLOCATIONREFERENCE *)&v40, a2->hSource);
  if ( !v40 )
    goto LABEL_30;
  v18 = *(_QWORD *)(v3 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(v40[1].Count + 16) + 16LL);
  v19 = *(_QWORD *)(v18 + 16);
  v20 = *(_QWORD *)(v19 + 16);
  if ( v17 != v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v20);
    v21[3] = *(_QWORD *)(v3 + 16);
    v21[4] = v40;
    LODWORD(v3) = -1073741811;
    v21[5] = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_32:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v22, v23, v24);
    return (unsigned int)v3;
  }
  Count = v40[6].Count;
  v16 = *(unsigned int *)(Count + 4);
  if ( (v16 & 8) == 0 || (v40[9].Count & 0x800) == 0 )
  {
LABEL_30:
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, Count, v17, v18);
    v30[3] = *(_QWORD *)(v3 + 16);
    hSource = a2->hSource;
    v3 = -1073741811LL;
    goto LABEL_31;
  }
  v39.hSource = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->pPrivateDriverData )
  {
    v39.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v27 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v39.pPrivateDriverData = v27;
    if ( !v27 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v26, v28, v29);
      v30[3] = v3;
      hSource = v39.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_31:
      v30[4] = hSource;
      v30[5] = v3;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_32;
    }
    v32 = v39.PrivateDriverDataSize;
    pPrivateDriverData = a2->pPrivateDriverData;
    v34 = (ULONG64)pPrivateDriverData + v39.PrivateDriverDataSize;
    if ( v34 < (unsigned __int64)pPrivateDriverData || v34 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, pPrivateDriverData, v32);
  }
  else
  {
    a2->PrivateDriverDataSize = 0;
    a2->pPrivateDriverData = 0LL;
  }
  v36 = ADAPTER_RENDER::DdiFlipOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2288LL),
          *(void **)(v3 + 40),
          &v39);
  if ( v36 >= 0 )
    *(_QWORD *)(v3 + 48) = v40;
  if ( v39.pPrivateDriverData )
    ExFreePoolWithTag(v39.pPrivateDriverData, 0);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v35, v37, v38);
  return (unsigned int)v36;
}
