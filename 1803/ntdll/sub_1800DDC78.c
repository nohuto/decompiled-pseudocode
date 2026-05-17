/*
 * XREFs of sub_1800DDC78 @ 0x1800DDC78
 * Callers:
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall sub_1800DDC78(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // edi
  int v8; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-60h]
  int v10; // [rsp+40h] [rbp-58h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+68h] [rbp-30h]

  v8 = 3145774;
  v9 = L"LdrResGetRCConfig Enter";
  v10 = 3014700;
  v11 = L"LdrResGetRCConfig Exit";
  v4 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v5 = 2147353477LL;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800DBCC0((unsigned __int16 *)&v8);
  }
  if ( a2 && (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = ZwQueryInformationFile();
    v7 = result;
    if ( (int)result < 0 )
      return result;
    *a2 = v12;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800DBCC0((unsigned __int16 *)&v10);
  }
  return v7;
}
