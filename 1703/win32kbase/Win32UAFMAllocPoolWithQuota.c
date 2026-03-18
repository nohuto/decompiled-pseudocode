/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1C00E7380
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C00E73D0 (Win32UAFMAllocPoolWithQuotaZInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (int)IsWin32UAFMAllocPoolWithQuotaImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPoolWithQuotaImpl(41LL, a1, a2, a3);
}
