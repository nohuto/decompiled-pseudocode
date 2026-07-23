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

PVOID __fastcall RtlpHpLargeAlloc(PVOID BaseAddress, __int16 a2, ULONG_PTR a3, char a4)
{
  PVOID v4; // rsi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rdi
  ULONG Protect; // eax
  NTSTATUS v12; // r15d
  int v13; // eax
  ULONG v14; // eax
  NTSTATUS v15; // r14d
  int v16; // r12d
  BOOLEAN v17; // r8
  _RTL_BALANCED_NODE *v18; // rdx
  __int64 v19; // rcx
  _RTL_BALANCED_NODE *v21; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0LL;
  BaseAddressa = 0LL;
  v9 = (_RTL_BALANCED_NODE *)RtlpHpMetadataAlloc(40LL, 0LL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_35:
    if ( BaseAddressa )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, RegionSize, BaseAddressa);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  RegionSize = a3 + 4096;
  if ( a3 + 4096 < a3 )
  {
LABEL_33:
    if ( v10 )
      RtlpHpMetadataFree(v10);
    goto LABEL_35;
  }
  Protect = RtlpHpHeapValidateProtection(BaseAddress, (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0 ? 64 : 4);
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, RegionSize, BaseAddressa);
  if ( v12 < 0 )
  {
    BaseAddressa = 0LL;
    goto LABEL_33;
  }
  v13 = *((_DWORD *)BaseAddress + 5) & 0x40000000;
  RegionSize = a3;
  v14 = RtlpHpHeapValidateProtection(BaseAddress, v13 != 0 ? 64 : 4);
  v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, v14);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, RegionSize, BaseAddressa);
  if ( v15 < 0 )
    goto LABEL_33;
  v10[1].Children[0] = (_RTL_BALANCED_NODE *)BaseAddressa;
  v10[1].Children[1] = (_RTL_BALANCED_NODE *)(RegionSize ^ ((unsigned __int16)RegionSize ^ (unsigned __int16)v10[1].Children[1]) & 0xFFF);
  LOWORD(v10[1].Children[0]) = RegionSize - a2;
  v16 = a4 & 1;
  if ( !v16 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 9);
  v17 = 0;
  v18 = (_RTL_BALANCED_NODE *)*((_QWORD *)BaseAddress + 10);
  if ( v18 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)BaseAddressa < ((unsigned __int64)v18[1].Children[0] & 0xFFFFFFFFFFFF0000uLL) )
      {
        v21 = v18->Children[0];
        if ( (*((_BYTE *)BaseAddress + 88) & 1) != 0 )
        {
          if ( !v21 )
          {
LABEL_25:
            v17 = 0;
            break;
          }
          v21 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ (unsigned __int64)v21);
        }
        if ( !v21 )
          goto LABEL_25;
      }
      else
      {
        v21 = v18->Children[1];
        if ( (*((_BYTE *)BaseAddress + 88) & 1) != 0 )
        {
          if ( !v21 )
          {
LABEL_21:
            v17 = 1;
            break;
          }
          v21 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ (unsigned __int64)v21);
        }
        if ( !v21 )
          goto LABEL_21;
      }
      v18 = v21;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)BaseAddress + 5, v18, v17, v10);
  if ( !v16 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 9);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 12, (RegionSize >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 13, RegionSize >> 12);
  v4 = BaseAddressa;
  v10 = 0LL;
  BaseAddressa = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v19 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v19 = 2147353480LL;
  if ( *(_BYTE *)v19 )
  {
    RtlpHeapLogRangeReserve(BaseAddress, v4, RegionSize + 4096);
    goto LABEL_33;
  }
  return v4;
}
