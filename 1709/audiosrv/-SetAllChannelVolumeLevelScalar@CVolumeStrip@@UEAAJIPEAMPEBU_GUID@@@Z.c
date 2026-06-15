/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAMPEBU_GUID@@@Z @ 0x18006E200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetAllChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float *a3,
        const struct _GUID *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *, const struct _GUID *))(**((_QWORD **)this + 31) + 184LL))(
           *((_QWORD *)this + 31),
           a2,
           a3,
           a4);
}
