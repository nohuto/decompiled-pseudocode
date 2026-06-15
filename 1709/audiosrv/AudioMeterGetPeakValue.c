/*
 * XREFs of AudioMeterGetPeakValue @ 0x18006F5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioMeterGetPeakValue(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 160LL))(*a1);
}
