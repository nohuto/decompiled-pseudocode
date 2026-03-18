/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x1406CEFBC
 * Callers:
 *     PpmRegisterPerfCap @ 0x14022D480 (PpmRegisterPerfCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
