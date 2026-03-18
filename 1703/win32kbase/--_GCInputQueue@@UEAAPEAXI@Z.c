/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C00104A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00103A0 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
