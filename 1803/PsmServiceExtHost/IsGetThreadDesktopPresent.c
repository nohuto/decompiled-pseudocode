/*
 * XREFs of IsGetThreadDesktopPresent @ 0x18003F79C
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18006E4D0 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18003F130 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetThreadDesktopPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180092924 == 1 )
    return 1;
  if ( dword_180092924 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_180092924 = 2 - (v1 != 0);
  return result;
}
