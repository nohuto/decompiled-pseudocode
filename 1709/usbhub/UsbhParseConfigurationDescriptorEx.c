/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x1C003F844
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     UsbhConfigureUsbHub @ 0x1C0023AC0 (UsbhConfigureUsbHub.c)
 * Callees:
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

unsigned __int64 __fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // al
  unsigned __int8 *v17; // rdx
  int v19; // [rsp+48h] [rbp-20h]

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  while ( 1 )
  {
    v13 = *(unsigned __int16 *)(a2 + 2);
    v14 = 0LL;
    v15 = v13 + a2;
    if ( (unsigned __int64)a3 < v13 + a2 )
      break;
LABEL_11:
    if ( v14 )
    {
      v8 = v14;
      if ( a4 != -1 && (v9 < v14 || (__int64)(v9 - v14) > 0xFFFF || v9 - v14 < 3 || *(unsigned __int8 *)(v14 + 2) != a4) )
        v8 = 0LL;
      if ( a6 != -1 && (v9 < v14 || (__int64)(v9 - v14) > 0xFFFF || v9 - v14 < 6 || *(unsigned __int8 *)(v14 + 5) != a6) )
        v8 = 0LL;
      if ( a7 != -1 && (v9 < v14 || (__int64)(v9 - v14) > 0xFFFF || v9 - v14 < 7 || *(unsigned __int8 *)(v14 + 6) != a7) )
        v8 = 0LL;
      if ( a8 != -1 && (v9 < v14 || (__int64)(v9 - v14) > 0xFFFF || v9 - v14 < 8 || *(unsigned __int8 *)(v14 + 7) != a8) )
        v8 = 0LL;
      a3 = (unsigned __int8 *)(v14 + *(unsigned __int8 *)v14);
      if ( !v8 && (-(__int64)(*(_BYTE *)v14 != 0) & v14) != 0 )
        continue;
    }
    return v8;
  }
  while ( v15 - (unsigned __int64)a3 >= 2 )
  {
    if ( a3[1] == 4 )
    {
      v14 = (unsigned __int64)a3;
      goto LABEL_11;
    }
    v16 = *a3;
    if ( !*a3 )
    {
      LOBYTE(v19) = 0;
      UsbhException(a1, 0, 83, a2, v13, -1, -1, usbfile_usbd_c, 105, v19);
      goto LABEL_11;
    }
    v17 = &a3[v16];
    if ( a3 <= v17 )
    {
      a3 += v16;
      if ( (unsigned __int64)v17 < v15 )
        continue;
    }
    goto LABEL_11;
  }
  return v8;
}
