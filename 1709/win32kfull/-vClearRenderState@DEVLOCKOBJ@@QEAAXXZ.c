/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B06C
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0029060 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C002B020 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002B650 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 6) & 0x801000) != 0 )
      *(_DWORD *)(v2 + 40) &= ~2u;
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x200) != 0 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( !*((_QWORD *)this + 6) )
        DC::vClearRendering(*((DC **)this + 4));
      if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3, v5, v6) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v9 = *ThreadWin32Thread;
            if ( v9 )
              *(_BYTE *)(v9 + 328) = 0;
          }
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
  }
}
