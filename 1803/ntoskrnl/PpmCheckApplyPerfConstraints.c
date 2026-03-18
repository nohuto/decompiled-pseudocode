/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14076A55C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140277F50 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14014CB34 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
