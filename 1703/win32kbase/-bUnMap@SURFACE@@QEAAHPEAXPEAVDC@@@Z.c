/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C002C760
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C002B780 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C002CCB8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD30 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this, void *a2, struct DC *a3)
{
  W32PIDLOCK *v3; // rbx

  if ( (*((_QWORD *)this + 32) || (*((_DWORD *)this + 29) & 1) != 0) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v3 = (SURFACE *)((char *)this + 280);
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 280));
    W32PIDLOCK::vUnlockSimple(v3);
  }
  return 1LL;
}
