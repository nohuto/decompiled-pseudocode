/*
 * XREFs of PopIsHiberbootSupported @ 0x14057A1BC
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
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
