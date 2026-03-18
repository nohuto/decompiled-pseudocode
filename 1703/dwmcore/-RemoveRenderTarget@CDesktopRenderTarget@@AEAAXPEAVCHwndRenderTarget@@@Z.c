/*
 * XREFs of ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18006A5F8
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801474C0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180147994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C9698 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::RemoveRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  struct CHwndRenderTarget *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 120, &v4);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), a2);
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
