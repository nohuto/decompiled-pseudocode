/*
 * XREFs of PfpOpenHandleInitialize @ 0x1406F279C
 * Callers:
 *     PfpReadSupportInitialize @ 0x14012B044 (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] |= 0x200000000uLL;
  return result;
}
