/*
 * XREFs of BusApiBuildTerminalFunctionUnit @ 0x1C001EB50
 * Callers:
 *     USBParseTerminalUnit @ 0x1C00225D0 (USBParseTerminalUnit.c)
 *     USBParseMIDIInJack @ 0x1C00231A0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0023290 (USBParseMIDIOutJack.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001EA24 (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildTerminalFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int *a7,
        const WCHAR *a8,
        __int64 a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // r9d
  __int64 v13; // r8
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v12 = BusApiBuildFunctionUnit(a1, a2, a3, a4, a5, a6, a7, a8, 0, v15);
  if ( v12 >= 0 )
  {
    v13 = v15[0];
    if ( v15[0] )
    {
      *(_DWORD *)(v15[0] + 68LL) = a10;
      *(_DWORD *)(v13 + 76) = a11;
      *(_DWORD *)(v13 + 64) = a12;
      *(_BYTE *)(v13 + 72) = a10 == 257;
      *(_QWORD *)(v13 + 80) = a9;
    }
  }
  return (unsigned int)v12;
}
