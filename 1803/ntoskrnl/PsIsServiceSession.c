/*
 * XREFs of PsIsServiceSession @ 0x1405845C0
 * Callers:
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x14076D90C (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     PsGetSiloBySessionId @ 0x1405019A0 (PsGetSiloBySessionId.c)
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
