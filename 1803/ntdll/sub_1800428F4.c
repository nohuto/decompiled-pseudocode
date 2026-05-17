/*
 * XREFs of sub_1800428F4 @ 0x1800428F4
 * Callers:
 *     sub_180042660 @ 0x180042660 (sub_180042660.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 * Callees:
 *     <none>
 */

struct _TEB *sub_1800428F4()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = dword_18015C200;
  result = NtCurrentTeb();
  if ( dword_18015C200 < (unsigned int)dword_18015C268 )
    v0 = dword_18015C268;
  dword_18015C200 = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_18015C204;
  else
    ++dword_18015C208;
  return result;
}
