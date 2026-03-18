/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00C1410
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00BF6A8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C15BC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // ebx
  unsigned __int16 v1; // ax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+60h] [rbp+18h] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp+20h] BYREF
  int v6; // [rsp+70h] [rbp+28h] BYREF
  unsigned __int16 v7; // [rsp+78h] [rbp+30h] BYREF

  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  v0 = 0;
  *(_DWORD *)&String.Length = 1310720;
  String.Buffer = &word_1C032B830;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 292;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C03273C8 = 0LL;
  dword_1C03273D0 = 0;
  qword_1C03273D8 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    ulFontLinkControl = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v7;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
    v1 = v7;
  else
    v1 = 12539;
  EudcDefaultChar = v1;
  v6 = 0;
  SharedQueryTable.Name = L"AllowSCPUAFontFallback";
  SharedQueryTable.EntryContext = &v6;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v6 != 0;
    gbAllowSCPUAFontFallback = v0;
  }
  off_1C03207F8 = &off_1C03207F0;
  off_1C03207F0 = &off_1C03207F0;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C0327C04 = 3;
    bAddAllFlEntry(0LL);
    dword_1C0327C04 = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
