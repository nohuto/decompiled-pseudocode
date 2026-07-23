/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x140244D50
 * Callers:
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14017E3A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpHpVsContextInitialize @ 0x140245CC8 (RtlpHpVsContextInitialize.c)
 */

_QWORD *__fastcall RtlpHpFixedHeapCreate(
        void *a1,
        NTSTATUS (__fastcall *a2)(__int64 a1, PVOID *a2, ULONG_PTR *a3),
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  _QWORD *v9; // rdi
  NTSTATUS (__fastcall *v10)(__int64, PVOID *, ULONG_PTR *); // r14
  int v11; // r9d
  char *v12; // rax
  char MemoryInformation[16]; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-51h]
  _QWORD v16[5]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v17[4]; // [rsp+78h] [rbp-19h] BYREF
  int v18; // [rsp+98h] [rbp+7h]
  PVOID BaseAddress; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+F8h] [rbp+67h] BYREF

  BaseAddress = a1;
  v5 = 0LL;
  v6 = a4;
  v7 = a3;
  v9 = a1;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return (_QWORD *)v5;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           a1,
           MemoryRegionInformation,
           MemoryInformation,
           0x20uLL,
           0LL) < 0 )
      return (_QWORD *)v5;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v17, 0x30uLL, 0LL) < 0 )
      return (_QWORD *)v5;
    v9 = BaseAddress;
    if ( (PVOID)v17[0] != BaseAddress || v18 == 0x10000 )
      return (_QWORD *)v5;
    v7 = v15;
    if ( v18 == 4096 )
      v6 = v17[3];
  }
  v10 = RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v10 = a2;
  if ( v6 < 0x1000 )
  {
    v20 = 4096LL;
    if ( v10((__int64)v9, &BaseAddress, (ULONG_PTR *)&v20) < 0 )
      return (_QWORD *)v5;
    v9 = BaseAddress;
    v6 = 4096LL;
  }
  memset(v9, 0, 0xD8uLL);
  if ( v10 )
    v9[10] = RtlpHeapKey ^ (unsigned __int64)v10;
  v11 = a5;
  v9[1] = v9;
  *v9 = v9;
  v9[5] = v9;
  v9[6] = v9;
  v9[1] = v9 + 5;
  *v9 = v9 + 5;
  v9[7] = 0LL;
  *((_DWORD *)v9 + 5) = v11 & 0x13000003;
  *((_DWORD *)v9 + 4) = -857879331;
  v9[3] = v7 >> 12;
  v9[4] = v6 >> 12;
  v12 = (char *)BaseAddress + 4096;
  v16[4] = 0LL;
  v9[11] = (char *)BaseAddress + 4096;
  v9[12] = v12;
  v16[0] = RtlpHpFixedVsAllocate;
  v16[1] = xHalTimerWatchdogStop;
  v16[2] = RtlpHpFixedVsCommit;
  v16[3] = xHalTimerWatchdogStop;
  RtlpHpVsContextInitialize(v9 + 13, v9, v16, v11 & 0x8000000);
  return v9;
}
