/*
 * XREFs of sub_1800D7C98 @ 0x1800D7C98
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18001A750 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007B930 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall sub_1800D7C98(_DWORD **a1)
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
    v3 = (void (__fastcall *)(_DWORD **))RtlDecodePointer(qword_18015B2C0);
    if ( v3 )
      v3(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_1801150C2);
  }
  ZwTerminateProcess();
  return 0LL;
}
