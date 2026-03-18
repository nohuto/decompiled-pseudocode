/*
 * XREFs of UsbhGetAlternateUsbDescriptors @ 0x1C0043E08
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00228FC (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C0050F74 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00541BC (UsbhValidateBOSDescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C0055448 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00555EC (UsbhGetDeviceDescriptor.c)
 */

char __fastcall UsbhGetAlternateUsbDescriptors(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v9; // r9
  void *v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v12) = 0;
  v6 = PdoExt(a2);
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
    return 0;
  if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v6 + 348), v7, 0LL, &v12) )
  {
    v6[703] = 1073807365;
    return 0;
  }
  if ( (_BYTE)v12 )
    v6[353] |= 0x40u;
  LOBYTE(v9) = *(_BYTE *)(a3[3] + 6LL);
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 144), v6 + 348, v9);
  v10 = (void *)*((_QWORD *)v6 + 298);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 298) = 0LL;
  }
  if ( (int)UsbhGetDeviceInformation(a1, a2) < 0 )
    return 0;
  if ( *((_WORD *)v6 + 697) > 0x200u && (v6[356] & 0x20000) == 0 )
  {
    memset(a3, 0, 0x38uLL);
    v11 = (void *)*((_QWORD *)v6 + 299);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v6 + 299) = 0LL;
    }
    if ( (int)UsbhGetBosDescriptor(a1, a2, &v12) < 0 )
      return 1;
    if ( !(unsigned __int8)UsbhValidateBOSDescriptorSet(
                             *((_QWORD *)v6 + 147),
                             *((_QWORD *)v6 + 299),
                             (int)v6 + 1392,
                             v12,
                             a3) )
    {
      v6[703] = 1073807378;
      return 0;
    }
  }
  v6[704] |= 4u;
  return 1;
}
