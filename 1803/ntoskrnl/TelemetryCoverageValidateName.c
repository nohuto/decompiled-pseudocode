/*
 * XREFs of TelemetryCoverageValidateName @ 0x1400C3158
 * Callers:
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageValidateName(_BYTE *a1)
{
  unsigned int v1; // edx
  _BYTE *v2; // r11
  int v3; // r8d
  unsigned int v4; // r10d
  char v5; // r9

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v5 = *a1;
    if ( (unsigned __int8)(*a1 - 97) <= 0x19u || (unsigned __int8)(v5 - 65) <= 0x19u || (unsigned __int8)(v5 - 48) <= 9u )
    {
      ++v3;
      goto LABEL_5;
    }
    if ( v5 != 95 )
      break;
    if ( !v3 )
      return 0LL;
    ++v4;
    v3 = 0;
LABEL_5:
    ++a1;
  }
  if ( !v5 && v3 && v4 >= 3 )
  {
    LOBYTE(v1) = a1 - v2 < 64;
    return v1;
  }
  return 0LL;
}
