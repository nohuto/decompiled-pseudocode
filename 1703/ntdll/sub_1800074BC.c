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

__int64 __fastcall sub_1800074BC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v4 + 4095) >> 12;
  v22 = v10 << 12;
  if ( v10 << 12 < v4 )
    return 0LL;
  if ( v10 > v8 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return sub_1800206A8(a1, a3, a4, a2);
    return 0LL;
  }
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 48);
  v13 = sub_180009380(a1);
  if ( v13 )
  {
    *(_QWORD *)(v13 + 32) &= 0xFFFuLL;
    *(_QWORD *)(v13 + 32) |= v10 << 12;
    *(_WORD *)(v13 + 24) = ((_WORD)v10 << 12) - *(_WORD *)(a4 + 24);
    if ( (a2 & 1) == 0 )
      RtlReleaseSRWLockExclusive(a1 + 48);
    if ( *(_DWORD *)(a4 + 16) )
      sub_180007688(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
    if ( v10 < v8 )
    {
      v14 = a3 + v22;
      v23 = (v8 - v10) << 12;
      v21 = a3 + v22 + 4096;
      ZwFreeVirtualMemory(-1LL, &v21, &v23, 0x8000LL);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
        v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      else
        v19 = 2147353480LL;
      if ( *(_BYTE *)v19 )
        sub_1800FDEE8(a1, v21, v23);
      v23 = 4096LL;
      v21 = v14;
      ZwFreeVirtualMemory(-1LL, &v21, &v23, 0x4000LL);
      v20 = v10 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v20);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v20);
    }
    return a3;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      RtlReleaseSRWLockExclusive(a1 + 48);
    return -1LL;
  }
}
