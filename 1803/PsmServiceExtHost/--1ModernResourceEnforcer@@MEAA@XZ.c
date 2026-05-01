/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x18004E054
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x18004E0F0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = (__int64 **)((char *)this + 320);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 43) = 0LL;
  v7 = (void *)*((_QWORD *)this + 42);
  if ( v7 )
    operator delete(v7);
  v8 = *((_QWORD *)this + 39);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
