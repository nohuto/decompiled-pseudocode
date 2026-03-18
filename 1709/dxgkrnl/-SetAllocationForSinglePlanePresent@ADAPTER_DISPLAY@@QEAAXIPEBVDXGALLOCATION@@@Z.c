/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00ABF00
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00AED88 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00AF150 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 i; // rcx
  DXGFASTMUTEX *v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+70h] [rbp-18h] BYREF
  char v22; // [rsp+78h] [rbp-10h]

  v3 = (unsigned int)a2;
  v21 = (ADAPTER_DISPLAY *)((char *)this + 400);
  v22 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(-400LL);
    *(_QWORD *)(v14 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v21 + 1) == CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v15 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v22 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v16[5] = &v21;
    v16[3] = 275LL;
    v16[4] = 4LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  DXGFASTMUTEX::Acquire(v21);
  v22 = 1;
  v7 = KeGetCurrentThread();
  v8 = *((_QWORD *)this + 14) + 3760 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v8 + 8) + 408LL) != v7 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 8218LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    (DISPLAY_SOURCE *)v8,
    0,
    a3,
    1u,
    0,
    (const struct tagRECT *)(v8 + 652),
    (const struct tagRECT *)(v8 + 652),
    (const struct tagRECT *)(v8 + 652),
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
    0,
    D3DDDIFMT_UNKNOWN,
    0);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)v8, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 3740); *(_BYTE *)(v18 + v8 + 2880) = 0 )
  {
    v18 = (unsigned int)i;
    i = (unsigned int)(i + 1);
  }
  *(_DWORD *)(v8 + 3740) = 0;
  *(_BYTE *)(v8 + 3696) = 0;
  if ( v22 )
  {
    v12 = v21;
    v22 = 0;
    if ( *((struct _KTHREAD **)v21 + 1) != KeGetCurrentThread() )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v9, v10);
      v19[3] = 275LL;
      v19[4] = 4LL;
      v19[5] = v12;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    if ( *((int *)v12 + 6) <= 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(i);
      *(_QWORD *)(v20 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (*((_DWORD *)v12 + 6))-- == 1 )
    {
      *((_QWORD *)v12 + 1) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v12 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
