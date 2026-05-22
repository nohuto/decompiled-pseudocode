/*
 * XREFs of ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x180009370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
RegistryWatcher *__fastcall RegistryWatcher::`vector deleting destructor'(RegistryWatcher *this, char a2)
{
  void *v4; // rcx
  __int64 v5; // r9
  HKEY v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, void *))(*(_QWORD *)v5 + 288LL))(*((_QWORD *)this + 2), 1LL, v4);
      v4 = (void *)*((_QWORD *)this + 4);
    }
    CloseHandle(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = (HKEY)*((_QWORD *)this + 3);
  if ( v6 )
  {
    RegCloseKey(v6);
    *((_QWORD *)this + 3) = 0LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
