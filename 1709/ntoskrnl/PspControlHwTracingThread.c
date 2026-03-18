/*
 * XREFs of PspControlHwTracingThread @ 0x140716120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PspControlHwTracingThread(__int64 a1, int a2)
{
  if ( !a2 )
    *(_QWORD *)(a1 + 592) |= 0x100uLL;
}
