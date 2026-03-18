/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1C00DFB54
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00101F0 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00DF5C4 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  char *v0; // rax
  CAsyncKeyEventMonitor *v1; // rbx

  v0 = (char *)Win32AllocPoolZInit(0x68uLL, 1634945861LL);
  v1 = (CAsyncKeyEventMonitor *)v0;
  if ( v0 )
  {
    *(_DWORD *)v0 = 0;
    *((_DWORD *)v0 + 1) = 0;
    *((_QWORD *)v0 + 12) = 0LL;
    v0[88] = 0;
    memset(v0 + 8, -1, 0x50uLL);
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpAsyncKeyEventMonitor, (signed __int64)v1, 0LL) )
    CAsyncKeyEventMonitor::`scalar deleting destructor'(v1);
  return 0LL;
}
