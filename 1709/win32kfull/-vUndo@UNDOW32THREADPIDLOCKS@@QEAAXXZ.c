/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00EC908
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025B780 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemSprite) )
  {
    v6 = *(__int64 **)(ThreadWin32Thread + 312);
    *(_QWORD *)this = v6;
    v7 = *(_QWORD *)(ThreadWin32Thread + 320);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_QWORD *)this + 1) = v7;
    if ( v6 )
    {
      v8 = *v6;
      if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v8 + 512), 0LL, (struct DC *)v8);
        *((_DWORD *)this + 4) = 1;
      }
    }
    v9 = *((_QWORD *)this + 1);
    if ( v9 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v9 + 512LL), 0LL, 0LL);
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
}
