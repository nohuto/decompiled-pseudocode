/*
 * XREFs of CortanaHelpers::SetIsAssignedAccess @ 0x1800D3E38
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1800D5AA0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 */

void __fastcall CortanaHelpers::SetIsAssignedAccess(unsigned __int8 a1)
{
  int v1; // eax
  unsigned __int64 v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = _RegSetKeyValue(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         L"IsAssignedAccess",
         4u,
         (BYTE *)&v4,
         4u);
  v2 = (unsigned __int16)v1 | 0x80070000;
  if ( v1 <= 0 )
    v2 = (unsigned int)v1;
  if ( (v2 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
      (const char *)v2);
}
