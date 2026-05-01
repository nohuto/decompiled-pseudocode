/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003F830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    operator delete(v4);
  operator delete(*((void **)this + 8));
  operator delete(*((void **)this + 7));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
