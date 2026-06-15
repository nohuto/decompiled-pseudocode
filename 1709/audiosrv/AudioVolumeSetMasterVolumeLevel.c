/*
 * XREFs of AudioVolumeSetMasterVolumeLevel @ 0x18006F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeSetMasterVolumeLevel(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
}
