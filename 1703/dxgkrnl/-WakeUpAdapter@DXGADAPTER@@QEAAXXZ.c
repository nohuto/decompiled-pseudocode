/*
 * XREFs of ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C016F9B0
 * Callers:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiRequestDevicePowerState @ 0x1C0012DDC (DpiRequestDevicePowerState.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DXGADAPTER::WakeUpAdapter(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8013);
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
  if ( *((_DWORD *)this + 44) == 1 )
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), 1, 0);
  ExReleasePushLockSharedEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 8013);
}
