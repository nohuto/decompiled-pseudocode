/*
 * XREFs of strchr @ 0x14016B290
 * Callers:
 *     MiSnapThunk @ 0x1404F93D8 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x140707930 (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140805944 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1408066F4 (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x14080FF34 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x140816A74 (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  while ( *Str )
  {
    if ( *Str == (_BYTE)Val )
      return (char *)Str;
    ++Str;
  }
  if ( !(_BYTE)Val )
    return (char *)Str;
  return 0LL;
}
