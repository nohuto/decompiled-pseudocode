/*
 * XREFs of _RegisterLogonProcess @ 0x1C0096B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0096BE0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C01C4670 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  int v6; // ecx

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 563) = v3;
      v4 = WmsgpConnect(a2);
      goto LABEL_4;
    }
    v6 = 5;
LABEL_12:
    UserSetLastError(v6);
    return 0LL;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v6 = 0x2000000;
    goto LABEL_12;
  }
  gpidLogonUI = v3;
  v4 = 0;
LABEL_4:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v4 >= 0;
}
