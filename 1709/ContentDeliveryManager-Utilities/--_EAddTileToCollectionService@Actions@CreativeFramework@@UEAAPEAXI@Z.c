/*
 * XREFs of ??_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800775C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::`vector deleting destructor'(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        char a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 22);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    operator delete(*((void **)this + 18));
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 7LL;
  *((_WORD *)this + 72) = 0;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    operator delete(*((void **)this + 14));
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *((_QWORD *)this + 13) >= 8uLL )
    operator delete(*((void **)this + 10));
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  if ( *((_QWORD *)this + 9) >= 8uLL )
    operator delete(*((void **)this + 6));
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 5) >= 8uLL )
    operator delete(*((void **)this + 2));
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
