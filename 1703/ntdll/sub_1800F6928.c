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

_QWORD *__fastcall sub_1800F6928(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // r9
  bool v6; // zf
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[1] = v16;
  v2 = 0;
  v16[0] = v16;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v3));
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
        v10 = v16[0];
        if ( *(_QWORD **)(v16[0] + 8LL) != v16 )
          __fastfail(3u);
        *v7 = v16[0];
        v7[1] = v16;
        *(_QWORD *)(v10 + 8) = v7;
        v16[0] = v7;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3E8 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = v16[0];
    result = v16;
    if ( (_QWORD *)v16[0] == v16 )
      break;
    v13 = *(_QWORD *)v16[0];
    v14 = *(_QWORD **)(v16[0] + 8LL);
    if ( *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) != v16[0] || *v14 != v16[0] )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *(_QWORD *)(v11 + 32);
    if ( v15 )
    {
      sub_180089E88(v15);
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    RtlFreeHeap(qword_18015C450, 0, v11);
  }
  return result;
}
