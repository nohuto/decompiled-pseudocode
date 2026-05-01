/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x180027BC0
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180027820 (-Release@CLaunchActivatedEventArgs@@UEAAKXZ.c)
 *     ??_ECLaunchActivatedEventArgs@@GPA@EAAPEAXI@Z @ 0x1800B0220 (--_ECLaunchActivatedEventArgs@@GPA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x180027AB4 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  CLaunchActivatedEventArgs::~CLaunchActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
