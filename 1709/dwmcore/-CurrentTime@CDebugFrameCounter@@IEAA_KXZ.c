/*
 * XREFs of ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18012FC6C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
