/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x1405BFAF0
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
