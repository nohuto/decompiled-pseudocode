/*
 * XREFs of ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C00210F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C00210B0 (--1CBufferRealization@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CBufferRealization *__fastcall CBufferRealization::`vector deleting destructor'(CBufferRealization *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CBufferRealization::~CBufferRealization(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v4, v5);
  return this;
}
