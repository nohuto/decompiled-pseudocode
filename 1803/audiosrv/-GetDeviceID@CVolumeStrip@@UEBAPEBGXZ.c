/*
 * XREFs of ?GetDeviceID@CVolumeStrip@@UEBAPEBGXZ @ 0x1800091B0
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180008EC0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CVolumeStrip::GetDeviceID(CVolumeStrip *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 28);
}
