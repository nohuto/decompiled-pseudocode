/*
 * XREFs of PfpOpenHandleInitialize @ 0x14075B8E8
 * Callers:
 *     PfpReadSupportInitialize @ 0x14004658C (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] = 0x200000000LL;
  return result;
}
