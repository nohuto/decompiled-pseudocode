/*
 * XREFs of AudioVolumeSetMasterVolumeLevel @ 0x180088C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeSetMasterVolumeLevel(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 96LL))(*a1);
}
