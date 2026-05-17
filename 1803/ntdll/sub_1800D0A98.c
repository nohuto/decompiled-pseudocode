/*
 * XREFs of sub_1800D0A98 @ 0x1800D0A98
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18002E040 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800772B0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall sub_1800D0A98(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  void (__fastcall *v3)(_DWORD **); // rax

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = (void (__fastcall *)(_DWORD **))RtlDecodePointer(qword_18015C2F0);
    if ( v3 )
      v3(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_180114112);
  }
  ZwTerminateProcess();
  return 0LL;
}
