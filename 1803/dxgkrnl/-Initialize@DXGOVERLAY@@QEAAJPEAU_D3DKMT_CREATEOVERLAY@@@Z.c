/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C01AC968
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0189E04 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00164D0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C0158B20 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C015E2BC (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  D3DKMT_HANDLE v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  struct _EX_RUNDOWN_REF *v31[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v32; // [rsp+40h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 568) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 632) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 624) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 616) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 2464), this);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v8);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
    v12 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 248)
      && (v13 = *(_QWORD *)(v11 + 232),
          v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
          ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) == 5 )
    {
      v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
    }
    else
    {
      v15 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v31, v15);
    ExReleasePushLockSharedEx(v11 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v31[0] )
      goto LABEL_23;
    v19 = *((_QWORD *)this + 2);
    v16 = *(_QWORD *)(v31[0][1].Count + 16);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    if ( *(_QWORD *)(v16 + 16) != v20 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      v22 = -1073741811;
      *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v21 + 32) = v31[0];
      *(_QWORD *)(v21 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v21);
LABEL_25:
      v5 = v22;
      goto LABEL_26;
    }
    v17 = *(unsigned int *)(v31[0][6].Count + 4);
    if ( (v17 & 8) != 0 && (v31[0][9].Count & 0x800) != 0 )
    {
      memset(&v32, 0, sizeof(v32));
      v32.VidPnSourceId = a2->VidPnSourceId;
      v32.OverlayInfo.hAllocation = *(HANDLE *)(v31[0][6].Count + 16);
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 2464LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(v23 + 544) + 8LL) + 216LL))(
        *(_QWORD *)(v23 + 552),
        *(_QWORD *)(v31[0][6].Count + 8),
        &v32.OverlayInfo.SegmentId,
        &v32.OverlayInfo.PhysicalAddress);
      v32.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v32.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v32.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v32.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v22 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2464LL),
              &v32,
              v24);
      if ( v22 < 0 )
        goto LABEL_25;
      *((_QWORD *)this + 5) = v32.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v31[0];
      v25 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v25;
      if ( v25 )
      {
        a2->hOverlay = v25;
        *((_DWORD *)this + 7) = 1;
LABEL_26:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v31);
        return v5;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v22 = -1073741801;
      v29[3] = this;
      v29[4] = -1073741801LL;
    }
    else
    {
LABEL_23:
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v22 = -1073741811;
      v29[3] = this;
      v29[4] = a2->OverlayInfo.hAllocation;
      v29[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v29);
    goto LABEL_25;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v30[3] = this;
  v30[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v30[5] = -1073741637LL;
  WdLogEvent5_WdError(v30);
  return 3221225659LL;
}
