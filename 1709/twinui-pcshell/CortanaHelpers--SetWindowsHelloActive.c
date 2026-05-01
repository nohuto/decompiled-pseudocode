/*
 * XREFs of CortanaHelpers::SetWindowsHelloActive @ 0x1800D3EA4
 * Callers:
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1800D3F10 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 */

void CortanaHelpers::SetWindowsHelloActive()
{
  int v0; // eax
  unsigned __int64 v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v0 = _RegSetKeyValue(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"IsWindowsHelloActive",
         4u,
         (BYTE *)&v3,
         4u);
  v1 = (unsigned __int16)v0 | 0x80070000;
  if ( v0 <= 0 )
    v1 = (unsigned int)v0;
  if ( (v1 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
      (const char *)v1);
}
