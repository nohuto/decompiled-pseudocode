/*
 * XREFs of ??1CMILFactory@@MEAA@XZ @ 0x1801B26B8
 * Callers:
 *     ??_ECMILFactory@@MEAAPEAXI@Z @ 0x1801B2700 (--_ECMILFactory@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILFactory::~CMILFactory(CMILFactory *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMILFactory::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
