/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18002A140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180001738 (--3@YAXPEAX@Z.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  bool v2; // zf
  void *v5; // rcx

  v2 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &ATL::CWin32Heap::`vftable';
  if ( !v2 )
  {
    v5 = (void *)*((_QWORD *)this + 1);
    if ( v5 )
      HeapDestroy(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
