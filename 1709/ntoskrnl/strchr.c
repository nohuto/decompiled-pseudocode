/*
 * XREFs of strchr @ 0x14015FC30
 * Callers:
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x14074151C (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140833CB0 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140834A64 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x14083DD14 (CmpGetToken.c)
 *     PipSmBiosGetString @ 0x140847E20 (PipSmBiosGetString.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char *result; // rax

  result = 0LL;
  while ( *Str && *Str != (_BYTE)Val )
    ++Str;
  if ( *Str == (_BYTE)Val )
    return (char *)Str;
  return result;
}
