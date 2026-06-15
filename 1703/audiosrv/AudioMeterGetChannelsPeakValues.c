/*
 * XREFs of AudioMeterGetChannelsPeakValues @ 0x180088AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioMeterGetChannelsPeakValues(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 216LL))(*a1);
}
