/*
 * XREFs of UsbDevice_UcxEvtUsbDeviceGetCharacteristic @ 0x1C0034E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbDevice_UcxEvtUsbDeviceGetCharacteristic(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3[1] != 1 )
    return 3221225659LL;
  a3[2] = 2;
  a3[3] = 4;
  return result;
}
