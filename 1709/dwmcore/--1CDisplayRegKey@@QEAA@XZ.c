/*
 * XREFs of ??1CDisplayRegKey@@QEAA@XZ @ 0x18019222C
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayRegKey::~CDisplayRegKey(HKEY *this)
{
  if ( *(_BYTE *)this )
  {
    RegCloseKey(this[1]);
    *(_BYTE *)this = 0;
  }
}
