/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C0151430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C00127D0 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CRegion **__fastcall CCompositionBuffer::`scalar deleting destructor'(CRegion **this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
