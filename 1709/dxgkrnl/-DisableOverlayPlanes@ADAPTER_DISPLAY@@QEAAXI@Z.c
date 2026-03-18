/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D019C (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00AED88 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct _KTHREAD **v24; // [rsp+20h] [rbp-18h] BYREF
  char v25; // [rsp+28h] [rbp-10h]

  v4 = (unsigned int)a2;
  v24 = (struct _KTHREAD **)((char *)this + 400);
  v25 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-400LL);
    *(_QWORD *)(v15 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v24[1] == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v16 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v25 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v17[5] = &v24;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v6 = (int *)v24;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v6 + 1) == KeGetCurrentThread() )
  {
    if ( v6[6] <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v18 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v18);
    }
    ++v6[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = v6[7];
        if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v8, &EventBlockThread, v9, v19);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6);
      ExAcquirePushLockExclusiveEx(v6 + 4, 0LL);
    }
    if ( *((_QWORD *)v6 + 1) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( v6[6] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v21 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v21);
    }
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v6[6] = 1;
  }
  v25 = 1;
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760 * v4), 0);
  if ( v25 )
  {
    v13 = (int *)v24;
    v25 = 0;
    if ( v24[1] != KeGetCurrentThread() )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12);
      v22[3] = 275LL;
      v22[4] = 4LL;
      v22[5] = v13;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    if ( v13[6] <= 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v23 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v13[6]-- == 1 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 4, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
