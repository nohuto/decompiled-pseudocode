/*
 * XREFs of sub_180020D20 @ 0x180020D20
 * Callers:
 *     sub_180007334 @ 0x180007334 (sub_180007334.c)
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 */

NTSTATUS __fastcall sub_180020D20(volatile signed __int64 *BaseAddress, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edi
  unsigned int v16; // esi
  bool v17; // zf
  ULONG Protect; // r14d
  NTSTATUS result; // eax
  char *v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // al
  char v23; // al
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  PVOID MemoryInformation[4]; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+54h] [rbp-34h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = sub_180020EF0(BaseAddress, a2);
  v8 = a3;
  v9 = 0LL;
  v10 = v7;
  v11 = (unsigned int)((a2 - v4) >> 12);
  v12 = 0LL;
  v13 = v4 + 32 * v11;
  v14 = v13 + 32 * (v8 >> 12);
  v15 = 0;
  if ( v13 == v14 )
    return 0;
  do
  {
    if ( (*(_BYTE *)(v13 + 24) & 2) == 0 )
    {
      v9 = v13;
      if ( !v12 )
        v12 = v13;
      ++v15;
    }
    v13 += 32LL;
  }
  while ( v13 != v14 );
  v16 = v12 ? ((__int64)(v9 - v12) >> 5) + 1 : v30;
  if ( !v15 )
    return 0;
  BaseAddressa = (PVOID)((v12 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v12 - (v12 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
  v17 = *((_DWORD *)BaseAddress + 4) == -571548178;
  RegionSize = v16 << 12;
  if ( v17 )
  {
    if ( (*((_DWORD *)BaseAddress + 5) & 0x40000000) == 0 )
      goto LABEL_12;
  }
  else if ( (BaseAddress[14] & 0x40000) == 0 )
  {
    goto LABEL_12;
  }
  Protect = 64;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID)BaseAddress,
         MemoryBasicInformation,
         MemoryInformation,
         0x30uLL,
         0LL) >= 0
    && (v27 & 0x60) != 0
    && MemoryInformation[0] == BaseAddress )
  {
    goto LABEL_13;
  }
  sub_1800A4DFC(0, (_DWORD)BaseAddress, 1, v27, 0LL, 0LL);
LABEL_12:
  Protect = 4;
LABEL_13:
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result < 0 )
    return result;
  _InterlockedExchangeAdd64(BaseAddress + 1, v15);
  if ( v12 < v12 + 32LL * v16 )
  {
    v20 = (char *)(v12 + 24);
    v21 = ((32 * (unsigned __int64)v16 - 1) >> 5) + 1;
    do
    {
      v22 = *v20;
      if ( v15 <= 0 )
        v23 = v22 & 0xFD;
      else
        v23 = v22 | 2;
      *v20 = v23;
      v20 += 32;
      --v21;
    }
    while ( v21 );
  }
  *(_BYTE *)(v10 + 26) = ~(v15 + ~*(_BYTE *)(v10 + 26));
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FF834(BaseAddress, BaseAddressa, RegionSize, 10LL);
  }
  return 0;
}
