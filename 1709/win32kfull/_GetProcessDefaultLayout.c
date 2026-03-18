/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0121D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 CurrentProcess; // rdx
  _DWORD *v5; // rdx

  v3 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( CurrentProcess == gpepCSRSS )
  {
    UserSetLastError(12LL, CurrentProcess);
  }
  else
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(MmUserProbeAddress) + 780);
    return 1;
  }
  return v3;
}
