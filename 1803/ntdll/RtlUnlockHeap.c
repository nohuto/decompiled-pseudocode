/*
 * XREFs of RtlUnlockHeap @ 0x18001FB70
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_180048388 @ 0x180048388 (sub_180048388.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060AF0 @ 0x180060AF0 (sub_180060AF0.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FE9EC @ 0x1800FE9EC (sub_1800FE9EC.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _RTL_CRITICAL_SECTION *v2; // rcx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 && (*((_WORD *)HeapHandle + 31))-- == 1 )
    {
      *((_DWORD *)HeapHandle + 16) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 9);
      if ( (*((_DWORD *)HeapHandle + 5) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 17);
        if ( (*((_DWORD *)HeapHandle + 5) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 32);
          if ( (*((_DWORD *)HeapHandle + 5) & 1) == 0 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 49);
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 76);
    }
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180156448)();
    if ( !(unsigned __int8)sub_18001FC58(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v2 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 192);
      RtlLeaveCriticalSection(v2);
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
      sub_1800FE9EC(HeapHandle);
  }
  return 1;
}
