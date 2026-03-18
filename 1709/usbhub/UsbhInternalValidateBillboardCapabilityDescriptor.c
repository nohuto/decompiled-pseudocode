/*
 * XREFs of UsbhInternalValidateBillboardCapabilityDescriptor @ 0x1C0053948
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0053BE4 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 */

char __fastcall UsbhInternalValidateBillboardCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r10
  unsigned __int8 v4; // dl
  char v6; // si
  int v7; // r11d
  int v8; // r8d
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  char v12; // r10

  v3 = 0LL;
  v4 = *a2;
  v6 = 1;
  v7 = 256;
  if ( ((v4 - 40) & 0xFB) != 0 )
  {
    if ( v4 < 0x30u )
    {
      v8 = 1111704625;
LABEL_4:
      Log(a1, 256, v8, v4, 0LL);
      return 0;
    }
    if ( v4 != 4LL * a2[4] + 44 )
    {
      v8 = 1111704626;
      goto LABEL_4;
    }
  }
  else
  {
    Log(a1, 256, 1111704631, v4, 0LL);
  }
  if ( a2[4] == (_BYTE)v3 )
  {
    Log(a1, v7, 1111704627, 0LL, v3);
    v6 = v3;
  }
  v10 = a2[4];
  if ( v10 > 0x80u )
  {
    Log(a1, v7, 1111704628, v10, v3);
    v6 = v3;
  }
  v11 = a2[5];
  if ( v11 > a2[4] )
  {
    Log(a1, v7, 1111704630, v11, v3);
    return v12;
  }
  return v6;
}
