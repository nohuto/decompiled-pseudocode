/*
 * XREFs of ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GlitchDetected@CDebugFrameCounter@@QEAAXXZ @ 0x1800C7AAC (-GlitchDetected@CDebugFrameCounter@@QEAAXXZ.c)
 *     ?FrameStopped@CDebugFrameCounter@@QEAAXXZ @ 0x180130D08 (-FrameStopped@CDebugFrameCounter@@QEAAXXZ.c)
 *     ?FrameStarted@CDebugFrameCounter@@QEAAXXZ @ 0x180130E0C (-FrameStarted@CDebugFrameCounter@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDebugFrameCounter::CurrentTime(CDebugFrameCounter *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 24) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 581) + 136LL))(*((_QWORD *)this + 581));
  return result;
}
