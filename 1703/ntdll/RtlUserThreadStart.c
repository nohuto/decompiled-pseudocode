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

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !qword_18015AE90 )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return qword_18015AE90(0LL, a1, a2, a1);
}
