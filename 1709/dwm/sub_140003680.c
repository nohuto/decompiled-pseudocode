/*
 * XREFs of sub_140003680 @ 0x140003680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_140003680()
{
  __int64 result; // rax

  dword_14000F2B4 = newmode;
  result = __wgetmainargs(&unk_14000F298, &unk_14000F2A0, &unk_14000F2A8, (unsigned int)dowildcard, &dword_14000F2B4);
  dword_14000F29C = result;
  return result;
}
