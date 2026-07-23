/*
 * XREFs of sub_18000A020 @ 0x18000A020
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

PVOID __fastcall sub_18000A020(volatile signed __int64 *BaseAddress, int a2)
{
  __int64 v2; // rbx
  ULONG Protect; // eax
  NTSTATUS v6; // esi
  ULONG_PTR v7; // rdx
  unsigned __int64 v8; // rcx
  char *v9; // rsi
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rsi
  ULONG v13; // eax
  __int64 UserModeGlobalLogger; // rcx
  __int64 v15; // rcx
  PVOID v17; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v18; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v19[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  RegionSize = 0x200000LL;
  BaseAddressa = 0LL;
  v17 = 0LL;
  Protect = sub_18001E548((PVOID)BaseAddress);
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v6 < 0 )
  {
    BaseAddressa = 0LL;
  }
  else
  {
    v7 = RegionSize;
    v8 = ((unsigned __int64)BaseAddressa + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v9 = (char *)BaseAddressa + RegionSize;
    v17 = (PVOID)v8;
    v10 = v8 - (_QWORD)BaseAddressa;
    v18 = v8 - (_QWORD)BaseAddressa;
    if ( (PVOID)v8 != BaseAddressa )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v18, 0x8000u);
      v8 = (unsigned __int64)v17;
      v7 = RegionSize;
      v10 = v18;
    }
    v11 = v7 - v10;
    v12 = (ULONG_PTR)&v9[-v8 - 0x100000];
    RegionSize = v11;
    v18 = v12;
    BaseAddressa = (PVOID)(v8 + 0x100000);
    if ( v12 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v18, 0x8000u);
      v8 = (unsigned __int64)v17;
      v11 = RegionSize;
      v12 = v18;
    }
    BaseAddressa = (PVOID)v8;
    RegionSize = v11 - v12;
    v19[0] = (unsigned int)(a2 << 12) + 0x2000LL;
    v13 = sub_18001E548((PVOID)BaseAddress);
    v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v17, 0LL, v19, 0x1000u, v13);
    if ( v6 < 0 )
      goto LABEL_22;
    _InterlockedExchangeAdd64(BaseAddress, RegionSize >> 12);
    _InterlockedExchangeAdd64(BaseAddress + 1, v19[0] >> 12);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(BaseAddress, v17, v19[0], 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    else
      v15 = 2147353480LL;
    if ( *(_BYTE *)v15 )
      sub_1800FDF88(BaseAddress, v17, 0x100000LL);
  }
  if ( v6 >= 0 )
    return v17;
LABEL_22:
  if ( BaseAddressa )
  {
    v18 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v18, 0x8000u);
  }
  return (PVOID)v2;
}
