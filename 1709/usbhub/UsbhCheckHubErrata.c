/*
 * XREFs of UsbhCheckHubErrata @ 0x1C002067C
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     UsbhGetRegUsbHubFlags @ 0x1C0021E70 (UsbhGetRegUsbHubFlags.c)
 *     UsbhGetDeviceFlags @ 0x1C002251C (UsbhGetDeviceFlags.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhApplyHubFix @ 0x1C00537C8 (UsbhApplyHubFix.c)
 */

__int64 __fastcall UsbhCheckHubErrata(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v6; // [rsp+48h] [rbp-10h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1 + 2540;
  LOBYTE(a3) = *(_BYTE *)(a1 + 2560) & 1;
  UsbhGetDeviceFlags(a1 + 2540, &v7, a3);
  if ( (v7 & 0x80u) != 0LL )
  {
    LOBYTE(v6) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v3, 18, 0, 6, usbfile_dq_c, 2622, v6);
    UsbhApplyHubFix(a1, 6LL);
  }
  if ( (v7 & 0x100) != 0 )
  {
    LOBYTE(v6) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v3, 18, 0, 8, usbfile_dq_c, 2630, v6);
    UsbhApplyHubFix(a1, 8LL);
  }
  if ( (v7 & 0x200) != 0 )
  {
    LOBYTE(v6) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v3, 18, 0, 9, usbfile_dq_c, 2639, v6);
    UsbhApplyHubFix(a1, 9LL);
  }
  if ( (v7 & 0x400000000LL) != 0 )
  {
    LOBYTE(v6) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v3, 18, 0, 13, usbfile_dq_c, 2647, v6);
    UsbhApplyHubFix(a1, 13LL);
  }
  return UsbhGetRegUsbHubFlags(a1);
}
