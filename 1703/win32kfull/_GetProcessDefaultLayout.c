/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0118230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  v2 = 0;
  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    UserSetLastError(12LL);
  }
  else
  {
    v4 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v4 = (_DWORD *)W32UserProbeAddress;
    *v4 = *v4;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v3, v4) + 772);
    return 1;
  }
  return v2;
}
