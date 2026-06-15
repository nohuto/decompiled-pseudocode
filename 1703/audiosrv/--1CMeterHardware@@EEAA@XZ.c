/*
 * XREFs of ??1CMeterHardware@@EEAA@XZ @ 0x180083620
 * Callers:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x1800836B0 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMeterHardware::~CMeterHardware(CMeterHardware *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CMeterHardware::`vftable';
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CMeterControlBase::~CMeterControlBase(this);
}
