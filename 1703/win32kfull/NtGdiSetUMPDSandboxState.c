/*
 * XREFs of NtGdiSetUMPDSandboxState @ 0x1C011C7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetUMPDSandboxState(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( CurrentProcessWin32Process )
    *(_DWORD *)(CurrentProcessWin32Process + 264) = v2;
  return 0LL;
}
