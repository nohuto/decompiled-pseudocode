/*
 * XREFs of UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00539C8
 * Callers:
 *     UsbhValidateBOSDescriptorSet @ 0x1C0053FC8 (UsbhValidateBOSDescriptorSet.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhInternalValidateBillboardCapabilityDescriptor @ 0x1C0053678 (UsbhInternalValidateBillboardCapabilityDescriptor.c)
 *     UsbhInternalValidateConfigurationSummaryDescriptor @ 0x1C0053884 (UsbhInternalValidateConfigurationSummaryDescriptor.c)
 *     UsbhInternalValidateContainerIDCapabilityDescriptor @ 0x1C005392C (UsbhInternalValidateContainerIDCapabilityDescriptor.c)
 *     UsbhInternalValidatePlatformCapabilityDescriptor @ 0x1C0053BD0 (UsbhInternalValidatePlatformCapabilityDescriptor.c)
 *     UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C0053E34 (UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     UsbhInternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0053F68 (UsbhInternalValidateUSB20DeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhInternalValidateDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(a4) = 1;
  if ( *a2 < 3u )
  {
    Log(a1, 256, 1447183409, *a2, 0LL);
    return 0;
  }
  switch ( a2[2] )
  {
    case 2u:
      LOBYTE(a4) = UsbhInternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, a4);
      if ( !(_BYTE)a4 )
        return 0;
      v15 = *(_QWORD **)(a3 + 24);
      if ( !*v15 )
      {
        *v15 = a2;
        return a4;
      }
      v9 = 1447183410;
      goto LABEL_38;
    case 3u:
      LOBYTE(a4) = UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, a3, a4);
      if ( !(_BYTE)a4 )
        return 0;
      v14 = *(_QWORD *)(a3 + 24);
      if ( !*(_QWORD *)(v14 + 8) )
      {
        *(_QWORD *)(v14 + 8) = a2;
        return a4;
      }
      v9 = 1447183411;
      goto LABEL_38;
    case 4u:
      LOBYTE(a4) = UsbhInternalValidateContainerIDCapabilityDescriptor(a1, a2);
      if ( !(_BYTE)a4 )
        return 0;
      v13 = *(_QWORD *)(a3 + 24);
      if ( !*(_QWORD *)(v13 + 16) )
      {
        *(_QWORD *)(v13 + 16) = a2;
        return a4;
      }
      v9 = 1447183412;
      goto LABEL_38;
    case 5u:
      v16 = 0LL;
      LOBYTE(a4) = UsbhInternalValidatePlatformCapabilityDescriptor(a1, a2, &v16, a4);
      if ( !(_BYTE)a4 )
        return 0;
      if ( v16 )
      {
        v10 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v10 + 24) )
          Log(a1, 256, 1447183414, 0LL, 0LL);
        else
          *(_QWORD *)(v10 + 24) = v16;
      }
      v11 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
      if ( v11 )
        return a4;
      v12 = *(_QWORD *)(a3 + 24);
      if ( !*(_QWORD *)(v12 + 32) )
      {
        *(_QWORD *)(v12 + 32) = a2;
        return a4;
      }
      v9 = 1447183415;
LABEL_38:
      Log(a1, 256, v9, 0LL, 0LL);
      return a4;
    case 0xDu:
      LOBYTE(a4) = UsbhInternalValidateBillboardCapabilityDescriptor(a1, a2);
      if ( !(_BYTE)a4 )
        return 0;
      v8 = *(_QWORD *)(a3 + 24);
      if ( !*(_QWORD *)(v8 + 40) )
      {
        *(_QWORD *)(v8 + 40) = a2;
        return a4;
      }
      v9 = 1447183416;
      goto LABEL_38;
    case 0x10u:
      LOBYTE(a4) = UsbhInternalValidateConfigurationSummaryDescriptor(a1, a3, a2);
      if ( !(_BYTE)a4 )
        return 0;
      *(_BYTE *)(*(_QWORD *)(a3 + 24) + 48LL) = 1;
      break;
  }
  return a4;
}
