/*
 * XREFs of ??1?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x180045098
 * Callers:
 *     _dynamic_atexit_destructor_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180046EA0 (_dynamic_atexit_destructor_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 * Callees:
 *     <none>
 */

void DynArray<CTopLevelWindow::WindowFrame *,0>::~DynArray<CTopLevelWindow::WindowFrame *,0>()
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&CTopLevelWindow::s_rgpwfWindowFrames);
}
