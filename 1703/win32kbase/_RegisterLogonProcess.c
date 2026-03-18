/*
 * XREFs of _RegisterLogonProcess @ 0x1C008E8F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C008E9A0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C01BD7F8 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v9; // rcx

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 563) = v3;
      v7 = WmsgpConnect(a2);
      goto LABEL_4;
    }
    v9 = 5LL;
LABEL_12:
    UserSetLastError(v9, v4, v5, v6);
    return 0LL;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v9 = 0x2000000LL;
    goto LABEL_12;
  }
  gpidLogonUI = v3;
  v7 = 0;
LABEL_4:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v7 >= 0;
}
