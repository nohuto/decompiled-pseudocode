/*
 * XREFs of DwmAsyncTextChange @ 0x1C008B524
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     DefSetText @ 0x1C0096934 (DefSetText.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncTextChange(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD v6[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, 0x34uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741833;
    *(_QWORD *)&v6[11] = a2;
    EtwUpdateEvent(a2, 1073741833LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
