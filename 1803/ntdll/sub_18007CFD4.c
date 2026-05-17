/*
 * XREFs of sub_18007CFD4 @ 0x18007CFD4
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006A010 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006A9D0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

__int64 sub_18007CFD4()
{
  __int64 result; // rax
  __int64 Heap; // rax
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !LdrControlFlowGuardEnforced() || qword_18016F270 )
    return 0LL;
  v9 = 0LL;
  v10 = qword_18015BF90;
  result = ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v10, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2, v9, 0LL, 0LL, 0LL, 0LL);
    v2 = (_DWORD *)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (unsigned __int64)v3;
      v5 = (__int64)v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        sub_1800259B4(0);
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v6, v7, v8);
        if ( !qword_18016F270 )
        {
          qword_18016F280 = v4;
          qword_18016F270 = (__int64)v2;
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          sub_1800259B4(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
        sub_1800259B4(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = (__int64)v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    return qword_18016F270 == 0 ? 0xC0000017 : 0;
  }
  return result;
}
