/*
 * XREFs of sub_18000A73C @ 0x18000A73C
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

PVOID __fastcall sub_18000A73C(int a1, unsigned int a2)
{
  __int64 v2; // rax
  ULONG Protect; // ebx
  NTSTATUS v5; // ecx
  __int64 UserModeGlobalLogger; // rcx
  PVOID result; // rax
  ULONG_PTR v8; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v11; // [rsp+48h] [rbp-8h] BYREF
  PVOID v12; // [rsp+70h] [rbp+20h] BYREF
  ULONG_PTR v13; // [rsp+78h] [rbp+28h] BYREF

  v8 = 0LL;
  v2 = 64LL;
  BaseAddress = 0LL;
  if ( a2 <= 0x40 )
    v2 = a2;
  v13 = 129
      * (((v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
       + ((56LL * (unsigned int)v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
       + 8LL * (unsigned int)v2)
      + 15968;
  v8 = (sub_18000EEA8() & 0x1F) << 16;
  RegionSize = v13 + v8;
  if ( v13 + v8 < v13 )
  {
    v8 = 0LL;
    RegionSize = v13;
  }
  Protect = (a1 & 0x40000000) != 0 ? 64 : 4;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v5 < 0 )
  {
    result = 0LL;
    v12 = 0LL;
    goto LABEL_13;
  }
  v12 = BaseAddress;
  v13 = RegionSize;
  if ( v8 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v8, 0x8000u);
    v13 = RegionSize - v8;
    v12 = (char *)BaseAddress + v8;
  }
  v11 = 1520LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, 0LL, &v11, 0x1000u, Protect) >= 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(v12, v12, v11, 11LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12, v13 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 1, v11 >> 12);
    *((_QWORD *)v12 + 19) = (char *)v12 + 1520;
    *((_QWORD *)v12 + 20) = (char *)v12 + v11;
    *((_QWORD *)v12 + 21) = (char *)v12 + v13;
    v5 = 0;
    result = v12;
LABEL_13:
    if ( v5 >= 0 )
      return result;
    goto LABEL_20;
  }
  result = v12;
LABEL_20:
  if ( result )
  {
    v13 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v12, &v13, 0x8000u);
    return 0LL;
  }
  return result;
}
