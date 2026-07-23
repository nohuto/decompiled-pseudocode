/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x14014B914
 * Callers:
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x14014BAB0 (RtlpHpVsContextInitialize.c)
 *     ZwQueryVirtualMemory @ 0x1401A7920 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpFixedHeapCreate(
        PVOID BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  int v15; // edi
  int v16; // eax
  int v17; // r9d
  __int128 v19; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v21[5]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  int v23; // [rsp+90h] [rbp-19h]
  char MemoryInformation[16]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+7h]
  PVOID BaseAddressa; // [rsp+100h] [rbp+57h] BYREF
  int v27; // [rsp+108h] [rbp+5Fh] BYREF

  BaseAddressa = BaseAddress;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = (unsigned __int64)BaseAddress;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v6;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformation,
           MemoryInformation,
           0x20uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddressa, MemoryBasicInformation, v22, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddressa;
    if ( (PVOID)v22[0] != BaseAddressa || v23 == 0x10000 )
      return v6;
    v8 = v25;
    if ( v23 == 4096 )
      v7 = v22[3];
  }
  v11 = (unsigned __int64)&RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + 4279;
  v20 = (v13 + 4279) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 < v20 )
  {
    if ( ((int (__fastcall *)(unsigned __int64, PVOID *, unsigned __int64 *))v11)(v10, &BaseAddressa, &v20) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddressa;
  }
  memset((void *)v10, 0, v13 + 184);
  if ( v11 )
    *(_QWORD *)(v10 + 8) = RtlpHpHeapGlobals ^ v11;
  *(_DWORD *)(v10 + 32) = *a6 & 1;
  *(_QWORD *)(v10 + 24) = 0LL;
  v15 = a5;
  v16 = a5 & 0x13000003;
  *(_DWORD *)(v10 + 16) = -857879331;
  *(_DWORD *)(v10 + 20) = v16;
  *(_QWORD *)v10 = v12;
  *(_QWORD *)&v19 = v12;
  *((_QWORD *)&v19 + 1) = v10 + 184;
  RtlSetBitsEx((__int64)&v19, 0LL, v14 >> 12);
  v17 = *(_DWORD *)(v10 + 32);
  v21[0] = RtlpHpFixedVsAllocate;
  v21[4] = 0LL;
  v21[1] = RtlpHpFixedVsFree;
  v21[2] = RtlpHpFixedVsCommit;
  *((_QWORD *)&v19 + 1) = v10 ^ (v10 + 184);
  v21[3] = xHalTimerWatchdogStop;
  v27 = 0;
  *(_OWORD *)(v10 + 48) = v19;
  RtlpHpVsContextInitialize(v10 + 64, v10, (unsigned int)v21, v17, v15 & 0x8000000, (__int64)&v27);
  return v10;
}
