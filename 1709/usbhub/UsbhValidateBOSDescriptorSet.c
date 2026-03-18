/*
 * XREFs of UsbhValidateBOSDescriptorSet @ 0x1C00541BC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043E08 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhInternalValidateBOSDescriptor @ 0x1C0053804 (UsbhInternalValidateBOSDescriptor.c)
 *     UsbhInternalValidateCommonDescriptorHeader @ 0x1C0053A48 (UsbhInternalValidateCommonDescriptorHeader.c)
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0053BE4 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhValidateBOSDescriptorSet(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 v5; // r14
  char *v6; // rbx
  char v10; // cl
  unsigned __int8 *i; // rbx
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-19h]
  unsigned int v14; // [rsp+48h] [rbp-11h]
  char *v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  char v17; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+77h] BYREF

  v5 = a4;
  v6 = &v17;
  v12 = a2;
  v16 = a3;
  v14 = a4;
  v13 = a4 + a2;
  if ( a5 )
    v6 = a5;
  memset(v6, 0, 0x38uLL);
  v15 = v6;
  if ( (unsigned int)v5 < 5 )
    return 0;
  v10 = UsbhInternalValidateBOSDescriptor(a1, (unsigned __int8 *)a2, (__int64)&v12);
  if ( !v10 )
    return 0;
  if ( (_DWORD)v5 != *(unsigned __int16 *)(a2 + 2) )
  {
    Log(a1, 256, 1447186259, v5, *(unsigned __int16 *)(a2 + 2));
    v10 = 0;
  }
  for ( i = (unsigned __int8 *)(a2 + 5); (unsigned __int64)i < v13; i += v18 )
  {
    v10 = UsbhInternalValidateCommonDescriptorHeader(a1, i, &v12, &v18);
    if ( !v10 )
      return 0;
    if ( i[1] == 16 )
    {
      v10 = UsbhInternalValidateDeviceCapabilityDescriptor(a1, i, (__int64)&v12);
      if ( !v10 )
        return 0;
    }
  }
  return v10;
}
