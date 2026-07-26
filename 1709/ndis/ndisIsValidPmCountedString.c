/*
 * XREFs of ndisIsValidPmCountedString @ 0x1C00ADCEC
 * Callers:
 *     ndisIsValidWoLPattern @ 0x1C00ADC34 (ndisIsValidWoLPattern.c)
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00DF6E0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPmCountedString(_WORD *a1)
{
  _WORD *v1; // rax
  __int64 v2; // rcx
  signed int v3; // eax

  if ( *a1 > 0x80u || (*a1 & 1) != 0 )
    return 0;
  v1 = a1 + 1;
  if ( a1 == (_WORD *)-2LL )
  {
    v3 = -1073741811;
  }
  else
  {
    v2 = 65LL;
    do
    {
      if ( !*v1 )
        break;
      ++v1;
      --v2;
    }
    while ( v2 );
    v3 = v2 == 0 ? 0xC000000D : 0;
  }
  return v3 >= 0;
}
