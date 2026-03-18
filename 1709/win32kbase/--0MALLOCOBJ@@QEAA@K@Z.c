/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00FD03C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C00FD2F0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
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
