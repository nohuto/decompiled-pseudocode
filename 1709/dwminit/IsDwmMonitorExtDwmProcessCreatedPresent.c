/*
 * XREFs of IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008B5C
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AC0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x1800033A0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800096F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmMonitorExtDwmProcessCreatedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000F6A8 == 1 )
    return 1;
  if ( dword_18000F6A8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"JL", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000F6A8 = 2 - (v1 != 0);
  return result;
}
