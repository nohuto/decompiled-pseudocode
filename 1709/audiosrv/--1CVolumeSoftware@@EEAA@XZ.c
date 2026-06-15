/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x18006C1A8
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x18006C490 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  if ( *((_QWORD *)this + 37) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool);
    *((_QWORD *)this + 37) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CVolumeControlBase::~CVolumeControlBase(this);
}
