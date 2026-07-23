/*
 * XREFs of sub_1800218EC @ 0x1800218EC
 * Callers:
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall sub_1800218EC(__int64 a1)
{
  signed __int64 v1; // rbx
  _RTL_SRWLOCK *v3; // rbp
  _RTL_SRWLOCK *v4; // rdi
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v1 )
      {
        v6 = 3LL;
        v7 = 0LL;
        goto LABEL_7;
      }
      if ( (v1 & 1) != 0 )
        break;
      v3 = (_RTL_SRWLOCK *)(v1 + 16);
      v4 = (_RTL_SRWLOCK *)v1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 16));
      v1 = *(_QWORD *)(a1 + 16);
      if ( v4 == (_RTL_SRWLOCK *)v1 )
        return v4;
      RtlReleaseSRWLockExclusive(v3);
    }
    v6 = v1 & 1 | ((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    v7 = v1;
LABEL_7:
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6, v7);
  }
  while ( v7 != v1 );
  return 0LL;
}
