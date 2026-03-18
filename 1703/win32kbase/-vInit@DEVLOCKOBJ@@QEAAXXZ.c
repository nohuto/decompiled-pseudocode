/*
 * XREFs of ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037D78
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00385F0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0037E54 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vInit(DEVLOCKOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
}
