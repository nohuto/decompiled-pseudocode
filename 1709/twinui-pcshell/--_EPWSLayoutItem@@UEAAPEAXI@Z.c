/*
 * XREFs of ??_EPWSLayoutItem@@UEAAPEAXI@Z @ 0x1800F1F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PWSLayoutItem *__fastcall PWSLayoutItem::`vector deleting destructor'(PWSLayoutItem *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
