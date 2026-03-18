/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0032FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C00325BC (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

union _SLIST_HEADER *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        union _SLIST_HEADER *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = a2;
  DirectComposition::CApplicationChannel::~CApplicationChannel(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool(this, v5, v6);
  return this;
}
