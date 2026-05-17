/*
 * XREFs of RtlUserThreadStart @ 0x18006CB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F9930 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2, a1);
}
