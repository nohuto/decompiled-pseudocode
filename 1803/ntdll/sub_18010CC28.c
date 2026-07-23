/*
 * XREFs of sub_18010CC28 @ 0x18010CC28
 * Callers:
 *     sub_18010CBC8 @ 0x18010CBC8 (sub_18010CBC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009ABA0 (ZwDeviceIoControlFile.c)
 */

NTSTATUS __fastcall sub_18010CC28(void *a1, int *a2)
{
  NTSTATUS result; // eax
  int v4; // eax
  _IO_STATUS_BLOCK v5; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v6[4]; // [rsp+60h] [rbp-28h] BYREF

  result = ZwDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v5, 0x22096Cu, 0LL, 0, v6, 0xCu);
  if ( result >= 0 )
  {
    v4 = 50;
    if ( v6[0] == 1 )
      v4 = 100;
    *a2 = v4;
    return 0;
  }
  if ( (unsigned int)(result + 0x3FFFFFFF) <= 1 || result == -1073741808 )
  {
    *a2 = 100;
    return 0;
  }
  return result;
}
