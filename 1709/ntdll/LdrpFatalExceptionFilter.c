/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800D6B48
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18007A390 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007D190 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F9930 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(_DWORD **a1)
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
    v3 = (void (__fastcall *)(_DWORD **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v3 )
      v3(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_180118A7A);
  }
  ZwTerminateProcess();
  return 0LL;
}
