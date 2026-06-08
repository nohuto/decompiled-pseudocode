/*
 * XREFs of IoHaltC1Idle @ 0x1C000BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001374 (ReadGenAddr.c)
 *     C1Halt @ 0x1C0004A60 (C1Halt.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, int a2)
{
  if ( a2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  C1Halt();
}
