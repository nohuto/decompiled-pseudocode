/*
 * XREFs of UsbhCheckHubErrata @ 0x1C001E938
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 * Callees:
 *     UsbhGetDeviceFlags @ 0x1C001E9D0 (UsbhGetDeviceFlags.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhApplyHubFix @ 0x1C00534F8 (UsbhApplyHubFix.c)
 */

void __fastcall UsbhCheckHubErrata(__int64 a1)
{
  int v1; // esi
  int v3; // [rsp+48h] [rbp-10h]
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1 + 2540;
  UsbhGetDeviceFlags(a1 + 2540, &v4, *(_BYTE *)(a1 + 2560) & 1);
  if ( (v4 & 0x80u) != 0LL )
  {
    LOBYTE(v3) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 6, usbfile_dq_c, 2617, v3);
    UsbhApplyHubFix(a1, 6LL);
  }
  if ( (v4 & 0x100) != 0 )
  {
    LOBYTE(v3) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 8, usbfile_dq_c, 2625, v3);
    UsbhApplyHubFix(a1, 8LL);
  }
  if ( (v4 & 0x200) != 0 )
  {
    LOBYTE(v3) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 9, usbfile_dq_c, 2634, v3);
    UsbhApplyHubFix(a1, 9LL);
  }
  if ( (v4 & 0x400000000LL) != 0 )
  {
    LOBYTE(v3) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 13, usbfile_dq_c, 2642, v3);
    UsbhApplyHubFix(a1, 13LL);
  }
  UsbhGetRegUsbHubFlags((unsigned __int16 *)a1);
}
