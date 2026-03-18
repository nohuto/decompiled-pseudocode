/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00FCBCC
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0004250 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  void *v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = PALLOCMEM2(0x100uLL, 1886221383LL, 1);
  *(_QWORD *)this = v2;
  if ( !v2 )
    EngSetLastError(8u);
  return this;
}
