/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x1800091C0
 * Callers:
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x180008580 (AudioVolumeGetMasterVolumeLevelScalar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevelScalar(CVolumeStrip *this, float *a2)
{
  CVolumeControlBase *v2; // rcx
  __int64 (__fastcall *v3)(CVolumeControlBase *__hidden, float *); // rax

  v2 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v3 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, float *))(*(_QWORD *)v2 + 112LL);
  if ( v3 == CVolumeControlBase::GetMasterVolumeLevelScalar )
    return CVolumeControlBase::GetMasterVolumeLevelScalar(v2, a2);
  else
    return v3(v2, a2);
}
