/*
 * XREFs of ?get_ProcessId@Win32BackedViewHostItem@@UEAAJPEAI@Z @ 0x1800E2890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_ProcessId(Win32BackedViewHostItem *this, unsigned int *a2)
{
  HWND v3; // rcx
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = (HWND)*((_QWORD *)this + 9);
  dwProcessId = 0;
  GetWindowThreadProcessId(v3, &dwProcessId);
  *a2 = dwProcessId;
  return 0LL;
}
