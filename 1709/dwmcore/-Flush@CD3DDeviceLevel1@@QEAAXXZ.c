/*
 * XREFs of ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800216F4
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x18001B08C (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B1910 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801D2828 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::Flush(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 79);
  if ( v2 )
  {
    v3 = 29;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 888LL))(*((_QWORD *)this + 82));
  }
  *((_BYTE *)this + 1044) = 0;
}
