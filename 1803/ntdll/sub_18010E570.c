/*
 * XREFs of sub_18010E570 @ 0x18010E570
 * Callers:
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x18009ABA0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 */

__int64 __fastcall sub_18010E570(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx

  if ( a3 < 8 )
    return 3221225485LL;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v4 = ZwDeviceIoControlFile();
    ZwClose();
    return v4;
  }
  return result;
}
