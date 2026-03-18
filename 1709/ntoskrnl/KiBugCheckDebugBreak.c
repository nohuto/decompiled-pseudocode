/*
 * XREFs of KiBugCheckDebugBreak @ 0x140206350
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140206120 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x140146130 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140188EF0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1402069C8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
