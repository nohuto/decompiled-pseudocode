/*
 * XREFs of AudioVolumeGetMasterVolumeLevel @ 0x180088BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevel(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
}
