/*
 * XREFs of sub_18005E47C @ 0x18005E47C
 * Callers:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18005E16C @ 0x18005E16C (sub_18005E16C.c)
 */

__int64 __fastcall sub_18005E47C(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 12;
    RtlAcquireSRWLockShared(a1 + 12);
    v6 = (_RTL_SRWLOCK *)sub_18005E16C((__int64)a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 14];
  }
  return sub_18005E4EC(v6);
}
