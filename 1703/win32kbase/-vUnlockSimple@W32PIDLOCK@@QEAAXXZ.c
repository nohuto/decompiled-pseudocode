/*
 * XREFs of ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C002CCB8
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C002C674 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C002C760 (-bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C002C7B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSimple(W32PIDLOCK *this)
{
  LONG v3; // r8d

  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
  if ( *(_DWORD *)this == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && (*((_DWORD *)this + 2))-- == 1 )
  {
    *(_DWORD *)this = 0;
    v3 = *((_DWORD *)this + 1);
    if ( v3 )
    {
      KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 5), 0, v3, 0);
      *((_DWORD *)this + 1) = 0;
    }
  }
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
}
