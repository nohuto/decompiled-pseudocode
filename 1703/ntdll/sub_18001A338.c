/*
 * XREFs of sub_18001A338 @ 0x18001A338
 * Callers:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     LdrEnumerateLoadedModules @ 0x180083E40 (LdrEnumerateLoadedModules.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

NTSTATUS sub_18001A338()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection(&stru_18015B220);
  dword_18015B248 = 0;
  RtlLeaveCriticalSection(&stru_18015B220);
  return ZwSetEvent(Handle, 0LL);
}
