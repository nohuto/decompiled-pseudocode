/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E68B0
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9360 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rcx
  DXGFASTMUTEX *v17; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  DXGFASTMUTEX *v26; // [rsp+60h] [rbp-18h] BYREF
  char v27; // [rsp+68h] [rbp-10h]

  v4 = (unsigned int)a2;
  v26 = (ADAPTER_DISPLAY *)((char *)this + 400);
  v27 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(-400LL, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v26 + 1) == CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v27 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v21[5] = &v26;
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  DXGFASTMUTEX::Acquire(v26);
  v27 = 1;
  v11 = KeGetCurrentThread();
  v12 = *((_QWORD *)this + 14) + 3208 * v4;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v12 + 8) + 408LL) != v11 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v8, v9, v10);
    *(_QWORD *)(v22 + 24) = 7480LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    (DISPLAY_SOURCE *)v12,
    0,
    a3,
    1u,
    0,
    (const struct tagRECT *)(v12 + 652),
    (const struct tagRECT *)(v12 + 652),
    (const struct tagRECT *)(v12 + 652),
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)v12);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v12 + 3196); *(_BYTE *)(v23 + v12 + 2504) = 0 )
  {
    v23 = (unsigned int)i;
    i = (unsigned int)(i + 1);
  }
  *(_DWORD *)(v12 + 3196) = 0;
  *(_BYTE *)(v12 + 3152) = 0;
  if ( v27 )
  {
    v17 = v26;
    v27 = 0;
    if ( *((struct _KTHREAD **)v26 + 1) != KeGetCurrentThread() )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v13, v14);
      v24[3] = 275LL;
      v24[4] = 4LL;
      v24[5] = v17;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    if ( *((int *)v17 + 6) <= 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(i, v13, v14, v15);
      *(_QWORD *)(v25 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v25);
    }
    if ( (*((_DWORD *)v17 + 6))-- == 1 )
    {
      *((_QWORD *)v17 + 1) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v17 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
