/*
 * XREFs of XilUsbDevice_Create @ 0x1C0033180
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C005F170 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     XilUsbDevice_CreateSecureObject @ 0x1C00331F8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00333B0 (XilUsbDevice_FreeResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C0041320 (XilCoreUsbDevice_Create.c)
 */

__int64 __fastcall XilUsbDevice_Create(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  char v3; // dl
  __int64 v4; // rdx
  int SecureObject; // edi
  __int64 v6; // r8

  v1 = a1 + 560;
  v2 = a1;
  *(_QWORD *)(a1 + 616) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL);
  *(_BYTE *)(a1 + 608) = v3;
  if ( v3 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 560);
    if ( SecureObject < 0 )
    {
LABEL_6:
      XilUsbDevice_FreeResources(v1);
      return (unsigned int)SecureObject;
    }
    LOBYTE(v4) = *(_BYTE *)(v1 + 48);
    v6 = v1 + 8;
    a1 = v2;
  }
  else
  {
    v6 = a1 + 560;
    v4 = 0LL;
  }
  SecureObject = XilCoreUsbDevice_Create(a1, v4, v6);
  if ( SecureObject < 0 )
    goto LABEL_6;
  return (unsigned int)SecureObject;
}
