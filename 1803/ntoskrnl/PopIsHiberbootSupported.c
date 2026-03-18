/*
 * XREFs of PopIsHiberbootSupported @ 0x1405EF17C
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x14061019C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1406110A4 (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHiberbootSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
