/*
 * XREFs of sub_1800074BC @ 0x1800074BC
 * Callers:
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 * Callees:
 *     sub_180007688 @ 0x180007688 (sub_180007688.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 */

__int64 __fastcall sub_1800074BC(PVOID BaseAddress, int a2, char *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rsi
  __int64 v13; // rax
  char *v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  PVOID BaseAddressa; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v4 + 4095) >> 12;
  v18 = v10 << 12;
  if ( v10 << 12 < v4 )
    return 0LL;
  if ( v10 > v8 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return sub_1800206A8(BaseAddress, a3);
    return 0LL;
  }
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 6);
  v13 = sub_180009380(BaseAddress);
  if ( v13 )
  {
    *(_QWORD *)(v13 + 32) &= 0xFFFuLL;
    *(_QWORD *)(v13 + 32) |= v10 << 12;
    *(_WORD *)(v13 + 24) = ((_WORD)v10 << 12) - *(_WORD *)(a4 + 24);
    if ( (a2 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 6);
    if ( *(_DWORD *)(a4 + 16) )
      sub_180007688((_DWORD)a3, *(_QWORD *)a4, (_DWORD)a3, *(_QWORD *)(a4 + 24), a2);
    if ( v10 < v8 )
    {
      v14 = &a3[v18];
      RegionSize = (v8 - v10) << 12;
      BaseAddressa = &a3[v18 + 4096];
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      else
        v15 = 2147353480LL;
      if ( *(_BYTE *)v15 )
        sub_1800FDEE8(BaseAddress, BaseAddressa, RegionSize);
      RegionSize = 4096LL;
      BaseAddressa = v14;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x4000u);
      v16 = v10 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 10, v16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 9, v16);
    }
    return (__int64)a3;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 6);
    return -1LL;
  }
}
