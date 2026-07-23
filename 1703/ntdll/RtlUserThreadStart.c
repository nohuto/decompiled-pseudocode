/*
 * XREFs of RtlUserThreadStart @ 0x180050C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !qword_18015AE90 )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))qword_18015AE90)(
    0LL,
    Function,
    Parameter,
    Function);
}
