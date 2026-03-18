/*
 * XREFs of ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C003A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::`scalar deleting destructor'(CFlipExBuffer *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v4, v5);
  return this;
}
