/*
 * XREFs of strchr @ 0x140189DB0
 * Callers:
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1407A35DC (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x1408A9EDC (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1408AAC84 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x1408B1B2C (CmpGetToken.c)
 *     PipSmBiosGetString @ 0x1408B4BA8 (PipSmBiosGetString.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
