/*
 * XREFs of ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1800E782C
 * Callers:
 *     ?_Destroy@?$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ @ 0x1800E78E0 (-_Destroy@-$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1800ECECC (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1800EDD14 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 *     _std::shared_ptr_DDAScreenCapture_::_Resetp_DDAScreenCapture__::_1_::catch$1 @ 0x1801EC4F9 (_std--shared_ptr_DDAScreenCapture_--_Resetp_DDAScreenCapture__--_1_--catch$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

DDAScreenCapture *__fastcall DDAScreenCapture::`scalar deleting destructor'(DDAScreenCapture *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  operator delete(this);
  return this;
}
