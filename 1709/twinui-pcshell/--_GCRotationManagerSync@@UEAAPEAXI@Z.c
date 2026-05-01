/*
 * XREFs of ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x18003A950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CRotationManagerSync *__fastcall CRotationManagerSync::`scalar deleting destructor'(
        CRotationManagerSync *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 25) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CRotationManagerSync *)((char *)this + 40));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
