/*
 * XREFs of ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x18000B710
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1800106D8 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::v_ShutdownServices(CApplicationManager *this, struct IProfferService *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  HWND v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 i; // rdi
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx

  v3 = &unk_180242538;
  v4 = 11LL;
  do
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD, struct IProfferService *))(*(_QWORD *)*v3 + 32LL))(*v3, a2);
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  CApplicationManager::_ShutdownServiceProviders((CApplicationManager *)((char *)this - 72));
  v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 77) + 24LL))(*((_QWORD *)this + 77));
  RemovePropW(v6, L"AllowConsentToStealFocus");
  v7 = *((_QWORD *)this + 77);
  if ( v7 )
  {
    *((_QWORD *)this + 77) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 82);
  if ( v8 )
  {
    v9 = v8[4];
    for ( i = 0LL; i < v9; ++i )
    {
      v11 = *(void (__fastcall ****)(_QWORD, __int64))(v8[3] + 8 * i);
      if ( v11 )
        (**v11)(v11, 1LL);
    }
    v12 = (void *)v8[3];
    if ( v12 )
    {
      CoTaskMemFree(v12);
      v8[3] = 0LL;
    }
    v8[4] = 0LL;
    v8[6] = 0LL;
    v13 = (void *)v8[3];
    if ( v13 )
    {
      CoTaskMemFree(v13);
      v8[3] = 0LL;
    }
    v8[4] = 0LL;
    v8[6] = 0LL;
    v14 = v8[1];
    if ( v14 )
    {
      v8[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    operator delete(v8);
  }
  *((_QWORD *)this + 82) = 0LL;
  return 0LL;
}
