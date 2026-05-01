/*
 * XREFs of ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801DA714
 * Callers:
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1801D6960 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx

  *a2 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 360);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 368) - v7) >= 8 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 8 * v8);
      if ( v9 )
      {
        if ( a3 == (*(int (__fastcall **)(__int64))(*(_QWORD *)v9 + 216LL))(v9) )
          break;
      }
      ++v6;
      v7 = *(_QWORD *)(a1 + 360);
      v8 = v6;
      if ( v6 == (*(_QWORD *)(a1 + 368) - v7) >> 3 )
        return a2;
    }
    v10 = *a2;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8 * v8);
    *a2 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return a2;
}
