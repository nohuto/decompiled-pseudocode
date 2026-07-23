/*
 * XREFs of RtlLockHeap @ 0x18001FC90
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060AF0 @ 0x180060AF0 (sub_180060AF0.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_180022E4C @ 0x180022E4C (sub_180022E4C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FE43C @ 0x1800FE43C (sub_1800FE43C.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  bool v1; // zf
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)HeapHandle + 4) == -571548178;
  v6 = -1;
  if ( v1 )
  {
    sub_180022E4C(HeapHandle, &v6);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180156440)();
    if ( !sub_18001FC58(HeapHandle, "RtlLockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 192);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE43C(HeapHandle);
  }
  return 1;
}
