/*
 * XREFs of PopSetMemoryOverwriteRequestAction @ 0x140485C8C
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 PopSetMemoryOverwriteRequestAction()
{
  __int64 result; // rax
  _BYTE v1[4]; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+34h] [rbp-2Ch] BYREF
  int v3; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v4[4]; // [rsp+40h] [rbp-20h] BYREF

  v4[0] = -502711874;
  v4[1] = 1102983892;
  v4[2] = 2139705505;
  v4[3] = 697881733;
  v1[0] = -1;
  v2 = 1;
  result = HalGetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", v4, v1, &v2, &v3);
  if ( (int)result >= 0 && v2 == 1 )
  {
    v1[0] &= 0xEEu;
    return HalSetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", v4, v1, 1LL, v3);
  }
  return result;
}
