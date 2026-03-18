/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C001FF4C
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C001F610 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001FE08 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00205FC (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct DC *a3)
{
  __int64 v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  HSEMAPHORE v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v10 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 34) )
    {
      v6 = (_QWORD *)((char *)this + 456);
      v7 = *((_QWORD *)this + 57);
      if ( *(SURFACE **)(v7 + 8) != (SURFACE *)((char *)this + 456)
        || (v8 = (_QWORD *)*((_QWORD *)this + 58), (_QWORD *)*v8 != v6) )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)this + 58) = (char *)this + 456;
      *v6 = v6;
      v9 = *((_QWORD *)this + 9);
      if ( v9 )
        MmUnmapViewOfSection(**((_QWORD **)this + 34), v9);
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    v4 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v4 + 64), 0);
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 280));
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
  }
  return 1LL;
}
