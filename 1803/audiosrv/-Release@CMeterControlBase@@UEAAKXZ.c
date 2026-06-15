/*
 * XREFs of ?Release@CMeterControlBase@@UEAAKXZ @ 0x18004A980
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18004AB90 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Release(CMeterControlBase *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v2)(CMeterHardware *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(void *(__fastcall **)(CMeterHardware *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v2 == CMeterHardware::`scalar deleting destructor' )
      CMeterHardware::`scalar deleting destructor'(this, 1u);
    else
      v2(this, 1u);
  }
  return v1;
}
