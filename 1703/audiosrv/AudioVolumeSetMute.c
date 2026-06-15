/*
 * XREFs of AudioVolumeSetMute @ 0x180088C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeSetMute(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 184LL))(*a1);
}
