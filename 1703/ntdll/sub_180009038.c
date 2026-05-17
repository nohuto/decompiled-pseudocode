/*
 * XREFs of sub_180009038 @ 0x180009038
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 */

unsigned __int64 __fastcall sub_180009038(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 48);
  v5 = sub_180009380(a1);
  v6 = v5;
  if ( v5 )
  {
    RtlRbRemoveNode(a1 + 56, v5);
    if ( !v4 )
      RtlReleaseSRWLockExclusive(a1 + 48);
    sub_180058688((unsigned int)&qword_180159600, v15 >> 16, 1, 0, 0LL, 0);
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v15, &v16, 0x8000LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(*(_QWORD *)(v6 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(v16 >> 12));
    sub_18000913C(v6);
    v7 = v16;
    v8 = v16;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v9, v11, v12) )
    {
      v7 = v16;
      v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
    }
    else
    {
      v13 = 2147353480LL;
    }
    if ( *(_BYTE *)v13 )
      sub_1800FDEE8(a1, v15, v7);
  }
  else
  {
    if ( !v4 )
      RtlReleaseSRWLockExclusive(a1 + 48);
    sub_1800A4DFC(8, a1, v15, 0, 0LL, 0LL);
    return 0LL;
  }
  return v8;
}
