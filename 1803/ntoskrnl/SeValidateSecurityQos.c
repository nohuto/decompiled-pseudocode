/*
 * XREFs of SeValidateSecurityQos @ 0x1404DD2BC
 * Callers:
 *     AlpcpValidateAndSetPortAttributes @ 0x1404DCB6C (AlpcpValidateAndSetPortAttributes.c)
 *     SeCaptureSecurityQos @ 0x1404DD1DC (SeCaptureSecurityQos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeValidateSecurityQos(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 2u )
    return 3221225485LL;
  else
    return *(_DWORD *)(a1 + 4) > 3u ? 0xC00000A5 : 0;
}
