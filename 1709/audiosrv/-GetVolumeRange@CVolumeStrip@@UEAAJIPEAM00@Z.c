/*
 * XREFs of ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x1800094B0
 * Callers:
 *     AudioVolumeGetVolumeRange @ 0x180009130 (AudioVolumeGetVolumeRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeRange(CVolumeStrip *this, __int64 a2, float *a3, float *a4, float *a5)
{
  CVolumeControlBase *v5; // r10
  __int64 (__fastcall *v6)(CVolumeControlBase *__hidden, unsigned int, float *, float *, float *); // rax

  v5 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v6 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, unsigned int, float *, float *, float *))(*(_QWORD *)v5 + 152LL);
  if ( v6 == CVolumeControlBase::GetVolumeRange )
    return CVolumeControlBase::GetVolumeRange(v5, a2, a3, a4, a5);
  else
    return v6(v5, a2, a3, a4, a5);
}
