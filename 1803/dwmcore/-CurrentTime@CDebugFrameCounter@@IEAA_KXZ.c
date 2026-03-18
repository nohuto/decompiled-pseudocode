/*
 * XREFs of ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801515FC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CDebugFrameCounter::CurrentTime(CDebugFrameCounter *this)
{
  unsigned __int64 result; // rax
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 24) )
  {
    v2 = g_qpcFrequency;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 581) + 128LL))(*((_QWORD *)this + 581));
    return 10000000 * (v3 / v2.QuadPart) + 10000000 * (v3 % v2.QuadPart) / v2.QuadPart;
  }
  return result;
}
