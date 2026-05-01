/*
 * XREFs of ?UnsubscribeFromServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::UnsubscribeFromServices(
        HolographicPositioner *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  DWORD LastError; // esi

  if ( *((_DWORD *)this + 42) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19));
    *((_DWORD *)this + 42) = 0;
  }
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 45);
  if ( v7 )
  {
    LastError = GetLastError();
    (**v7)(v7, 1LL);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 45) = 0LL;
  return 0LL;
}
