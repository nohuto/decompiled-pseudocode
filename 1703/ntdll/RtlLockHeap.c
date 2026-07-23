/*
 * XREFs of RtlLockHeap @ 0x18001F870
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     sub_18001F91C @ 0x18001F91C (sub_18001F91C.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  __int64 v2; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+26h] [rbp-32h]
  PVOID v8; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    sub_18001F91C();
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180155450)();
    if ( !(unsigned __int8)sub_18001F9B0(HeapHandle, "RtlLockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 192);
    }
  }
  v2 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v8 = HeapHandle;
    v7 = 4139;
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x402u, 8u, Fields);
  }
  return 1;
}
