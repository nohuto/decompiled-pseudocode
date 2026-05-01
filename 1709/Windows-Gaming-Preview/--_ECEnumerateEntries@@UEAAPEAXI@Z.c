/*
 * XREFs of ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x18003E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

CEnumerateEntries *__fastcall CEnumerateEntries::`vector deleting destructor'(CEnumerateEntries *this, char a2)
{
  *(_QWORD *)this = &CEnumerateEntries::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
