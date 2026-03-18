/*
 * XREFs of PfpReadSupportInitialize @ 0x14004658C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x14075B918 (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfpOpenHandleInitialize @ 0x14075B8E8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
