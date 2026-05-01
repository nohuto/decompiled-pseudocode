/*
 * XREFs of ?put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180037B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IReference@H@Foundation@5@IAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180037804 (-_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_MaxCpuCount(
        __int64 a1,
        __int64 a2)
{
  DWORD ActiveProcessorCount; // eax
  signed int LastError; // eax
  unsigned int v6; // ebx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( (v6 & 0x80000000) != 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)v6);
    return v6;
  }
  v8 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
         a1,
         a2,
         ActiveProcessorCount - 1,
         (__int64 *)(a1 + 144));
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x205,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v8);
    return v6;
  }
  return 0LL;
}
