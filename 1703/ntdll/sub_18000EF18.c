/*
 * XREFs of sub_18000EF18 @ 0x18000EF18
 * Callers:
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 * Callees:
 *     sub_18000ECC4 @ 0x18000ECC4 (sub_18000ECC4.c)
 *     sub_18000F0DC @ 0x18000F0DC (sub_18000F0DC.c)
 *     sub_18000F118 @ 0x18000F118 (sub_18000F118.c)
 *     sub_18000F17C @ 0x18000F17C (sub_18000F17C.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_18000EF18(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  _SLIST_HEADER *v13; // rcx
  PSLIST_ENTRY v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  PSLIST_ENTRY v17; // rsi

  v4 = *(unsigned __int8 *)(a2 + 2);
  v6 = a3;
  v7 = (unsigned __int16)word_1801194D0[*(unsigned __int8 *)(a2 + 1)];
  v8 = (*(_DWORD *)(a2 + 56) >> 3) / v4;
  if ( v8 == 0xFFFFFFFFLL )
    v8 = -1;
  LOBYTE(a3) = v4 > 1;
  v9 = sub_18000F118(
         (unsigned __int16)word_1801194D0[*(unsigned __int8 *)(a2 + 1)],
         v8,
         a3,
         *(_QWORD *)(a2 + 64) != 0LL);
  v10 = v7 * v9 + ((8 * (((unsigned __int64)(unsigned int)(2 * v9) + 63) >> 6) + 63) & 0xFFFFFFF0);
  v11 = sub_18000F17C(v10 + 2 * ((unsigned int)(v10 + 4095) >> 12));
  if ( v11 <= 0xC )
    v11 = 12;
  v12 = 1 << v11;
  if ( (v6 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
  v13 = (_SLIST_HEADER *)&a1[2 * v11 - 14];
  if ( LOWORD(v13->Alignment) )
    v14 = RtlInterlockedPopEntrySList(v13);
  else
    v14 = 0LL;
  if ( v14
    || (v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(PVOID, _QWORD, _QWORD, _QWORD))((unsigned __int64)a1 ^ qword_18015BFA8 ^ (__int64)a1[1].Ptr))(
                              a1->Ptr,
                              v12,
                              0LL,
                              v6)) != 0LL )
  {
    v15 = sub_18000F0DC(v12, v7);
    if ( v16 >= v15
      || ((int (__fastcall *)(PVOID, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ qword_18015BFA8 ^ (__int64)a1[3].Ptr))(
           a1->Ptr,
           v14,
           v15) >= 0 )
    {
      sub_18000ECC4((char *)v14, v12, v7);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v14[2].Next));
      v17 = v14;
      v14 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    if ( v14 )
      ((void (__fastcall *)(PVOID, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ qword_18015BFA8 ^ (__int64)a1[2].Ptr))(
        a1->Ptr,
        v14,
        v6);
  }
  else
  {
    v17 = 0LL;
  }
  if ( (v6 & 1) == 0 )
    RtlReleaseSRWLockShared(a1 + 6);
  return v17;
}
