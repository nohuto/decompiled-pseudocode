/*
 * XREFs of sub_18005E47C @ 0x18005E47C
 * Callers:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18005E16C @ 0x18005E16C (sub_18005E16C.c)
 */

__int64 __fastcall sub_18005E47C(__int64 a1, char *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v9; // rdi
  volatile signed __int64 *v11; // rbx

  if ( *a4 == -1 )
  {
    v11 = (volatile signed __int64 *)(a1 + 96);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), a2, a3, (__int64)a4);
    v9 = sub_18005E16C(a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v11);
  }
  else
  {
    v9 = 48LL * (unsigned int)*a4 + a1 + 112;
  }
  return sub_18005E4EC(v9, a2, a3, a5);
}
