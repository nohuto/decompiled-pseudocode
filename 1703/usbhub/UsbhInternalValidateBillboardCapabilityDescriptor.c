/*
 * XREFs of UsbhInternalValidateBillboardCapabilityDescriptor @ 0x1C0053678
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00539C8 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 */

char __fastcall UsbhInternalValidateBillboardCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r10
  char v5; // si
  __int64 v6; // r9
  int v7; // r11d
  int v8; // r8d
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  char v12; // r10

  v3 = 0LL;
  v5 = 1;
  v6 = *a2;
  v7 = 256;
  if ( ((*a2 - 40) & 0xFB) != 0 )
  {
    if ( *a2 < 0x30u )
    {
      v8 = 1111704625;
LABEL_4:
      Log(a1, 256, v8, v6, 0LL);
      return 0;
    }
    if ( v6 != 4LL * (a2[4] - 1) + 48 )
    {
      v8 = 1111704626;
      goto LABEL_4;
    }
  }
  else
  {
    Log(a1, 256, 1111704631, v6, 0LL);
  }
  if ( a2[4] == (_BYTE)v3 )
  {
    Log(a1, v7, 1111704627, 0LL, v3);
    v5 = v3;
  }
  v10 = a2[4];
  if ( v10 > 0x80u )
  {
    Log(a1, v7, 1111704628, v10, v3);
    v5 = v3;
  }
  v11 = a2[5];
  if ( v11 > a2[4] )
  {
    Log(a1, v7, 1111704630, v11, v3);
    return v12;
  }
  return v5;
}
