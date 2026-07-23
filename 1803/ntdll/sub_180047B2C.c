/*
 * XREFs of sub_180047B2C @ 0x180047B2C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     LdrEnumerateLoadedModules @ 0x180048720 (LdrEnumerateLoadedModules.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

NTSTATUS sub_180047B2C()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection(&stru_18015C240);
  dword_18015C268 = 0;
  RtlLeaveCriticalSection(&stru_18015C240);
  return ZwSetEvent(Handle, 0LL);
}
