/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0153150 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D85A0 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00E2514 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct _KTHREAD **v24; // [rsp+20h] [rbp-18h] BYREF
  char v25; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v24 = (struct _KTHREAD **)((char *)this + 400);
  v25 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(-400LL);
    *(_QWORD *)(v14 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v24[1] == CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v15 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v25 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v16[5] = &v24;
    v16[3] = 275LL;
    v16[4] = 4LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  v5 = v24;
  KeEnterCriticalRegion();
  if ( v5[1] == KeGetCurrentThread() )
  {
    v17 = *((_DWORD *)v5 + 6);
    if ( v17 <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v18 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *((_DWORD *)v5 + 6);
    }
    v9 = v17 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *((_DWORD *)v5 + 7);
        if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, &EventBlockThread, v8, v19);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ExAcquirePushLockExclusiveEx(v5 + 2, 0LL);
    }
    if ( v5[1] )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v20 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_DWORD *)v5 + 6) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v21 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v5[1] = KeGetCurrentThread();
    v9 = 1;
  }
  *((_DWORD *)v5 + 6) = v9;
  v25 = 1;
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760 * v2), 0);
  if ( v25 )
  {
    v11 = v24;
    v25 = 0;
    if ( v24[1] != KeGetCurrentThread() )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10);
      v22[3] = 275LL;
      v22[4] = 4LL;
      v22[5] = v11;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    v12 = *((_DWORD *)v11 + 6);
    if ( v12 <= 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v23 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v23);
      v12 = *((_DWORD *)v11 + 6);
    }
    v13 = v12 - 1;
    *((_DWORD *)v11 + 6) = v13;
    if ( !v13 )
    {
      v11[1] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
