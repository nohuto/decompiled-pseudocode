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

__int64 sub_180083738()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !qword_18016B370 || qword_18016B260 )
    return 0LL;
  v6 = 0LL;
  v7 = qword_18015AF68;
  result = ZwAllocateVirtualMemory(-1LL, &v6, 0LL, &v7, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2uLL, v6, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (unsigned __int64)v3;
      v5 = v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        sub_18001DEA8(0);
        RtlAcquireSRWLockExclusive(&qword_18015AF70);
        if ( !qword_18016B260 )
        {
          qword_18016B270 = v4;
          qword_18016B260 = v2;
          RtlReleaseSRWLockExclusive(&qword_18015AF70);
          sub_18001DEA8(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&qword_18015AF70);
        sub_18001DEA8(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap(v2, 0, v4);
        v5 = v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
    return qword_18016B260 == 0 ? 0xC0000017 : 0;
  }
  return result;
}
