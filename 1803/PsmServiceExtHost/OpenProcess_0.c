/*
 * XREFs of OpenProcess_0 @ 0x18003EE46
 * Callers:
 *     ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380 (-GetApplicationName@@YAJKPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall OpenProcess_0(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId)
{
  return OpenProcess(dwDesiredAccess, bInheritHandle, dwProcessId);
}
