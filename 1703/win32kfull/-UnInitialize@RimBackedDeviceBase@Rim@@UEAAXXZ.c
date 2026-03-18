/*
 * XREFs of ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C0209FD0
 * Callers:
 *     ??_ERimBackedDeviceBase@Rim@@UEAAPEAXI@Z @ 0x1C0209BE0 (--_ERimBackedDeviceBase@Rim@@UEAAPEAXI@Z.c)
 *     ??1InkDevice@@UEAA@XZ @ 0x1C021D01C (--1InkDevice@@UEAA@XZ.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C021EBF0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Rim::RimBackedDeviceBase::UnInitialize(Rim::RimBackedDeviceBase *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(Rim::RimBackedDeviceBase *))(*(_QWORD *)this + 32LL))(this);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    RawInputManagerDeviceObjectDereference(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
