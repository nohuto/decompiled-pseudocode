/*
 * XREFs of PfpReadSupportInitialize @ 0x14012B044
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140442F2C (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1406F27CC (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PfpOpenHandleInitialize @ 0x1406F279C (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
