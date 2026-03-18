/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0022BF8
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C005CCA0 (GreGetNearestColor.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00224D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vInit(this);
  return this;
}
