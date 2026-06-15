/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeStrip@@UEAAJPEAM@Z @ 0x18006CE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMasterVolumeLevel(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 30) + 104LL))(*((_QWORD *)this + 30), a2);
}
