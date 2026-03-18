/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00A742C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemSprite) )
  {
    v3 = *(__int64 **)(ThreadWin32Thread + 312);
    *(_QWORD *)this = v3;
    v4 = *(_QWORD *)(ThreadWin32Thread + 320);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_QWORD *)this + 1) = v4;
    if ( v3 )
    {
      v6 = *v3;
      if ( (*(_DWORD *)(v6 + 36) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v6 + 512), 0LL, (struct DC *)v6);
        *((_DWORD *)this + 4) = 1;
      }
    }
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v5 + 36LL) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v5 + 512LL), 0LL, 0LL);
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
}
