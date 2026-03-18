/*
 * XREFs of GetPenHoldTime @ 0x1C01E7430
 * Callers:
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01EA134 (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0116470 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C0324040 + 22);
  result = *((unsigned int *)off_1C0324040 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0324040 + 22);
  return result;
}
