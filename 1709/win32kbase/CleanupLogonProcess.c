/*
 * XREFs of CleanupLogonProcess @ 0x1C0075420
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0075320 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C01C4214 (WmsgpDisconnect.c)
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
