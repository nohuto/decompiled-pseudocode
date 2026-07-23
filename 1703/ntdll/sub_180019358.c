/*
 * XREFs of sub_180019358 @ 0x180019358
 * Callers:
 *     Callback @ 0x180018970 (Callback.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 * Callees:
 *     <none>
 */

struct _TEB *sub_180019358()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = dword_18015B1E0;
  result = NtCurrentTeb();
  if ( dword_18015B1E0 < (unsigned int)dword_18015B248 )
    v0 = dword_18015B248;
  dword_18015B1E0 = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_18015B1E4;
  else
    ++dword_18015B1E8;
  return result;
}
