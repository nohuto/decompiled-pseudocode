/*
 * XREFs of ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x1802AEAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4 (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

CLauncherAndDefaultSwitchTransitionTarget *__fastcall CLauncherAndDefaultSwitchTransitionTarget::`vector deleting destructor'(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        char a2)
{
  *((_DWORD *)this + 9) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite((CWinRTApplicationView **)this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
