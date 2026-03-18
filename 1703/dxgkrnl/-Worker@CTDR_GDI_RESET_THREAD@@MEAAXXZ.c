/*
 * XREFs of ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C0193290
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0191714 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 */

void __fastcall CTDR_GDI_RESET_THREAD::Worker(CTDR_GDI_RESET_THREAD *this)
{
  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 0) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 1u) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
}
