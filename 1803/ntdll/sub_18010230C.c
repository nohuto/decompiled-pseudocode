/*
 * XREFs of sub_18010230C @ 0x18010230C
 * Callers:
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 * Callees:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18010230C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180156650 > 5 )
    return sub_1800886A4(
             (__int64)&dword_180156650,
             (unsigned __int8 *)dword_180123CD5,
             a3,
             a4,
             2u,
             (PEVENT_DATA_DESCRIPTOR)v5);
  return result;
}
