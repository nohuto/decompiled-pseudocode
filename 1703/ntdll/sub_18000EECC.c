/*
 * XREFs of sub_18000EECC @ 0x18000EECC
 * Callers:
 *     sub_18000ECC4 @ 0x18000ECC4 (sub_18000ECC4.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000EECC(unsigned __int64 *a1)
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
