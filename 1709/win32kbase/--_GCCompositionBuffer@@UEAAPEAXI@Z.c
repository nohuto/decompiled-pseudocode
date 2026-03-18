/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C0152850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003A350 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CRegion **__fastcall CCompositionBuffer::`scalar deleting destructor'(CRegion **this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
