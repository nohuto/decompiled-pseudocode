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

unsigned __int64 __fastcall RtlpHpSegSegmentAllocate(int *a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // eax
  int v10; // r14d
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r8
  _BOOL8 v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r12
  signed __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp+58h] BYREF

  v2 = *a1;
  v4 = 0LL;
  v6 = *((_QWORD *)a1 + 12);
  v7 = (unsigned int)-v2;
  v29 = 0LL;
  v30 = 0LL;
  v8 = 0;
  v31 = (unsigned int)(2 * v7);
  v9 = RtlpHpHeapValidateProtection(v6, (*(_DWORD *)(v6 + 20) & 0x40000000) != 0 ? 64 : 4);
  v10 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v31, 0x2000, v9);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, v31, v29);
  if ( v10 < 0 )
  {
    v29 = 0LL;
  }
  else
  {
    v11 = v29 + v31;
    v12 = ~(v7 - 1) & ((unsigned int)v7 + v29 - 1);
    v30 = v12;
    v13 = v12 - v29;
    v27 = v12 - v29;
    if ( v12 != v29 )
    {
      ZwFreeVirtualMemory(-1LL, &v29, &v27, 0x8000LL);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v27, v29);
      v12 = v30;
      v13 = v27;
    }
    v31 -= v13;
    v29 = v7 + v12;
    v27 = v11 - (v7 + v12);
    if ( v27 )
    {
      ZwFreeVirtualMemory(-1LL, &v29, &v27, 0x8000LL);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v27, v29);
      v12 = v30;
    }
    v31 -= v27;
    v14 = *((_QWORD *)a1 + 12);
    v29 = v12;
    v28 = (unsigned int)(a2 << 12) + 0x2000LL;
    v15 = RtlpHpHeapValidateProtection(v14, (*(_DWORD *)(v14 + 20) & 0x40000000) != 0 ? 64 : 4);
    v17 = ZwAllocateVirtualMemory(-1LL, &v30, 0LL, &v28, 4096, v15);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(4096LL, v28, v30);
    if ( v17 < 0 )
      goto LABEL_38;
    v19 = (_DWORD)v7 != 0x100000;
    v20 = 2 * (v30 >> 20);
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
    v22 = _InterlockedExchangeAdd64(*((volatile signed __int64 **)a1 + 9), v31 >> 12);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(
                         v22,
                         _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)a1 + 9) + 8LL), v28 >> 12)) )
      v24 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v24 = 2147353472LL;
    if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*((_QWORD *)a1 + 12), v30, v28, 12LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v23) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v25 = 2147353480LL;
    if ( *(_BYTE *)v25 )
      RtlpHeapLogRangeReserve(*((_QWORD *)a1 + 12), v30, v31);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*((_QWORD *)a1 + 12), *((_QWORD *)a1 + 9));
  }
  if ( v10 >= 0 )
    return v30;
LABEL_38:
  if ( v29 )
    RtlpHpSegSegmentFree(a1, v30, v8);
  return v4;
}
