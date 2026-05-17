/*
 * XREFs of sub_180085CF0 @ 0x180085CF0
 * Callers:
 *     sub_180085C54 @ 0x180085C54 (sub_180085C54.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     LdrGetDllFullName @ 0x18001F910 (LdrGetDllFullName.c)
 *     sub_180085DDC @ 0x180085DDC (sub_180085DDC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180107D2C @ 0x180107D2C (sub_180107D2C.c)
 *     sub_180107DF8 @ 0x180107DF8 (sub_180107DF8.c)
 */

__int64 __fastcall sub_180085CF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v5 = 0;
  if ( v3 < *((_QWORD *)&xmmword_18016F4E0 + 1)
    || v3 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
  {
    sub_18000EF10(v3, (__int64 *)&v11);
  }
  else
  {
    v11 = xmmword_18016F4E0;
    v12 = qword_18016F4F0;
  }
  v6 = *((_QWORD *)&v11 + 1);
  if ( !*((_QWORD *)&v11 + 1) )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
  {
    v5 = sub_180107D2C(*((_QWORD *)&v11 + 1), 0x3FFFLL, &v11, &v10);
    if ( v5 )
      return v5;
    return (unsigned int)sub_180107DF8(a1, v11, v10);
  }
  if ( *(__int16 *)(a2 + 98) < 0 )
  {
    *((_QWORD *)&v11 + 1) = &v13;
    WORD1(v11) = 260;
    DllFullName = LdrGetDllFullName(v6, (__int64)&v11);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)sub_180085DDC(a1, &v11, a2 + 32);
  }
  return v5;
}
