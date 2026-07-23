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

void __fastcall sub_180104E98(__int64 a1, unsigned int a2)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rbp
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rsi
  int v9; // [rsp+38h] [rbp+10h]

  v3 = a2 & 1;
  v9 = v3;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  sub_180104E2C(a1, (_RTL_SRWLOCK **)(a1 + 24), a2);
  sub_180104E2C(v5, (_RTL_SRWLOCK **)(a1 + 40), a2);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 2);
    v7 = (_RTL_SRWLOCK *)(a1 + 80);
    if ( v3 )
    {
      if ( (a2 & 2) != 0 )
        v7->Ptr = (PVOID)1;
      RtlReleaseSRWLockExclusive(v7);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v7);
    }
    if ( (_DWORD)v6 )
    {
      v8 = 0LL;
      do
      {
        sub_180104E98(*(_QWORD *)(v8 + *(_QWORD *)(a1 + 96)), a2);
        v8 += 8LL;
        --v6;
      }
      while ( v6 );
      v3 = v9;
    }
  }
  if ( v3 )
  {
    if ( (a2 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  }
}
