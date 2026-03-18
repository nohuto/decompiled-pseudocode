/*
 * XREFs of __GSHandlerCheckCommon @ 0x14018C748
 * Callers:
 *     __GSHandlerCheck @ 0x14018C724 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_SEH @ 0x1401A7108 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall _GSHandlerCheckCommon(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl

  result = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE *)(*(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + result + 3);
  if ( (v3 & 0xF) != 0 )
    return v3 & 0xF0;
  return result;
}
