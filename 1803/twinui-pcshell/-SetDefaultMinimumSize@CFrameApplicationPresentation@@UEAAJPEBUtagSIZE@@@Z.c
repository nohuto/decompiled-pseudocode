/*
 * XREFs of ?SetDefaultMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180013C90
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetDefaultMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[20] = *a2;
  return 0LL;
}
