/*
 * XREFs of GetKbdLangSwitch @ 0x1C01243F8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  int v2; // [rsp+48h] [rbp+10h]
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  FastGetProfileIntW(a1, 25LL, L"Hotkey");
  gbGraveKeyToggle = 0;
  if ( v2 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (DefaultLocaleId & 0x3FF) == 0x1E )
    gbGraveKeyToggle = 1;
  return 1LL;
}
