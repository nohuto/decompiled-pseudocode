/*
 * XREFs of ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x18026B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4 (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

CPPIAllUpViewService *__fastcall CPPIAllUpViewService::`scalar deleting destructor'(
        CPPIAllUpViewService *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
