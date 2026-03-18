/*
 * XREFs of FsRtlIsMobileOS @ 0x14059E9A0
 * Callers:
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

bool FsRtlIsMobileOS()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  return (unsigned int)TmCurrentTransaction(&v1) == -1073741637;
}
