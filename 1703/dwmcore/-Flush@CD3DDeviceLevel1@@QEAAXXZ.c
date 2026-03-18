/*
 * XREFs of ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180078E14
 * Callers:
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800426C0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800CE700 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::Flush(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 78);
  if ( v2 )
  {
    v3 = 29;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 81) + 888LL))(*((_QWORD *)this + 81));
  }
  *((_BYTE *)this + 1125) = 0;
}
