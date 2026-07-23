/*
 * XREFs of sub_1800F6B98 @ 0x1800F6B98
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800F6720 @ 0x1800F6720 (sub_1800F6720.c)
 * Callees:
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F67C0 @ 0x1800F67C0 (sub_1800F67C0.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 */

__int64 __fastcall sub_1800F6B98(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( qword_18015AA50 )
    return 3221225994LL;
  v4 = sub_1800F6800(a1, a2, a3, &v5);
  if ( v4 >= 0 && _InterlockedCompareExchange64(&qword_18015AA50, (signed __int64)v5, 0LL) )
  {
    sub_1800F67C0(v5);
    return 3221225994LL;
  }
  if ( v4 >= 0 && dword_18015CFB8 == 3 )
  {
    v6[0] = 1;
    v6[1] = 0x8000000;
    v6[2] = 0x8000000;
    sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1800F6C40, (__int64)v6, 0);
  }
  return (unsigned int)v4;
}
