/*
 * XREFs of sub_18001BE98 @ 0x18001BE98
 * Callers:
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 */

__int64 __fastcall sub_18001BE98(unsigned __int64 *BaseAddress, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdi
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rax
  ULONG Protect; // r15d
  NTSTATUS v12; // ecx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rdi
  __int64 UserModeGlobalLogger; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  ULONG_PTR v25; // rax
  __int64 v26; // rax
  ULONG_PTR v27[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v30; // [rsp+A8h] [rbp+58h] BYREF

  v30 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  if ( sub_18001C138(BaseAddress, &v30) )
  {
    v30 >>= 4;
    v5 = sub_18001D964(BaseAddress);
    sub_18001D350(BaseAddress, v5, v30);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v5 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        sub_1800FDA30(BaseAddress, v5);
    }
    return v5;
  }
  if ( (BaseAddress[14] & 2) == 0 )
    goto LABEL_36;
  BaseAddressa = 0LL;
  v7 = a2 + 0x2000;
  v8 = BaseAddress[20];
  if ( a2 + 0x2000 > v8 )
    v8 = a2 + 0x2000;
  if ( *((_BYTE *)BaseAddress + 386) == 2 )
    v9 = BaseAddress[47];
  else
    v9 = 0LL;
  if ( !v9 && v8 >= 0x3F4000 )
    *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
  v10 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v10 >= 0xFD0000 )
    v10 = 16580608LL;
  RegionSize = v10;
  Protect = sub_18001E548(BaseAddress);
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v12 < 0 )
  {
    while ( 1 )
    {
      v13 = RegionSize;
      if ( RegionSize == v7 )
        break;
      v25 = RegionSize >> 1;
      if ( RegionSize >> 1 < v7 )
        v25 = a2 + 0x2000;
      RegionSize = v25;
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
      if ( v12 >= 0 )
      {
        v13 = RegionSize;
        break;
      }
    }
    if ( v12 < 0 )
    {
      ++*((_DWORD *)BaseAddress + 150);
      goto LABEL_36;
    }
  }
  else
  {
    v13 = RegionSize;
  }
  BaseAddress[20] += v13;
  v14 = BaseAddress[21];
  if ( a2 + 4096 > v14 )
    v14 = a2 + 4096;
  v27[0] = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, v27, 0x1000u, Protect);
  if ( v16 >= 0 )
  {
    v18 = sub_18000EA74(
            (char *)BaseAddress,
            (__int64)BaseAddressa,
            112LL,
            v17,
            2,
            (__int64)BaseAddressa,
            (char *)BaseAddressa + v27[0],
            (unsigned __int64)BaseAddressa + RegionSize - 4096);
    v15 = 3221225495LL;
    if ( !v18 )
      v16 = -1073741801;
    if ( v16 >= 0 )
    {
      v19 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FF834(BaseAddress, BaseAddressa, v27[0], 4LL);
        if ( RtlGetCurrentServiceSessionId() )
          v19 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        sub_1800FFAA8(
          (int)BaseAddress,
          *((_QWORD *)BaseAddressa + 8),
          v27[0],
          16 * BaseAddress[24],
          (HANDLE)*(unsigned __int8 *)v19);
      }
      v21 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v22 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      else
        v22 = 2147353482LL;
      if ( *(_BYTE *)v22 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        sub_1800FFAA8(
          (int)BaseAddress,
          *((_QWORD *)BaseAddressa + 8),
          v27[0],
          16 * BaseAddress[24],
          (HANDLE)*(unsigned __int8 *)v21);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v23 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      else
        v23 = 2147353480LL;
      if ( *(_BYTE *)v23 )
        sub_1800FDF88(BaseAddress, BaseAddressa, RegionSize);
      v24 = *((_QWORD *)BaseAddressa + 8);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v24 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v24 + 11) != (*(_BYTE *)(v24 + 8) ^ (unsigned __int8)(*(_BYTE *)(v24 + 9) ^ *(_BYTE *)(v24 + 10))) )
          sub_1800FDA30(BaseAddress, v24);
      }
      return *((_QWORD *)BaseAddressa + 8);
    }
  }
  sub_18001E5E0(v15, &BaseAddressa, &RegionSize, 0x8000LL);
LABEL_36:
  if ( *((char *)BaseAddress + 112) < 0 )
  {
    v26 = sub_1800EFFE8(BaseAddress);
    v4 = (_BYTE *)v26;
    if ( v26 )
    {
      if ( *(unsigned __int16 *)(v26 + 8) >= a2 )
        return v26;
    }
  }
  v5 = 0LL;
  if ( v4 && *((_DWORD *)BaseAddress + 31) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  return v5;
}
