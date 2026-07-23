/*
 * XREFs of RtlUnlockHeap @ 0x180021980
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     sub_180070388 @ 0x180070388 (sub_180070388.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  __int64 v3; // rsi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  _RTL_CRITICAL_SECTION *v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+26h] [rbp-32h]
  PVOID v10; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 && (*((_WORD *)HeapHandle + 19))-- == 1 )
    {
      *((_DWORD *)HeapHandle + 10) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 6);
      if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 11);
        if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 22);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 42);
    }
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180155458)();
    if ( !sub_18001F9B0(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v7 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 192);
      RtlLeaveCriticalSection(v7);
    }
  }
  v3 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v10 = HeapHandle;
    v9 = 4140;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 8u, Fields);
  }
  return 1;
}
