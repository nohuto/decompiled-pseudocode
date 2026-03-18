/*
 * XREFs of ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C0153F50
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CTokenBase *__fastcall CTokenBase::`scalar deleting destructor'(CTokenBase *this, char a2)
{
  bool v2; // zf

  v2 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v2 )
    *((_DWORD *)this + 6) = 6;
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
