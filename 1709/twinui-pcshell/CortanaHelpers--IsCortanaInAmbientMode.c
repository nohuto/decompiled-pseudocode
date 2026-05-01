/*
 * XREFs of CortanaHelpers::IsCortanaInAmbientMode @ 0x1800D3DC4
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x1800DB5B4 (--$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z.c)
 */

char CortanaHelpers::IsCortanaInAmbientMode()
{
  int CortanaRegistry; // eax
  unsigned int v1; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CortanaRegistry = CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(L"CortanaInAmbientMode");
  v1 = CortanaRegistry;
  if ( CortanaRegistry < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
      (const char *)(unsigned int)CortanaRegistry);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
      (const char *)v1);
  }
  return 0;
}
