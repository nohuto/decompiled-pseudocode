/*
 * XREFs of NtInitializeRegistry @ 0x14061371C
 * Callers:
 *     <none>
 * Callees:
 *     ZwInitializeRegistry @ 0x1401A93E0 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x14061378C (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1406F9524 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  KPROCESSOR_MODE PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( Flag == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        return CmpSyncNextBackupHive();
      else
        return -1073741727;
    }
    else
    {
      return ZwInitializeRegistry(Flag);
    }
  }
  else if ( (unsigned __int16)(Flag - 4096) > 0x3E7u )
  {
    if ( Flag == 2 )
    {
      return CmpHandlePageFileOpenNotification();
    }
    else if ( Flag >= 2u )
    {
      return -1073741811;
    }
    else
    {
      return CmCompleteRegistryInitialization();
    }
  }
  else
  {
    return CmpAcceptBoot();
  }
}
