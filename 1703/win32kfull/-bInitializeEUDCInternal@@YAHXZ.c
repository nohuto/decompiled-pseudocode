/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00096C8
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C0009874 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C0009970 (bAddAllFlEntry.c)
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
  String.Buffer = word_1C0330370;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 292;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C032C128 = 0LL;
  dword_1C032C130 = 0;
  qword_1C032C138 = 0LL;
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
  off_1C03247F8 = &off_1C03247F0;
  off_1C03247F0 = &off_1C03247F0;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C032C964 = 3;
    bAddAllFlEntry(0LL);
    dword_1C032C964 = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
