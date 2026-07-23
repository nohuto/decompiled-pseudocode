/*
 * XREFs of sub_1800EFD98 @ 0x1800EFD98
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EF810 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EF720 (RtlDeleteUmsThreadContext.c)
 */

NTSTATUS sub_1800EFD98()
{
  struct _TEB *v0; // rbx
  NTSTATUS result; // eax
  PVOID v2; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v0 = NtCurrentTeb();
  v3[1] = 0;
  v4 = 0LL;
  v5 = 0LL;
  v3[0] = 2;
  result = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUmsInformation, v3, 0x18u);
  if ( result >= 0 )
  {
    v2 = v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
