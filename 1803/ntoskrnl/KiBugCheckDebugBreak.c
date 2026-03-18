/*
 * XREFs of KiBugCheckDebugBreak @ 0x140243B30
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1402438B0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401716E0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401B2B50 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1402441A8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
