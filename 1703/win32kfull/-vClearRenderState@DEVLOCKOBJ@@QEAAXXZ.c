/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00742FC
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0071600 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00742B0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0074850 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x200) != 0 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    if ( !*((_QWORD *)this + 6) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v4 = *ThreadWin32Thread;
        if ( v4 )
          *(_BYTE *)(v4 + 328) = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
}
