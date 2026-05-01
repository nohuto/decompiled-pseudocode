/*
 * XREFs of ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x1801DD100
 * Callers:
 *     <none>
 * Callees:
 *     ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1801DD134 (--1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DesktopSingleViewShellExperiencePersonality *__fastcall DesktopSingleViewShellExperiencePersonality::`vector deleting destructor'(
        DesktopSingleViewShellExperiencePersonality *this,
        char a2)
{
  DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
