/*
 * XREFs of sub_180104494 @ 0x180104494
 * Callers:
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180104494(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  void *v2; // rdi
  __int64 result; // rax

  v1 = *a1;
  v2 = (void *)a1[1];
  result = (__int64)memset(v2, 0, (*a1 + 7) >> 3);
  if ( (v1 & 0x3F) != 0 )
  {
    result = ~((1LL << (v1 & 0x3F)) - 1);
    *((_QWORD *)v2 + (v1 >> 6)) |= result;
  }
  return result;
}
