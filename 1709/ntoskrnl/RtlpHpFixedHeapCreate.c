/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x14025C100
 * Callers:
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     ZwQueryVirtualMemory @ 0x14017DD20 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpHpVsContextInitialize @ 0x14025D1C0 (RtlpHpVsContextInitialize.c)
 */

_QWORD *__fastcall RtlpHpFixedHeapCreate(
        void *a1,
        NTSTATUS (__fastcall *a2)(__int64 a1, PVOID *a2, ULONG_PTR *a3),
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  _QWORD *v9; // rsi
  NTSTATUS (__fastcall *v10)(__int64, PVOID *, ULONG_PTR *); // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r13
  int v13; // ebx
  char MemoryInformation[16]; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-51h]
  _QWORD v17[5]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v18[4]; // [rsp+78h] [rbp-19h] BYREF
  int v19; // [rsp+98h] [rbp+7h]
  PVOID BaseAddress; // [rsp+F0h] [rbp+5Fh] BYREF
  unsigned __int64 v21; // [rsp+F8h] [rbp+67h] BYREF

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
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v18, 0x30uLL, 0LL) < 0 )
      return (_QWORD *)v5;
    v9 = BaseAddress;
    if ( (PVOID)v18[0] != BaseAddress || v19 == 0x10000 )
      return (_QWORD *)v5;
    v7 = v16;
    if ( v19 == 4096 )
      v6 = v18[3];
  }
  v10 = RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v10 = a2;
  v11 = v7 >> 12;
  v12 = ((v11 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v21 = (v12 + 4271) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 < v21 )
  {
    if ( v10((__int64)v9, &BaseAddress, &v21) < 0 )
      return (_QWORD *)v5;
    v9 = BaseAddress;
  }
  memset(v9, 0, v12 + 176);
  if ( v10 )
    v9[1] = RtlpHeapKey ^ (unsigned __int64)v10;
  v13 = a5;
  v9[3] = 0LL;
  *((_DWORD *)v9 + 4) = -857879331;
  *((_DWORD *)v9 + 5) = v13 & 0x13000003;
  *v9 = v11;
  v9[7] = v9 + 22;
  v9[6] = v11;
  RtlSetBitsEx((__int64)(v9 + 6), 0LL, (v12 + 4271) >> 12);
  v17[4] = 0LL;
  v17[0] = RtlpHpFixedVsAllocate;
  v17[1] = RtlpHpFixedVsFree;
  v17[2] = RtlpHpFixedVsCommit;
  v17[3] = xHalTimerWatchdogStop;
  RtlpHpVsContextInitialize(v9 + 8, v9, v17, v13 & 0x8000000);
  return v9;
}
