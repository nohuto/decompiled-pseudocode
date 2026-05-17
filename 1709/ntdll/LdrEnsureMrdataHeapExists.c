/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x18005ED9C
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180073620 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800738C0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180073C20 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180075888 (RtlpAddVectoredHandler.c)
 *     RtlSetProtectedPolicy @ 0x1800823C0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  unsigned __int64 v4; // rdi
  _DWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  char *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v9 = 0LL;
  v10 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v10, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2uLL, v9, 0LL, 0LL, 0LL, 0LL);
    v2 = (_DWORD *)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (unsigned __int64)v3;
      v5 = v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (__int64)v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
