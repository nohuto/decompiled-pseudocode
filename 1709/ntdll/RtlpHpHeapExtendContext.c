/*
 * XREFs of RtlpHpHeapExtendContext @ 0x18000736C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180007360 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180007470 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  signed __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  int v9; // eax
  int v10; // esi
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 328;
  RtlAcquireReleaseSRWLockExclusive(a1 + 328);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 336);
      if ( (unsigned __int64)(v5 + a2) > *(_QWORD *)(a1 + 344) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 336), v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *(_QWORD *)(a1 + 336);
    v8 = *(_QWORD *)(a1 + 344);
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v12 = *(_QWORD *)(a1 + 344);
  v11 = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 20) & 0x40000000) != 0 ? 64 : 4);
  v10 = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v11, 4096, v9);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, v11, v12);
  if ( v10 >= 0 )
  {
    *(_QWORD *)(a1 + 344) += v11;
    goto LABEL_10;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
