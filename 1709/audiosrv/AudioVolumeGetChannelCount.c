/*
 * XREFs of AudioVolumeGetChannelCount @ 0x18006F6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetChannelCount(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
}
