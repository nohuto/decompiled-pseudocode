/*
 * XREFs of ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01B942C
 * Callers:
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01B91C8 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetKbdExId@@YAJPEAXPEAU_KEYBOARD_ID_EX@@@Z @ 0x1C01B90E8 (-GetKbdExId@@YAJPEAXPEAU_KEYBOARD_ID_EX@@@Z.c)
 */

__int64 __fastcall QueryDeviceInfo(struct DEVICEINFO *a1)
{
  ULONG *v2; // r9
  NTSTATUS v3; // eax
  bool v4; // zf
  unsigned int v5; // edi
  _KEYBOARD_ID_EX v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = (ULONG *)&aDeviceTemplate[70 * *((unsigned __int8 *)a1 + 48)];
  v3 = ZwDeviceIoControlFile(
         *((HANDLE *)a1 + 28),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)a1 + 16,
         v2[12],
         0LL,
         0,
         (char *)a1 + v2[13],
         v2[14]);
  v4 = *((_BYTE *)a1 + 48) == 1;
  v5 = v3;
  *((_DWORD *)a1 + 73) = v3;
  if ( v4 )
  {
    if ( (int)GetKbdExId(*((HANDLE *)a1 + 28), &v7) < 0 )
    {
      *((_DWORD *)a1 + 121) = *((unsigned __int8 *)a1 + 456);
      *((_DWORD *)a1 + 122) = *((unsigned __int8 *)a1 + 457);
    }
    else
    {
      *(_KEYBOARD_ID_EX *)((char *)a1 + 484) = v7;
    }
  }
  *((_DWORD *)a1 + 50) &= ~0x40u;
  return v5;
}
