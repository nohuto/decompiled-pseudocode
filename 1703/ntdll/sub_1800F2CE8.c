/*
 * XREFs of sub_1800F2CE8 @ 0x1800F2CE8
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F2760 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F2670 (RtlDeleteUmsThreadContext.c)
 */

__int64 sub_1800F2CE8()
{
  struct _TEB *v0; // rbx
  __int64 result; // rax
  unsigned __int64 v2; // rcx

  v0 = NtCurrentTeb();
  result = ZwSetInformationThread();
  if ( (int)result >= 0 )
  {
    v2 = (unsigned __int64)v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
