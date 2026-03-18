/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0170A54 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B81A8 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  struct _KTHREAD **v31; // [rsp+20h] [rbp-18h] BYREF
  char v32; // [rsp+28h] [rbp-10h]

  v5 = (unsigned int)a2;
  v31 = (struct _KTHREAD **)((char *)this + 400);
  v32 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v22 = WdLogNewEntry5_WdAssertion(-400LL, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v31[1] == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v32 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v24[5] = &v31;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v7 = (int *)v31;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v7 + 1) == KeGetCurrentThread() )
  {
    if ( v7[6] <= 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v25 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v25);
    }
    ++v7[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = v7[7];
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v13, &EventBlockThread, v14, v26);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7);
      ExAcquirePushLockExclusiveEx(v7 + 4, 0LL);
    }
    if ( *((_QWORD *)v7 + 1) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v27 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v7[6] )
    {
      v28 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v28 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v28);
    }
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v7[6] = 1;
  }
  v32 = 1;
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3208 * v5));
  if ( v32 )
  {
    v20 = (int *)v31;
    v32 = 0;
    if ( v31[1] != KeGetCurrentThread() )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
      v29[3] = 275LL;
      v29[4] = 4LL;
      v29[5] = v20;
      v29[6] = 0LL;
      v29[7] = 0LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    if ( v20[6] <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v30 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v20[6]-- == 1 )
    {
      *((_QWORD *)v20 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 4, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
