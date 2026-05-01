/*
 * XREFs of ?v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180110B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x180110EFC (--$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerIntero.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111CCC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 */

int __fastcall LegacyViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  int result; // eax
  HWND v5; // rcx
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 136), 0LL);
  ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
    &StringRawBuffer,
    a1 + 132,
    &v7);
  result = LegacyViewWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(a1 + 520, a2);
  if ( !a2 )
  {
    v5 = *(HWND *)(a1 + 240);
    if ( v5 )
      return PostMessageW(v5, 0x10u, 0LL, 0LL);
  }
  return result;
}
