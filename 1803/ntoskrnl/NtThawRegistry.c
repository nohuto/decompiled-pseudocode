/*
 * XREFs of NtThawRegistry @ 0x1406ED440
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 */

__int64 NtThawRegistry()
{
  unsigned int v0; // ebx
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess((__int64)v2);
    v0 = CmThawRegistry();
    KiUnstackDetachProcess((__int64)v2, 0LL);
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v0;
}
