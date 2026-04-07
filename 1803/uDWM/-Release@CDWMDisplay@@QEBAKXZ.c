/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x180034E28
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180033FD8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x180034218 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x180034EC8 (--1CDWMDisplay@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplay::Release(CDWMDisplay *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CDWMDisplay::~CDWMDisplay(this);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMDisplay *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
