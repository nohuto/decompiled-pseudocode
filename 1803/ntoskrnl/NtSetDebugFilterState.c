/*
 * XREFs of NtSetDebugFilterState @ 0x14061D608
 * Callers:
 *     DbgSetDebugFilterState @ 0x140170540 (DbgSetDebugFilterState.c)
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  __int64 v5; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  int *v7; // rdx

  v5 = ComponentId;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v7 = &Kd_WIN2000_Mask;
  if ( (unsigned int)v5 >= 0x9C )
  {
    if ( (_DWORD)v5 != -1 )
      v7 = (int *)&Kd_DEFAULT_Mask;
  }
  else
  {
    _mm_lfence();
    v7 = (int *)*(&KdComponentTable + v5);
  }
  if ( Level <= 0x1F )
    Level = 1 << Level;
  *v7 = (State != 0 ? Level : 0) | *v7 & ~Level;
  return 0;
}
