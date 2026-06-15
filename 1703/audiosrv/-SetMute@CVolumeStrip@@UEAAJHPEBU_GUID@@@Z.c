/*
 * XREFs of ?SetMute@CVolumeStrip@@UEAAJHPEBU_GUID@@@Z @ 0x1800887B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::SetMute(CVolumeStrip *this, __int64 a2, const struct _GUID *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 31) + 64LL))(
           *((_QWORD *)this + 31),
           a2,
           a3);
}
