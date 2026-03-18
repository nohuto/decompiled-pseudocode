/*
 * XREFs of CmpTransSilentIgnore @ 0x1400F0F40
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
