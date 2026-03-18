/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C0145AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0010DB8 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        char a2)
{
  DirectComposition::CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
