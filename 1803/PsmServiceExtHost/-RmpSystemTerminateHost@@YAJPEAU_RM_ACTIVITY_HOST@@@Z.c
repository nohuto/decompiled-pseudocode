/*
 * XREFs of ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180061B9C
 * Callers:
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x18005CA94 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemTerminateHost(const WCHAR *a1)
{
  __int64 v2; // rcx
  signed int LastError; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE hToken; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 155);
  hToken = 0LL;
  if ( (unsigned int)QueryUserToken(v2, &hToken) && ImpersonateLoggedOnUser(hToken) )
  {
    RtlInitUnicodeString(&DestinationString, a1 + 44);
    LastError = BiTerminateApplicationHost(&DestinationString, *((unsigned int *)a1 + 156), 1LL);
    if ( LastError >= 0 )
      LastError = 0;
    RevertToSelf();
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hToken )
    CloseHandle(hToken);
  return (unsigned int)LastError;
}
