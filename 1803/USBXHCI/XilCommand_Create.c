/*
 * XREFs of XilCommand_Create @ 0x1C0005A84
 * Callers:
 *     Command_Create @ 0x1C0052008 (Command_Create.c)
 * Callees:
 *     XilCommand_CreateSecureObject @ 0x1C0005AE4 (XilCommand_CreateSecureObject.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall XilCommand_Create(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int SecureObject; // ebx

  v2 = a1 + 136;
  *(_QWORD *)(v2 + 8) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL);
  *(_BYTE *)v2 = v3;
  if ( v3 )
  {
    SecureObject = XilCommand_CreateSecureObject();
    if ( SecureObject < 0 )
      Debug_FreAssertMsg(
        "XilCommand_CreateSecureObject failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        137LL);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = a1;
    return 0;
  }
  return (unsigned int)SecureObject;
}
