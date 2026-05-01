/*
 * XREFs of ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x18003CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CAppViewManager *__fastcall CAppViewManager::`scalar deleting destructor'(CAppViewManager *this, char a2)
{
  __int64 v3; // rcx
  unsigned __int64 i; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 j; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 16) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 17); ++i )
    {
      v6 = *((_QWORD *)this + 16);
      v7 = *(_QWORD *)(v6 + 8 * i);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((_QWORD *)this + 10) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 11); ++j )
    {
      v10 = *((_QWORD *)this + 10);
      v11 = *(_QWORD *)(v10 + 8 * j);
      if ( v11 )
      {
        *(_QWORD *)(v10 + 8 * j) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    LocalFree(*((HLOCAL *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
