/*
 * XREFs of ??_ECLaunchToMonitor@@UEAAPEAXI@Z @ 0x180305F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800F5B20 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

CLaunchToMonitor *__fastcall CLaunchToMonitor::`vector deleting destructor'(CLaunchToMonitor *this, char a2)
{
  *((_DWORD *)this + 15) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CLaunchToMonitor *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
