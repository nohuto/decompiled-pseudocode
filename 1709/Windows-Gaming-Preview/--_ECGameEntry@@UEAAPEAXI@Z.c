/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, unsigned __int64 a2)
{
  char v3; // di
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = a2;
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    operator delete(v4, a2);
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
    operator delete(v5, a2);
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
    operator delete(v6, a2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
