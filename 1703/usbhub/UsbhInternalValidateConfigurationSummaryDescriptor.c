/*
 * XREFs of UsbhInternalValidateConfigurationSummaryDescriptor @ 0x1C0053884
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00539C8 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 */

char __fastcall UsbhInternalValidateConfigurationSummaryDescriptor(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r10
  __int64 v5; // r11
  char v6; // r9
  unsigned __int8 v7; // cl

  v3 = a3;
  v5 = a1;
  v6 = 1;
  if ( *a3 < 0xBu )
  {
    Log(a1, 256, 1128481841, *a3, 0LL);
    v6 = 0;
  }
  if ( *v3 < v3[7] + 2 * ((unsigned __int64)v3[7] + 4) )
  {
    Log(v5, 256, 1128481842, *v3, 0LL);
    v6 = 0;
  }
  v7 = v3[5];
  if ( v7 >= *(_BYTE *)(*(_QWORD *)(a2 + 32) + 17LL) )
  {
    Log(v5, 256, 1128481843, v7, 0LL);
    return 0;
  }
  return v6;
}
