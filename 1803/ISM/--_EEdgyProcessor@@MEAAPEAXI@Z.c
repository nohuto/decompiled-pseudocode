/*
 * XREFs of ??_EEdgyProcessor@@MEAAPEAXI@Z @ 0x1800B2E0C
 * Callers:
 *     ??_EEdgyProcessor@@O7EAAPEAXI@Z @ 0x1800B3580 (--_EEdgyProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800B45EC (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::`vector deleting destructor'(EdgyProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &EdgyProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  EdgyImpl::Reset((EdgyProcessor *)((char *)this + 64));
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
