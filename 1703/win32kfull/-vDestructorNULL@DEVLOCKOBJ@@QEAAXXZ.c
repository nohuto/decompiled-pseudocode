/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0255808
 * Callers:
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0254B9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0074850 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKOBJ::vDestructorNULL(DEVLOCKOBJ *this)
{
  __int64 ThreadWin32Thread; // rax
  int v3; // eax
  __int64 v4; // rdx

  DEVLOCKOBJ::bDisposeTrgDco(this);
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = *((_DWORD *)this + 6);
  if ( (v3 & 8) != 0 )
    *((_DWORD *)this + 6) = v3 & 0xFFFFFFF7;
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v4);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  UntrapAppContainerRendering((HDC *)this + 8, (HSURF *)this + 7, (HSURF *)this + 6, (unsigned int *)this + 18);
}
