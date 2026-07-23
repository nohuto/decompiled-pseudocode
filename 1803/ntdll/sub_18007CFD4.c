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

NTSTATUS sub_18007CFD4()
{
  int v0; // eax
  NTSTATUS result; // eax
  PVOID Heap; // rax
  void *v3; // rbx
  _DWORD *v4; // rax
  void *v5; // rdi
  void *v6; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 || qword_18016F270 )
    return 0;
  BaseAddress = 0LL;
  RegionSize = qword_18015BF90;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2u, BaseAddress, 0LL, 0LL, 0LL, 0LL);
    v3 = Heap;
    if ( Heap )
    {
      v4 = RtlAllocateHeap(Heap, 0, 4uLL);
      v5 = v4;
      v6 = v3;
      if ( v4 )
      {
        *v4 = 0;
        RtlProtectHeap(v3, 1u);
        sub_1800259B4(0);
        RtlAcquireSRWLockExclusive(&stru_18015BF98);
        if ( !qword_18016F270 )
        {
          qword_18016F280 = (__int64)v5;
          qword_18016F270 = v3;
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
          sub_1800259B4(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
        sub_1800259B4(1);
        RtlProtectHeap(v3, 0);
        RtlFreeHeap(v3, 0, v5);
        v6 = v3;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return qword_18016F270 == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
