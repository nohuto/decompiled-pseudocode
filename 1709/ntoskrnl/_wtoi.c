/*
 * XREFs of _wtoi @ 0x14015EE60
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140545B38 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x14015EE80 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
