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

__int64 __fastcall sub_1800D0A98(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // rcx
  NTSTATUS ExceptionCode; // edi
  void (__fastcall *v4)(PEXCEPTION_POINTERS); // rax

  v2 = NtCurrentTeb();
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741571);
  }
  else
  {
    v4 = (void (__fastcall *)(PEXCEPTION_POINTERS))RtlDecodePointer(Ptr);
    if ( v4 )
      v4(ExceptionPointers);
    else
      RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_180114112);
  }
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionCode);
  return 0LL;
}
