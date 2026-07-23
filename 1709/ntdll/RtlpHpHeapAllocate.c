/*
 * XREFs of RtlpHpHeapAllocate @ 0x180003B70
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18004944C (RtlpHeapGenerateRandomValue64.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

PVOID __fastcall RtlpHpHeapAllocate(int a1, unsigned int a2)
{
  __int64 v2; // rax
  ULONG Protect; // ebx
  NTSTATUS v5; // edi
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  PVOID result; // rax
  ULONG_PTR v9; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v12; // [rsp+48h] [rbp-8h] BYREF
  PVOID v13; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+38h] BYREF

  v9 = 0LL;
  v2 = 64LL;
  BaseAddress = 0LL;
  if ( a2 <= 0x40 )
    v2 = a2;
  v14 = 129 * (((v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 72 * v2) + 15144;
  v9 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = v14 + v9;
  if ( v14 + v9 < v14 )
  {
    v9 = 0LL;
    RegionSize = v14;
  }
  Protect = (a1 & 0x40000000) != 0 ? 64 : 4;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, RegionSize, BaseAddress);
  if ( v5 < 0 )
  {
    result = 0LL;
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = BaseAddress;
  v14 = RegionSize;
  if ( v9 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v9, 0x8000u);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, v9, BaseAddress);
    v14 = RegionSize - v9;
    v13 = (char *)BaseAddress + v9;
  }
  v12 = 1728LL;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v13, 0LL, &v12, 0x1000u, Protect);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, v12, v13);
  if ( v6 >= 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v7 = 2147353472LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v13, v13, v12, 11LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, v14 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 4, v12 >> 12);
    *((_QWORD *)v13 + 42) = (char *)v13 + 1728;
    *((_QWORD *)v13 + 43) = (char *)v13 + v12;
    v5 = 0;
    *((_QWORD *)v13 + 44) = (char *)v13 + v14;
    result = v13;
LABEL_19:
    if ( v5 >= 0 )
      return result;
    goto LABEL_26;
  }
  result = v13;
LABEL_26:
  if ( result )
  {
    v14 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v13, &v14, 0x8000u);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, v14, v13);
    return 0LL;
  }
  return result;
}
