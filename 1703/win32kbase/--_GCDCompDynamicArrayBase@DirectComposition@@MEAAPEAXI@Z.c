/*
 * XREFs of ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C013F910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArrayBase::`scalar deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
