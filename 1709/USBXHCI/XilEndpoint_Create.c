/*
 * XREFs of XilEndpoint_Create @ 0x1C0017594
 * Callers:
 *     Endpoint_Create @ 0x1C005AF24 (Endpoint_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017628 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C00178B0 (XilEndpoint_FreeResources.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // dl
  int SecureObject; // edi

  v1 = a1 + 1312;
  *(_QWORD *)(a1 + 1344) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)a1 + 441LL);
  *(_BYTE *)(a1 + 1336) = v3;
  if ( v3 )
  {
    SecureObject = XilEndpoint_CreateSecureObject(a1 + 1312);
    if ( SecureObject >= 0 )
    {
      *(_BYTE *)(v1 + 16) = *(_BYTE *)(v1 + 24);
      *(_QWORD *)(v1 + 8) = a1;
      return 0;
    }
    Debug_FreAssertMsg(
      (__int64)"XilEndpoint_CreateSecureObject failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
      297);
  }
  else
  {
    *(_QWORD *)v1 = a1;
    *(_BYTE *)(a1 + 1320) = 0;
    SecureObject = 0;
  }
  if ( SecureObject < 0 )
    XilEndpoint_FreeResources(v1);
  return (unsigned int)SecureObject;
}
