/*
 * XREFs of PsIsServiceSession @ 0x1405EC7EC
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x140709D18 (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x140528750 (PsGetSiloBySessionId.c)
 */

bool __fastcall PsIsServiceSession(int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &v3) < 0 )
    return 0;
  return (unsigned int)PsGetServerSiloServiceSessionId(v3) == a1;
}
