/*
 * XREFs of ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x180024560
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

AgileRegistrationList::AgileCallbackArray *__fastcall AgileRegistrationList::AgileCallbackArray::`vector deleting destructor'(
        AgileRegistrationList::AgileCallbackArray *this,
        char a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v4 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 6);
    while ( v4 != v5 )
    {
      if ( *v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      ++v4;
    }
    std::_Deallocate(*((void **)this + 5), (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) >> 3, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 9) = -1073741823;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
