/*
 * XREFs of ?ResetVolumeRampDelays@CAudioStream@@MEAAXXZ @ 0x18002F880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::ResetVolumeRampDelays(CAudioStream *this)
{
  *((_QWORD *)this + 13) = 0LL;
}
