/*
 * XREFs of RtlpHpLargeAlloc @ 0x18006EC20
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x1800FFB38 (RtlpHeapLogRangeReserve.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  void *v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // eax
  int v12; // r15d
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  int v19; // r12d
  bool v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v9 = (void *)RtlpHpMetadataAlloc(40LL, 0LL);
  v10 = (unsigned __int64)v9;
  if ( !v9 )
  {
LABEL_35:
    if ( v26 )
    {
      v25 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v26, &v25, 0x8000LL);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v25, v26);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  v25 = a3 + 4096;
  if ( a3 + 4096 < a3 )
  {
LABEL_33:
    if ( v10 )
      RtlpHpMetadataFree(v10);
    goto LABEL_35;
  }
  v11 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 20) & 0x40000000) != 0 ? 64 : 4);
  v12 = ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v25, 0x2000, v11);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, v25, v26);
  if ( v12 < 0 )
  {
    v26 = 0LL;
    goto LABEL_33;
  }
  v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
  v25 = a3;
  v14 = RtlpHpHeapValidateProtection(a1, v13 != 0 ? 64 : 4);
  v18 = ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v25, 4096, v14);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, v25, v26);
  if ( v18 < 0 )
    goto LABEL_33;
  *(_QWORD *)(v10 + 24) = v26;
  *(_QWORD *)(v10 + 32) = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)*(_QWORD *)(v10 + 32)) & 0xFFF;
  *(_WORD *)(v10 + 24) = v25 - a2;
  v19 = a4 & 1;
  if ( !v19 )
    RtlAcquireSRWLockExclusive(a1 + 72, v15, v16, v17);
  v20 = 0;
  v21 = *(_QWORD *)(a1 + 80);
  if ( v21 )
  {
    while ( 1 )
    {
      if ( v26 < (*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v24 = *(_QWORD *)v21;
        if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
        {
          if ( !v24 )
          {
LABEL_25:
            v20 = 0;
            break;
          }
          v24 ^= v21;
        }
        if ( !v24 )
          goto LABEL_25;
      }
      else
      {
        v24 = *(_QWORD *)(v21 + 8);
        if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
        {
          if ( !v24 )
          {
LABEL_21:
            v20 = 1;
            break;
          }
          v24 ^= v21;
        }
        if ( !v24 )
          goto LABEL_21;
      }
      v21 = v24;
    }
  }
  RtlRbInsertNodeEx(a1 + 80, v21, v20, v10);
  if ( !v19 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), (v25 >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v25 >> 12);
  v4 = v26;
  v10 = 0LL;
  v26 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v22 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v22 = 2147353480LL;
  if ( *(_BYTE *)v22 )
  {
    RtlpHeapLogRangeReserve(a1, v4, v25 + 4096);
    goto LABEL_33;
  }
  return v4;
}
