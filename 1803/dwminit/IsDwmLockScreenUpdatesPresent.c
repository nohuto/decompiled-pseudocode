/*
 * XREFs of IsDwmLockScreenUpdatesPresent @ 0x180007EB0
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800085F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmLockScreenUpdatesPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000E6EC == 1 )
    return 1;
  if ( dword_18000E6EC == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000E6EC = 2 - (v1 != 0);
  return result;
}
