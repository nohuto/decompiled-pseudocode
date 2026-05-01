/*
 * XREFs of ?EnableNotifications@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085440
 * Callers:
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     <none>
 */

void __fastcall CortanaExperienceManagerNotification::EnableNotifications(CortanaExperienceManagerNotification *this)
{
  *((_BYTE *)this + 40) = 1;
}
