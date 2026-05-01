/*
 * XREFs of ??_GJointDivider@@UEAAPEAXI@Z @ 0x1802E2E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4 (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

JointDivider *__fastcall JointDivider::`scalar deleting destructor'(JointDivider *this, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v4 )
    DeleteObject(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
