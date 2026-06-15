/*
 * XREFs of ?GetHandle@CAudioStream@@UEAA_KXZ @ 0x18003FDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAudioStream::GetHandle(CAudioStream *this)
{
  return *((_QWORD *)this + 6);
}
