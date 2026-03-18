/*
 * XREFs of CleanupLogonProcess @ 0x1C00674C0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006737C (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C01BD41C (WmsgpDisconnect.c)
 */

NTSTATUS CleanupLogonProcess()
{
  NTSTATUS result; // eax

  if ( gWinLogonRpcHandle )
  {
    result = WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  if ( ghSMSS )
  {
    result = ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  return result;
}
