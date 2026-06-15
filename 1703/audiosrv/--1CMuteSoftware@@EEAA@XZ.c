/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x180087CA0
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x180087F90 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  if ( *((_QWORD *)this + 11) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool);
    *((_QWORD *)this + 11) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CMuteControlBase::~CMuteControlBase(this);
}
