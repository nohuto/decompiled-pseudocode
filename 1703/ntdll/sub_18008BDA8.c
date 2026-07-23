/*
 * XREFs of sub_18008BDA8 @ 0x18008BDA8
 * Callers:
 *     RtlLockCurrentThread @ 0x18008BC60 (RtlLockCurrentThread.c)
 * Callees:
 *     ZwLockVirtualMemory @ 0x1800A7390 (ZwLockVirtualMemory.c)
 */

NTSTATUS sub_18008BDA8()
{
  struct _TEB *v0; // rdx
  PVOID StackBase; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  StackBase = v0->NtTib.StackBase;
  v2 = (unsigned __int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  for ( i = (unsigned __int64)StackBase - 4096; i >= v2; i -= 4096LL )
    ;
  BaseAddress = (char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  RegionSize = (ULONG_PTR)StackBase - v2;
  return ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
}
