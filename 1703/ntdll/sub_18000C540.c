/*
 * XREFs of sub_18000C540 @ 0x18000C540
 * Callers:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 * Callees:
 *     sub_18000C718 @ 0x18000C718 (sub_18000C718.c)
 *     sub_18000EE68 @ 0x18000EE68 (sub_18000EE68.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

PVOID __fastcall sub_18000C540(_DWORD *BaseAddress)
{
  unsigned int v2; // ebx
  int v3; // ecx
  ULONG_PTR v4; // rcx
  ULONG Protect; // eax
  int v6; // eax
  __int64 v7; // r14
  ULONG v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 UserModeGlobalLogger; // rcx
  int v13; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddressa; // [rsp+78h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+48h] BYREF
  ULONG_PTR v16; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v13, 4LL) >= 0 && v13 <= 10 )
    v2 = 3;
  if ( (BaseAddress[28] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = dword_1801593E0;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v4 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddressa = 0LL;
  RegionSize = v4;
  Protect = sub_18001E548(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v6 = dword_1801593E0;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  v16 = (v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v8 = sub_18001E548(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v16, 0x1000u, v8) < 0 )
  {
    RegionSize = 0LL;
    sub_18001E5E0(v9, &BaseAddressa, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v10 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FFAA8(
      (int)BaseAddress,
      (int)BaseAddressa,
      v16,
      16 * *((_QWORD *)BaseAddress + 24),
      (HANDLE)*(unsigned __int8 *)v10);
    sub_1800FF834(BaseAddress, BaseAddressa, v16, 9LL);
  }
  sub_18000C718(BaseAddress, v2, BaseAddressa);
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 536LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 544LL) += v16;
  *((_QWORD *)BaseAddressa + 6) = (char *)BaseAddressa + RegionSize;
  *((_QWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v16;
  *((_QWORD *)BaseAddressa + 4) = (char *)BaseAddressa + v7 + 3312;
  if ( (dword_18015BFDC & 3) == 0 )
  {
    dword_18015BFDC |= 1u;
    sub_18000EE68();
  }
  *((_DWORD *)BaseAddressa + 168) = v2;
  return BaseAddressa;
}
