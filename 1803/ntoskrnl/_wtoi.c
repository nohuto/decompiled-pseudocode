/*
 * XREFs of _wtoi @ 0x140188BB0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1405FF918 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x140188BD0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
