/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJMPEBU_GUID@@@Z @ 0x18006E280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::SetMasterVolumeLevelScalar(CVolumeStrip *this, float a2, const struct _GUID *a3)
{
  __int64 v3; // rdx

  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 30) + 96LL))(
           *((_QWORD *)this + 30),
           v3,
           a3);
}
