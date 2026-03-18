/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019A274
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0187290 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0020860 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01733EC (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C0175BD0 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v14; // r15
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  D3DKMT_HANDLE v32; // eax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  struct _EX_RUNDOWN_REF *v36[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v37; // [rsp+40h] [rbp-39h] BYREF

  v8 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v5 + 568) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v5 + 632) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v5 + 624) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64))(v5 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v9 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v5 + 2288), this, v6, v7);
    *((_DWORD *)this + 8) = v9;
    if ( v9 == -1 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v11 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v11);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 168));
    v15 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v14 + 208)
      && (v16 = *(_QWORD *)(v14 + 192),
          v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
    {
      v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v36, v18);
    ExReleasePushLockSharedEx(v14 + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( !v36[0] )
      goto LABEL_24;
    v23 = *((_QWORD *)this + 2);
    v19 = *(_QWORD *)(v36[0][1].Count + 16);
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_QWORD *)(v19 + 16) != v24 )
    {
      v25 = WdLogNewEntry5_WdError(v24, v19);
      v26 = -1073741811;
      *(_QWORD *)(v25 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v25 + 32) = v36[0];
      *(_QWORD *)(v25 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v25);
LABEL_26:
      v8 = v26;
      goto LABEL_27;
    }
    v20 = *(unsigned int *)(v36[0][6].Count + 4);
    if ( (v20 & 8) != 0 && (v36[0][9].Count & 0x800) != 0 )
    {
      memset(&v37.OverlayInfo, 0, 0x50uLL);
      v37.VidPnSourceId = a2->VidPnSourceId;
      v37.OverlayInfo.hAllocation = *(HANDLE *)(v36[0][6].Count + 16);
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 2288LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v30 + 432) + 8LL) + 216LL))(
        *(_QWORD *)(v30 + 440),
        *(_QWORD *)(v36[0][6].Count + 8),
        &v37.OverlayInfo.SegmentId,
        &v37.OverlayInfo.PhysicalAddress);
      v37.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v37.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v37.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v37.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v26 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2288LL),
              &v37,
              v31);
      if ( v26 < 0 )
        goto LABEL_26;
      *((_QWORD *)this + 5) = v37.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v36[0];
      v32 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v32;
      if ( v32 )
      {
        a2->hOverlay = v32;
        *((_DWORD *)this + 7) = 1;
LABEL_27:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v36, v27, v28, v29);
        return v8;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v27, v28, v29);
      v26 = -1073741801;
      v34[3] = this;
      v34[4] = -1073741801LL;
    }
    else
    {
LABEL_24:
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v26 = -1073741811;
      v34[3] = this;
      v34[4] = a2->OverlayInfo.hAllocation;
      v34[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v34);
    goto LABEL_26;
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
  v35[3] = this;
  v35[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v35[5] = -1073741637LL;
  WdLogEvent5_WdError(v35);
  return 3221225659LL;
}
