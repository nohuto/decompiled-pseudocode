/*
 * XREFs of GetPenHoldTime @ 0x1C01F3430
 * Callers:
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01F60CC (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011F930 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C0320040 + 22);
  result = *((unsigned int *)off_1C0320040 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0320040 + 22);
  return result;
}
