/*
 * XREFs of PfpOpenHandleInitialize @ 0x1406C3B10
 * Callers:
 *     PfpReadSupportInitialize @ 0x14010C11C (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] |= 0x200000000uLL;
  return result;
}
