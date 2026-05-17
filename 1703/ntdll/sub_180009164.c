/*
 * XREFs of sub_180009164 @ 0x180009164
 * Callers:
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 */

unsigned __int64 __fastcall sub_180009164(__int64 a1, __int16 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // eax
  __int64 v13; // r8
  int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0LL;
  v24 = 0LL;
  v9 = (_QWORD *)sub_1800093FC(40LL, 0LL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_32:
    if ( v24 )
    {
      sub_180058688((unsigned int)&qword_180159600, v24 >> 16, 1, 0, 0LL, 0);
      v23 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v24, &v23, 0x8000LL);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  v23 = a3 + 4096;
  if ( a3 + 4096 < a3 )
    goto LABEL_30;
  v11 = sub_18001E548(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v24, 0LL, &v23, 0x2000, v11) < 0 )
  {
    v24 = 0LL;
    goto LABEL_30;
  }
  v23 = a3;
  v12 = sub_18001E548(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v24, 0LL, &v23, 4096, v12) < 0
    || (v10[3] = v24,
        v10[4] = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)v10[4]) & 0xFFF,
        *((_WORD *)v10 + 12) = v23 - a2,
        (int)sub_180058688((unsigned int)&qword_180159600, v24 >> 16, 1, 0, 0LL, 1) < 0) )
  {
LABEL_30:
    if ( v10 )
      sub_18000913C((int)v10);
    goto LABEL_32;
  }
  v14 = a4 & 1;
  if ( !v14 )
    RtlAcquireSRWLockExclusive(a1 + 48);
  LOBYTE(v13) = 0;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( v24 < (*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v16 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        {
          if ( !v16 )
          {
LABEL_22:
            LOBYTE(v13) = 0;
            break;
          }
          v16 ^= v15;
        }
        if ( !v16 )
          goto LABEL_22;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        {
          if ( !v16 )
          {
LABEL_13:
            LOBYTE(v13) = 1;
            break;
          }
          v16 ^= v15;
        }
        if ( !v16 )
          goto LABEL_13;
      }
      v15 = v16;
    }
  }
  RtlRbInsertNodeEx(a1 + 56, v15, v13, v10);
  if ( !v14 )
    RtlReleaseSRWLockExclusive(a1 + 48);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), (v23 >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v23 >> 12);
  v4 = v24;
  v10 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v17, v19, v20) )
    v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v21 = 2147353480LL;
  if ( *(_BYTE *)v21 )
  {
    sub_1800FDF88(a1, v4, v23 + 4096);
    goto LABEL_30;
  }
  return v4;
}
