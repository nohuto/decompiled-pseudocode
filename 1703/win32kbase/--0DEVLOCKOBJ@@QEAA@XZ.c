/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00385F0
 * Callers:
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037D78 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vInit(this);
  return this;
}
