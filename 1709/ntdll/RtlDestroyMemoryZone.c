/*
 * XREFs of RtlDestroyMemoryZone @ 0x180087DC0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18007EF30 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087D60 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x180100DB4 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800829AC (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone(v6, v5, v7, v8);
  v9 = *(_QWORD **)(a1 + 48);
  while ( v9 )
  {
    v12 = v9;
    v11 = v9[1];
    v9 = (_QWORD *)*v9;
    ZwFreeVirtualMemory(-1LL, &v12, &v11, 0x8000LL);
  }
  return 0LL;
}
