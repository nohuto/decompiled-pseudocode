/*
 * XREFs of IsRegisterWindowMessageWPresent @ 0x18003F74C
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18006E83C (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18003F130 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterWindowMessageWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180092900 == 1 )
    return 1;
  if ( dword_180092900 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"@B", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_180092900 = 2 - (v1 != 0);
  return result;
}
