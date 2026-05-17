/*
 * XREFs of RtlUserThreadStart @ 0x180073670
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !qword_18015BEB0 )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return qword_18015BEB0(0LL, a1, a2, a1);
}
