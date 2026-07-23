/*
 * XREFs of sub_180059FA8 @ 0x180059FA8
 * Callers:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005A184 @ 0x18005A184 (sub_18005A184.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     sub_18005C734 @ 0x18005C734 (sub_18005C734.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 */

PVOID __fastcall sub_180059FA8(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  ULONG_PTR v5; // rcx
  ULONG Protect; // eax
  int v7; // eax
  __int64 v8; // r15
  ULONG v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 UserModeGlobalLogger; // rcx
  int v14; // [rsp+70h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v17; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v14, 4LL) >= 0 && v14 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = qword_18015A580[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddress = 0LL;
  RegionSize = v5;
  Protect = sub_18002AE30((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v7 = qword_18015A580[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v17 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18002AE30((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v17, 0x1000u, v9) < 0 )
  {
    RegionSize = 0LL;
    sub_18005CD8C(v10, &BaseAddress, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FE318(a1, (int)BaseAddress, v17, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v11);
    sub_1800FE0A4(a1, BaseAddress, v17, 9LL);
  }
  sub_18005A184(a1, v2, BaseAddress);
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 536LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 544LL) += v17;
  *((_QWORD *)BaseAddress + 6) = (char *)BaseAddress + RegionSize;
  *((_QWORD *)BaseAddress + 5) = (char *)BaseAddress + v17;
  *((_QWORD *)BaseAddress + 4) = (char *)BaseAddress + v8 + 3312;
  if ( (dword_18015D040 & 3) == 0 )
  {
    dword_18015D040 |= 1u;
    sub_18005C734();
  }
  *((_DWORD *)BaseAddress + 168) = v2;
  return BaseAddress;
}
