/*
 * XREFs of sub_1800F6928 @ 0x1800F6928
 * Callers:
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089E88 @ 0x180089E88 (sub_180089E88.c)
 */

PVOID *__fastcall sub_1800F6928(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // r9
  bool v6; // zf
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  PVOID *result; // rax
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  _WORD *v15; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v3));
    v4 = *(_QWORD **)(qword_18015C438 + 16LL * v2);
    v5 = qword_18015C438 + 16LL * v2;
    while ( v4 != (_QWORD *)v5 )
    {
      v6 = v4[2] == a1;
      v7 = v4;
      v4 = (_QWORD *)*v4;
      if ( v6 )
      {
        v8 = *v7;
        v9 = (_QWORD *)v7[1];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = BaseAddress[0];
        if ( *((PVOID **)BaseAddress[0] + 1) != BaseAddress )
          __fastfail(3u);
        *v7 = BaseAddress[0];
        v7[1] = BaseAddress;
        v10[1] = v7;
        BaseAddress[0] = v7;
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      break;
    v13 = *(_QWORD **)BaseAddress[0];
    v14 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] || *v14 != BaseAddress[0] )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    v15 = (_WORD *)v11[4];
    if ( v15 )
    {
      sub_180089E88(v15);
      v11[4] = 0LL;
    }
    RtlFreeHeap(qword_18015C450, 0, v11);
  }
  return result;
}
