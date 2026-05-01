/*
 * XREFs of ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1802D6C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CObjectWithThreadUseDetection@@QEAA@XZ @ 0x180104908 (--1CObjectWithThreadUseDetection@@QEAA@XZ.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4 (--1CWRLObjectWithSite@@QEAA@XZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1802C1E30 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

TabletModePositionerOperation *__fastcall TabletModePositionerOperation::`scalar deleting destructor'(
        TabletModePositionerOperation *this,
        char a2)
{
  CObjectWithThreadUseDetection::~CObjectWithThreadUseDetection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((TabletModePositionerOperation *)((char *)this + 24));
  CWRLObjectWithSite::~CWRLObjectWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
