/*
 * XREFs of ??_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180079D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

CreativeFramework::Actions::LaunchUriService *__fastcall CreativeFramework::Actions::LaunchUriService::`scalar deleting destructor'(
        CreativeFramework::Actions::LaunchUriService *this,
        char a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    operator delete(*((void **)this + 9));
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 7LL;
  *((_WORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    operator delete(*((void **)this + 5));
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    operator delete(*((void **)this + 1));
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
