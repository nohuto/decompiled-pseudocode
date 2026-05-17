/*
 * XREFs of sub_180104E98 @ 0x180104E98
 * Callers:
 *     sub_180104DE4 @ 0x180104DE4 (sub_180104DE4.c)
 *     sub_180104E98 @ 0x180104E98 (sub_180104E98.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180104E2C @ 0x180104E2C (sub_180104E2C.c)
 *     sub_180104E98 @ 0x180104E98 (sub_180104E98.c)
 */

__int64 __fastcall sub_180104E98(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rsi
  int v16; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = a2 & 1;
  v16 = v5;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  sub_180104E2C(a1, (_QWORD *)(a1 + 24), (unsigned __int64 *)v4, a4);
  result = sub_180104E2C(v7, (_QWORD *)(a1 + 40), (unsigned __int64 *)v4, v8);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v13 = *(unsigned __int8 *)(a1 + 2);
    v14 = (volatile signed __int64 *)(a1 + 80);
    if ( v5 )
    {
      if ( (v4 & 2) != 0 )
        *v14 = 1LL;
      result = RtlReleaseSRWLockExclusive(v14);
    }
    else
    {
      result = RtlAcquireSRWLockExclusive((unsigned __int64)v14, v10, v11, v12);
    }
    if ( (_DWORD)v13 )
    {
      v15 = 0LL;
      do
      {
        result = sub_180104E98(*(_QWORD *)(v15 + *(_QWORD *)(a1 + 96)), v4);
        v15 += 8LL;
        --v13;
      }
      while ( v13 );
      v5 = v16;
    }
  }
  if ( v5 )
  {
    if ( (v4 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  }
  return result;
}
