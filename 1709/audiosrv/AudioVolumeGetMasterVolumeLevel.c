/*
 * XREFs of AudioVolumeGetMasterVolumeLevel @ 0x18006F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevel(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
}
