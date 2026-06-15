/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x180017D40
 * Callers:
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x18002F430 (AudioVolumeGetMasterVolumeLevelScalar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevelScalar(CVolumeStrip *this, float *a2)
{
  CVolumeControlBase *v2; // rcx
  __int64 (__fastcall *v3)(CVolumeControlBase *, float *); // rax

  v2 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v3 = *(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)v2 + 112LL);
  if ( v3 == CVolumeControlBase::GetMasterVolumeLevelScalar )
    return CVolumeControlBase::GetMasterVolumeLevelScalar(v2, a2);
  else
    return v3(v2, a2);
}
