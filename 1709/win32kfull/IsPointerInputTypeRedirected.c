/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01CE540
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1C01CE4A0 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1)
{
  int v1; // edi
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return IsPointerInputRedirected(
           *(_DWORD *)(CurrentProcessWin32Process + 56),
           *(_QWORD *)(grpdeskRitInput + 8LL),
           v1,
           0LL);
}
