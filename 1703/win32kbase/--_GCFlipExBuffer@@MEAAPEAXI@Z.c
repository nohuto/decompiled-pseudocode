/*
 * XREFs of ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C0012620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00125A8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::`scalar deleting destructor'(CFlipExBuffer *this, char a2)
{
  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
