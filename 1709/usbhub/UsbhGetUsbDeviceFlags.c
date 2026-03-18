/*
 * XREFs of UsbhGetUsbDeviceFlags @ 0x1C00227D0
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhCheck4GlobalErrata @ 0x1C001E014 (UsbhCheck4GlobalErrata.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0021180 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhCheckDeviceErrata @ 0x1C0022388 (UsbhCheckDeviceErrata.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0022884 (UsbhGetRegUsbClassFlags.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00228FC (UsbhValidateDeviceDescriptor.c)
 */

__int64 __fastcall UsbhGetUsbDeviceFlags(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  PVOID RegUsbDeviceFlags; // rax
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  v4 = PdoExt(a2);
  v4[356] = 768;
  if ( (unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 1392, v5, 0, (__int64)&v10) )
  {
    if ( v10 )
      v4[353] |= 0x40u;
    UsbhGetRegUsbClassFlags(v6, a2);
    RegUsbDeviceFlags = UsbhGetRegUsbDeviceFlags(v7, a2);
    *((_QWORD *)v4 + 142) = RegUsbDeviceFlags;
    if ( RegUsbDeviceFlags )
    {
      UsbhCheckDeviceErrata(a1, a2);
      UsbhCheck4GlobalErrata(a1, a2);
      return 0LL;
    }
    else
    {
      v4[703] = 1073807366;
      return 3221225626LL;
    }
  }
  else
  {
    v4[703] = 1073807365;
    return 3221225485LL;
  }
}
