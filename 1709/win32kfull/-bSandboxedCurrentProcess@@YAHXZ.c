/*
 * XREFs of ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00BA618
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00B8AE0 (NtGdiSetPUMPDOBJ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00BA100 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSandboxedCurrentProcess(__int64 a1)
{
  __int64 result; // rax

  result = PsGetCurrentProcessWin32Process(a1);
  if ( result )
    return *(_DWORD *)(result + 264) | *(_DWORD *)(result + 12) & 0x80u;
  return result;
}
