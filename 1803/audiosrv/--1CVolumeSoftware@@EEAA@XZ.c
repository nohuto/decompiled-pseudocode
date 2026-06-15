/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x1800A54D4
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x1800A5730 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  if ( *((_QWORD *)this + 38) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool);
    *((_QWORD *)this + 38) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CVolumeControlBase::~CVolumeControlBase(this);
}
