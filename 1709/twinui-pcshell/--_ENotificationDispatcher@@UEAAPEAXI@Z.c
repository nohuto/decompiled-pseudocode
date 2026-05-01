/*
 * XREFs of ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x180078D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

NotificationDispatcher *__fastcall NotificationDispatcher::`vector deleting destructor'(
        NotificationDispatcher *this,
        char a2)
{
  unsigned __int64 i; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 8); ++i )
    {
      v5 = *((_QWORD *)this + 7);
      v6 = *(_QWORD *)(v5 + 8 * i);
      if ( v6 )
      {
        *(_QWORD *)(v5 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
