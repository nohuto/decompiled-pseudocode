/*
 * XREFs of NtFreezeRegistry @ 0x1406EBFB8
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess((__int64)v4);
      v2 = CmFreezeRegistry(a1);
      KiUnstackDetachProcess((__int64)v4, 0LL);
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
