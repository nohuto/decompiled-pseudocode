/*
 * XREFs of ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x18017C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CSuperWetInkScribble *__fastcall CSuperWetInkScribble::`scalar deleting destructor'(
        CSuperWetInkScribble *this,
        char a2)
{
  CMILRefCountBase *v4; // rcx
  __int64 v5; // rcx

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 3);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
