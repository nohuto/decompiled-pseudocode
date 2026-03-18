/*
 * XREFs of ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C019AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0198978 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C019ACA4 (TdrBugcheckOnTimeout.c)
 */

void __fastcall CTDR_GDI_RESET_THREAD::Worker(CTDR_GDI_RESET_THREAD *this)
{
  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 0) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 1u) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
}
