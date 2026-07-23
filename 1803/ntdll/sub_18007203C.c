/*
 * XREFs of sub_18007203C @ 0x18007203C
 * Callers:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 * Callees:
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007203C(__int64 a1, _RTL_SRWLOCK *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  char *v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, int, unsigned int); // rax
  unsigned __int64 v15; // rax
  int v16; // r14d

  _BitScanForward64(&v5, a3);
  v7 = a4;
  _BitScanReverse64(&v8, a3);
  LODWORD(v8) = v8 - v5;
  v10 = (char *)a2 + (unsigned int)((_DWORD)v5 << 12);
  v11 = ((_DWORD)v8 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v8 + 1)) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 3);
  v13 = a1 ^ *(_QWORD *)(a1 + 64);
  if ( a5 )
  {
    v16 = ((__int64 (__fastcall *)(__int64, char *, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 88)))(
            v13,
            v10,
            v11);
    if ( v16 < 0 )
      goto LABEL_6;
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr | v12);
    v15 = v7;
  }
  else
  {
    v14 = (__int64 (__fastcall *)(__int64, int, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 96));
    if ( v14 == sub_180011560 )
      sub_180011560(v13, (int)v10, v11);
    else
      v14(v13, (int)v10, v11);
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr & ~v12);
    v15 = -(int)v7;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v15);
  v16 = 0;
LABEL_6:
  RtlReleaseSRWLockExclusive(a2 + 3);
  return (unsigned int)v16;
}
