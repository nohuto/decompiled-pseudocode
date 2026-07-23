/*
 * XREFs of sub_1800F86F8 @ 0x1800F86F8
 * Callers:
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 * Callees:
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180030E7C @ 0x180030E7C (sub_180030E7C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F8548 @ 0x1800F8548 (sub_1800F8548.c)
 *     sub_1800F965C @ 0x1800F965C (sub_1800F965C.c)
 *     sub_1800FAA50 @ 0x1800FAA50 (sub_1800FAA50.c)
 *     sub_1800FAB18 @ 0x1800FAB18 (sub_1800FAB18.c)
 *     sub_1800FAD5C @ 0x1800FAD5C (sub_1800FAD5C.c)
 */

__int64 __fastcall sub_1800F86F8(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = sub_1800FAA50(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = sub_1800FAB18(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = sub_1800FAD5C(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = sub_180030CC8((__int64)a1, a3);
    else
      result = sub_180030E7C(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      sub_1800F8548((__int64)v11, a2);
      return sub_1800F965C(a1 + 3, v11, a6);
    }
  }
  return result;
}
