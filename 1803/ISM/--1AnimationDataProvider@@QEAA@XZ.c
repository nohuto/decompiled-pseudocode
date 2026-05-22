/*
 * XREFs of ??1AnimationDataProvider@@QEAA@XZ @ 0x18008F03C
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180063C30 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AnimationDataProvider::~AnimationDataProvider(AnimationDataProvider *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rax

  *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    (**v5)(v5);
  }
}
