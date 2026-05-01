/*
 * XREFs of Str_SetPtrW @ 0x1801909F0
 * Callers:
 *     ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x180146DB0 (-SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 *     ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z @ 0x180146E10 (-SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180146EF0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800028C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

BOOL __stdcall Str_SetPtrW(LPWSTR *ppsz, LPCWSTR psz)
{
  __int64 v2; // rbx
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  HANDLE ProcessHeap; // rcx
  char *v8; // rax
  void *v9; // rbx
  HANDLE v10; // rax

  v2 = 0LL;
  if ( psz )
  {
    v5 = lstrlenW(psz) + 1;
    v6 = v5;
    ProcessHeap = GetProcessHeap();
    if ( !is_mul_ok(2uLL, v5) )
      return 0;
    v8 = (char *)HeapAlloc(ProcessHeap, (2 * (unsigned __int128)v5) >> 64, 2LL * v5);
    v2 = (__int64)v8;
    if ( !v8 )
      return 0;
    StringCchCopyW(v8, v6, (char *)psz);
  }
  v9 = (void *)_InterlockedExchange64((volatile __int64 *)ppsz, v2);
  if ( v9 )
  {
    v10 = GetProcessHeap();
    if ( !HeapFree(v10, 0, v9) )
      GetLastError();
  }
  return 1;
}
