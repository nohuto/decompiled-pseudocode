/*
 * XREFs of sub_180007334 @ 0x180007334
 * Callers:
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 * Callees:
 *     sub_180020B20 @ 0x180020B20 (sub_180020B20.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007334(__int64 a1, _RTL_SRWLOCK *a2, unsigned __int64 a3, unsigned int a4, int a5, char a6)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rbp
  char *v13; // rsi
  void *v14; // rcx
  __int64 (__fastcall *v15)(PVOID); // rax
  int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  void (__fastcall *v20)(void *, char *, _QWORD); // rax

  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v8, a3);
  v10 = a4;
  v11 = (1 - (_DWORD)v7 + (_DWORD)v8) << 12;
  v12 = ((1LL << (1 - (unsigned __int8)v7 + (unsigned __int8)v8)) - 1) << v7;
  v13 = (char *)a2 + (unsigned int)((_DWORD)v7 << 12);
  if ( (a6 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a2 + 3);
  v14 = *(void **)(a1 + 56);
  if ( a5 )
  {
    v15 = (__int64 (__fastcall *)(PVOID))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 80));
    if ( v15 == sub_180020D20 )
      v16 = sub_180020D20(v14);
    else
      v16 = ((__int64 (__fastcall *)(void *, char *, _QWORD))v15)(v14, v13, v11);
    v17 = v16;
    if ( v16 < 0 )
      goto LABEL_9;
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr | v12);
    v18 = v10;
  }
  else
  {
    v20 = (void (__fastcall *)(void *, char *, _QWORD))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 88));
    if ( (char *)v20 == (char *)sub_180020B20 )
      sub_180020B20(v14, v13, v11);
    else
      v20(v14, v13, v11);
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr & ~v12);
    v18 = -(int)v10;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v18);
  v17 = 0;
LABEL_9:
  if ( (a6 & 1) == 0 )
    RtlReleaseSRWLockExclusive(a2 + 3);
  return v17;
}
