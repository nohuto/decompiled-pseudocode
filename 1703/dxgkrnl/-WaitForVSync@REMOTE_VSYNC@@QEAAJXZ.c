/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0103B5C
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103AC0 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C0103C4C (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnsureEmulationRunning(this, a2, a3, a4);
  if ( result >= 0 )
  {
    BLTQUEUE::EnableVSyncEventSignaling(*this);
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(this + 1, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
