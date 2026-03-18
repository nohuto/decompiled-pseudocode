/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140706630
 * Callers:
 *     PpmRegisterPerfCap @ 0x1402408F0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
