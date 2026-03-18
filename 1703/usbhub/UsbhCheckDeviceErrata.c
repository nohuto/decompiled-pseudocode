/*
 * XREFs of UsbhCheckDeviceErrata @ 0x1C001F7BC
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C001F8A8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhGetDeviceFlags @ 0x1C001E9D0 (UsbhGetDeviceFlags.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhApplyDeviceFix @ 0x1C0053444 (UsbhApplyDeviceFix.c)
 */

char *__fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  char *result; // rax
  __int64 v7; // r8
  int v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  v4 = PdoExt(a2);
  if ( ((*((_WORD *)v4 + 697) - 256) & 0xFFEF) == 0 )
    v4[356] &= ~0x200u;
  UsbhGetDeviceFlags((unsigned __int16 *)v4 + 696, &v9, 0);
  v5 = v9;
  result = usbfile_dq_c;
  if ( (v9 & 1) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 1, usbfile_dq_c, 2507, v8);
    v7 = 1LL;
  }
  else
  {
    if ( (v9 & 2) == 0 )
      goto LABEL_5;
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 2, usbfile_dq_c, 2514, v8);
    v7 = 2LL;
  }
  UsbhApplyDeviceFix(a1, a2, v7);
  result = usbfile_dq_c;
LABEL_5:
  if ( (v5 & 0x40) != 0 )
    v4[356] |= 0x800u;
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 3, usbfile_dq_c, 2532, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 3LL);
  }
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 10, usbfile_dq_c, 2543, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 10LL);
  }
  if ( (v5 & 0x10) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 5, usbfile_dq_c, 2554, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 5LL);
  }
  if ( (v5 & 0x20) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 7, usbfile_dq_c, 2565, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 7LL);
  }
  if ( (*(_QWORD *)&v5 & 0x200000LL) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 11, usbfile_dq_c, 2575, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 11LL);
  }
  if ( (v5 & 0x8000000) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 120, (_DWORD)v4 + 1392, 18, 0, 12, usbfile_dq_c, 2585, v8);
    return (char *)UsbhApplyDeviceFix(a1, a2, 12LL);
  }
  return result;
}
