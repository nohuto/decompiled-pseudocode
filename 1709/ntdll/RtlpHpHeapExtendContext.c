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

__int64 __fastcall RtlpHpHeapExtendContext(_RTL_SRWLOCK *BaseAddress, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  signed __int64 Value; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  ULONG Protect; // eax
  NTSTATUS v10; // esi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+10h] BYREF

  v2 = BaseAddress + 41;
  RtlAcquireReleaseSRWLockExclusive(BaseAddress + 41);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = BaseAddress[42].Value;
      if ( Value + a2 > BaseAddress[43].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&BaseAddress[42], Value + a2, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = BaseAddress[42].Value;
    v8 = BaseAddress[43].Value;
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  BaseAddressa = BaseAddress[43].Ptr;
  RegionSize = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpHpHeapValidateProtection(BaseAddress);
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, RegionSize, BaseAddressa);
  if ( v10 >= 0 )
  {
    BaseAddress[43].Value += RegionSize;
    goto LABEL_10;
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
