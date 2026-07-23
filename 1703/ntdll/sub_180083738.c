/*
 * XREFs of sub_180083738 @ 0x180083738
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180074550 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800747E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     RtlSetProtectedPolicy @ 0x1800850D0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS sub_180083738()
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  void *v2; // rbx
  _DWORD *v3; // rax
  void *v4; // rdi
  void *v5; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] || qword_18016B260 )
    return 0;
  BaseAddress = 0LL;
  RegionSize = qword_18015AF68;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = RtlCreateHeap(2u, BaseAddress, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = RtlAllocateHeap(Heap, 0, 4uLL);
      v4 = v3;
      v5 = v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1u);
        sub_18001DEA8(0);
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        if ( !qword_18016B260 )
        {
          qword_18016B270 = (__int64)v4;
          qword_18016B260 = v2;
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          sub_18001DEA8(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        sub_18001DEA8(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap(v2, 0, v4);
        v5 = v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return qword_18016B260 == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
