/*
 * XREFs of PsIsServiceSession @ 0x14045DFB0
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopInputDisabled @ 0x1406D45C8 (PopInputDisabled.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsGetSiloBySessionId @ 0x1404C7990 (PsGetSiloBySessionId.c)
 */

char __fastcall PsIsServiceSession(__int64 a1)
{
  int v1; // ebx
  bool v2; // bl
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( !(_DWORD)a1 )
    return 1;
  if ( (int)PsGetSiloBySessionId(a1, &Object) < 0 )
    return 0;
  v2 = (unsigned int)PsGetServerSiloServiceSessionId((__int64)Object) == v1;
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
