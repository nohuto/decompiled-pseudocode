/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

CQueryKnownGameList *__fastcall CQueryKnownGameList::`vector deleting destructor'(CQueryKnownGameList *this, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  char *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &CQueryKnownGameList::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v5 = *((_QWORD *)this + 93);
  if ( v5 )
  {
    *((_QWORD *)this + 93) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 92);
  if ( v6 )
    operator delete(v6, v4);
  v7 = (char *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    operator delete(v8, v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x320uLL);
  return this;
}
