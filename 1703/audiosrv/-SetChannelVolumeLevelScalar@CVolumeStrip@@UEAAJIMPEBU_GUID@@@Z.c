/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIMPEBU_GUID@@@Z @ 0x180088750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v4; // r8

  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, const struct _GUID *))(**((_QWORD **)this + 30) + 128LL))(
           *((_QWORD *)this + 30),
           a2,
           v4,
           a4);
}
