/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1800036E8
 * Callers:
 *     RtlpHpSegContextReserve @ 0x1800040FC (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskWrite @ 0x180003960 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpSegSegmentFree @ 0x1800620C0 (RtlpHpSegSegmentFree.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeReserve @ 0x1800FFB38 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

PVOID __fastcall RtlpHpSegSegmentAllocate(int *a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rbx
  void *v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // r13d
  ULONG Protect; // eax
  NTSTATUS v10; // r14d
  char *v11; // rdi
  char *v12; // rdx
  ULONG_PTR v13; // rax
  void *v14; // rcx
  ULONG v15; // eax
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  __int64 v18; // r8
  _BOOL8 v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rcx
  ULONG_PTR v25; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v26; // [rsp+38h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  PVOID v28; // [rsp+90h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  v2 = *a1;
  v4 = 0LL;
  v6 = (void *)*((_QWORD *)a1 + 12);
  v7 = (unsigned int)-v2;
  BaseAddress = 0LL;
  v28 = 0LL;
  v8 = 0;
  RegionSize = (unsigned int)(2 * v7);
  Protect = RtlpHpHeapValidateProtection(v6);
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, RegionSize, BaseAddress);
  if ( v10 < 0 )
  {
    BaseAddress = 0LL;
  }
  else
  {
    v11 = (char *)BaseAddress + RegionSize;
    v12 = (char *)(~(v7 - 1) & ((unsigned __int64)BaseAddress + (unsigned int)v7 - 1));
    v28 = v12;
    v13 = v12 - (_BYTE *)BaseAddress;
    v25 = v12 - (_BYTE *)BaseAddress;
    if ( v12 != BaseAddress )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v25, 0x8000u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v25, BaseAddress);
      v12 = (char *)v28;
      v13 = v25;
    }
    RegionSize -= v13;
    BaseAddress = &v12[v7];
    v25 = v11 - &v12[v7];
    if ( v25 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v25, 0x8000u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v25, BaseAddress);
      v12 = (char *)v28;
    }
    RegionSize -= v25;
    v14 = (void *)*((_QWORD *)a1 + 12);
    BaseAddress = v12;
    v26 = (unsigned int)(a2 << 12) + 0x2000LL;
    v15 = RtlpHpHeapValidateProtection(v14);
    v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v28, 0LL, &v26, 0x1000u, v15);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(4096LL, v26, v28);
    if ( v17 < 0 )
      goto LABEL_38;
    v19 = (_DWORD)v7 != 0x100000;
    v20 = 2 * ((unsigned __int64)v28 >> 20);
    v21 = v20 + 2 * ((unsigned __int64)(unsigned int)v7 >> 20);
    while ( v20 < v21 )
    {
      v10 = RtlCSparseBitmapBitmaskWrite(v16, v20, v18, v19 + 1);
      if ( v10 < 0 )
        goto LABEL_20;
      v20 += 2LL;
    }
    v10 = 0;
LABEL_20:
    if ( v10 < 0 )
      goto LABEL_38;
    v8 = 1;
    _InterlockedExchangeAdd64(*((volatile signed __int64 **)a1 + 9), RegionSize >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)a1 + 9) + 8LL), v26 >> 12);
    if ( RtlGetCurrentServiceSessionId() )
      v22 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v22 = 2147353472LL;
    if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*((_QWORD *)a1 + 12), v28, v26, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v23 = 2147353480LL;
    if ( *(_BYTE *)v23 )
      RtlpHeapLogRangeReserve(*((_QWORD *)a1 + 12), v28, RegionSize);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*((_QWORD *)a1 + 12), *((_QWORD *)a1 + 9));
  }
  if ( v10 >= 0 )
    return v28;
LABEL_38:
  if ( BaseAddress )
    RtlpHpSegSegmentFree(a1, v28, v8);
  return (PVOID)v4;
}
