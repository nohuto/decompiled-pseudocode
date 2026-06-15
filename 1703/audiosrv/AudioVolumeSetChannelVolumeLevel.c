/*
 * XREFs of AudioVolumeSetChannelVolumeLevel @ 0x180088BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeSetChannelVolumeLevel(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 128LL))(*a1);
}
